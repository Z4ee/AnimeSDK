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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A65B5F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_FLY_OFFSET UNITYSDK_OFFSET(0x1A65B190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A65B670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SETCANVAS_OFFSET UNITYSDK_OFFSET(0x1A65B550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A65B630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65B8F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFly_TypeDefinitionIndex = 71569;

	class IdleLiveEquipFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		::System::Single Field_5_2; // 0x18
		::UnityEngine::Transform* Field_5_3; // 0x20
		::UnityEngine::Transform* Field_5_4; // 0x28
		::UnityEngine::Transform* Field_5_5; // 0x30
		::RPG::Client::QuadricBezier* Field_5_6; // 0x38
		::UnityEngine::Animation* Field_5_7; // 0x40
		::RPG::Client::MonoUILayerOrderAdjuster* Field_5_8; // 0x48

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
