#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUILayerOrderAdjuster; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9BD9A20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9BD9A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9BD9AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_SETCANVAS_OFFSET UNITYSDK_OFFSET(0x9BD9C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9BD99E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD9D00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTimedEffect_TypeDefinitionIndex = 69250;

	class IdleLiveTimedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoUILayerOrderAdjuster* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETIMEDEFFECT_SETCANVAS_OFFSET))(this, a1);
		}
	};
}
