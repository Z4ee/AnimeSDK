#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/NPCCrowd/AI/AIActionSetStateParamConfig.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCUnionAnimatorManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x48F950)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCUnionAnimatorManager__RegisterStateParamInitActionNextFrame_d__29_TypeDefinitionIndex = 84742;

	struct alignas(8) NPCUnionAnimatorManager__RegisterStateParamInitActionNextFrame_d__29
	{
		::NPCCrowd::Accessories::NPCUnionAnimatorManager* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::NPCCrowd::AI::AIActionSetStateParamConfig actionConfig; // 0x20
		::System::Int32 __1__state; // 0x38
		::System::Int32 _CheckCnt_5__2; // 0x3C
		::System::UInt32 entityId; // 0x40
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
