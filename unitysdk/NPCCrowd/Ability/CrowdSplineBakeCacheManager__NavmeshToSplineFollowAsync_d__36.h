#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace NPCCrowd::AI { class NPCCrowdActionManager; }
namespace NPCCrowd::Ability { class CrowdSplineBakeCacheManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x66A120)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeCacheManager__NavmeshToSplineFollowAsync_d__36_TypeDefinitionIndex = 89337;

	struct alignas(8) CrowdSplineBakeCacheManager__NavmeshToSplineFollowAsync_d__36
	{
		::NPCCrowd::Ability::CrowdSplineBakeCacheManager* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::NPCCrowd::AI::NPCCrowdActionManager* _actionManager_5__2; // 0x20
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 _navHandler_5__3; // 0x34
		::System::Single stopRadius; // 0x38
		::System::Boolean snapToGround; // 0x3C
		::System::UInt32 entityId; // 0x40
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__36_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
