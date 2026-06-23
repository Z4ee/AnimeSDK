#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdLODInstance; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6A6D60)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__22_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLODInstance__DelayUnRegisterLODRefPoint_d__22_TypeDefinitionIndex = 53692;

	struct alignas(8) NPCCrowdLODInstance__DelayUnRegisterLODRefPoint_d__22
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::NPCCrowd::Lod::NPCCrowdLODInstance* __4__this; // 0x18
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint; // 0x20
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__22_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
