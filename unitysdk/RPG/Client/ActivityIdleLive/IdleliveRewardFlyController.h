#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_95E1BEF84A79D9EB;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB1766F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_SHOWBOXFLY_OFFSET UNITYSDK_OFFSET(0xB176860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB176A10)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleliveRewardFlyController_TypeDefinitionIndex = 70063;

	class IdleliveRewardFlyController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* BOX_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* GEM_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* TECH_POINT_FLY_PREFAB_PATH; // 0x0
		::Class_1_95E1BEF84A79D9EB* _PoolMgr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void ShowBoxFly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_SHOWBOXFLY_OFFSET))(this, a1, a2);
		}
	};
}
