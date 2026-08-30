#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client::ActivityIdleLive { class FuncUnlockUiData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0E1B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_FLY_OFFSET UNITYSDK_OFFSET(0x1C0E17B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C0E1BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0E1B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E1EE0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFuncUnlockFly_TypeDefinitionIndex = 74876;

	class IdleLiveFuncUnlockFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* PNBBLMANKPC; // 0x0
		::System::Single LJEOPKOBAGF; // 0x18
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x20
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x28
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x30
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x38
		::UnityEngine::Animation* KCOAILOHDND; // 0x40
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x48
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x50
		::UnityEngine::Transform* AMIKEMOINMJ; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY__CTOR_OFFSET))(this);
		}

		::System::Void Fly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ActivityIdleLive::FuncUnlockUiData* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::FuncUnlockUiData*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_FLY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_SPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_ONCREATE_OFFSET))(this, a1);
		}
	};
}
