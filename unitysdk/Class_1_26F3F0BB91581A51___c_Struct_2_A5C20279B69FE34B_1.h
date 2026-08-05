#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_26F3F0BB91581A51___C_STRUCT_2_A5C20279B69FE34B_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B92B0)
#define CLASS_1_26F3F0BB91581A51___C_STRUCT_2_A5C20279B69FE34B_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_26F3F0BB91581A51___c_Struct_2_A5C20279B69FE34B_1_TypeDefinitionIndex = 74147;

struct alignas(8) Class_1_26F3F0BB91581A51___c_Struct_2_A5C20279B69FE34B_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::Threading::CancellationToken Field_2_0; // 0x30
	::System::Int32 Field_2_2; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C_STRUCT_2_A5C20279B69FE34B_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_26F3F0BB91581A51___C_STRUCT_2_A5C20279B69FE34B_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
