#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B18A907A8E4C5C9C;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9BDA8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_SHOWBOXFLY_OFFSET UNITYSDK_OFFSET(0x9BDAA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDABB0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleliveRewardFlyController_TypeDefinitionIndex = 69251;

	class IdleliveRewardFlyController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* BOX_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* GEM_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* TECH_POINT_FLY_PREFAB_PATH; // 0x0
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void ShowBoxFly(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER_SHOWBOXFLY_OFFSET))(this, startPos, endPos);
		}
	};
}
