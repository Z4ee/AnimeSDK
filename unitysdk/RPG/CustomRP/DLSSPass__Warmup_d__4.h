#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3849920)
#define RPG_CUSTOMRP_DLSSPASS__WARMUP_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x13C2B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass__Warmup_d__4_TypeDefinitionIndex = 35234;

	struct alignas(8) DLSSPass__Warmup_d__4
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x30
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
