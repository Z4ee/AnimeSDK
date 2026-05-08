#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0CC7E0B3DF51A072_Class_1_DC0CA1F07A0E109A_5;
class Class_1_A00B784DE48ED0A8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0CC7E0B3DF51A072_STRUCT_2_39E2ACAFCF33ABC8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79EB60)
#define CLASS_1_0CC7E0B3DF51A072_STRUCT_2_39E2ACAFCF33ABC8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_0CC7E0B3DF51A072_Struct_2_39E2ACAFCF33ABC8_TypeDefinitionIndex = 47605;

struct alignas(8) Class_1_0CC7E0B3DF51A072_Struct_2_39E2ACAFCF33ABC8
{
	::Class_1_A00B784DE48ED0A8* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Class_1_0CC7E0B3DF51A072_Class_1_DC0CA1F07A0E109A_5* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CC7E0B3DF51A072_STRUCT_2_39E2ACAFCF33ABC8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0CC7E0B3DF51A072_STRUCT_2_39E2ACAFCF33ABC8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
