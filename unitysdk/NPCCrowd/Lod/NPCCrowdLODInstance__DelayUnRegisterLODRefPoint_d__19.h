#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdLODInstance; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x570DF0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLODInstance__DelayUnRegisterLODRefPoint_d__19_TypeDefinitionIndex = 49525;

	struct alignas(8) NPCCrowdLODInstance__DelayUnRegisterLODRefPoint_d__19
	{
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::NPCCrowd::Lod::NPCCrowdLODInstance* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x2C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__DELAYUNREGISTERLODREFPOINT_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
