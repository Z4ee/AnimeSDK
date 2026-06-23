#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_844723046F27B26D___C_STRUCT_2_A5C20279B69FE34B_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79AD40)
#define CLASS_1_844723046F27B26D___C_STRUCT_2_A5C20279B69FE34B_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_844723046F27B26D___c_Struct_2_A5C20279B69FE34B_5_TypeDefinitionIndex = 67233;

struct alignas(8) Class_1_844723046F27B26D___c_Struct_2_A5C20279B69FE34B_5
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_STRUCT_2_A5C20279B69FE34B_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_STRUCT_2_A5C20279B69FE34B_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
