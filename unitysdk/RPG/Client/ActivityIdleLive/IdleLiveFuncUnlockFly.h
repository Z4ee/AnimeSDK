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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B555E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_FLY_OFFSET UNITYSDK_OFFSET(0x9B55230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B55660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B55620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B55970)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFuncUnlockFly_TypeDefinitionIndex = 69235;

	class IdleLiveFuncUnlockFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::System::Single Field_5_1; // 0x18
		::UnityEngine::Transform* Field_5_2; // 0x20
		::UnityEngine::Transform* Field_5_3; // 0x28
		::UnityEngine::Transform* Field_5_4; // 0x30
		::RPG::Client::QuadricBezier* Field_5_5; // 0x38
		::UnityEngine::Animation* Field_5_6; // 0x40
		::UnityEngine::UI::Text* Field_5_7; // 0x48
		::UnityEngine::UI::Image* Field_5_8; // 0x50
		::UnityEngine::Transform* Field_5_9; // 0x58

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
