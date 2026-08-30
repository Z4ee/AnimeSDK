#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AE0A10)
#define RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B79770)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass__Warmup_d__4_TypeDefinitionIndex = 36877;

	struct alignas(8) DLSSPass__Warmup_d__4
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
