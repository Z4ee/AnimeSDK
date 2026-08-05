#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_2138DB6150D0CA1A_STRUCT_2_747828769DD032E2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x837E70)
#define CLASS_3_2138DB6150D0CA1A_STRUCT_2_747828769DD032E2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_2138DB6150D0CA1A_Struct_2_747828769DD032E2_TypeDefinitionIndex = 81505;

struct alignas(8) Class_3_2138DB6150D0CA1A_Struct_2_747828769DD032E2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_STRUCT_2_747828769DD032E2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_STRUCT_2_747828769DD032E2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
