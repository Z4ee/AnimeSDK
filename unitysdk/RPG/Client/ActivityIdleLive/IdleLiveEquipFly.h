#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUILayerOrderAdjuster; }
namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0DE410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_FLY_OFFSET UNITYSDK_OFFSET(0x1C0DDFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C0DE490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SETCANVAS_OFFSET UNITYSDK_OFFSET(0x1C0DE370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C0DE450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DE710)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFly_TypeDefinitionIndex = 74875;

	class IdleLiveEquipFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* PNBBLMANKPC; // 0x0
		// static const ::System::Single HAFLCIGAPFF; // 0x0
		::System::Single LJEOPKOBAGF; // 0x18
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x20
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x28
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x30
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x38
		::UnityEngine::Animation* KCOAILOHDND; // 0x40
		::RPG::Client::MonoUILayerOrderAdjuster* KDHFKGMCKCJ; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY__CTOR_OFFSET))(this);
		}

		::System::Void Fly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_FLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SETCANVAS_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_ONCREATE_OFFSET))(this, a1);
		}
	};
}
