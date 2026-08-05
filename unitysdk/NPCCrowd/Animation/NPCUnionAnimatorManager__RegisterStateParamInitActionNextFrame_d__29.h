#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/NPCCrowd/AI/AIActionSetStateParamConfig.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class NPCUnionAnimatorManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x60F7F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimatorManager__RegisterStateParamInitActionNextFrame_d__29_TypeDefinitionIndex = 61916;

	struct alignas(8) NPCUnionAnimatorManager__RegisterStateParamInitActionNextFrame_d__29
	{
		::NPCCrowd::AI::AIActionSetStateParamConfig actionConfig; // 0x10
		::NPCCrowd::Animation::NPCUnionAnimatorManager* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::UInt32 entityId; // 0x38
		::System::Int32 _CheckCnt_5__2; // 0x3C
		::System::Int32 __1__state; // 0x40
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__REGISTERSTATEPARAMINITACTIONNEXTFRAME_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
