#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_270194760B058114;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_270194760B058114_STRUCT_2_6C094E18B8FF040A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AD080)
#define CLASS_3_270194760B058114_STRUCT_2_6C094E18B8FF040A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_270194760B058114_Struct_2_6C094E18B8FF040A_TypeDefinitionIndex = 47640;

struct alignas(8) Class_3_270194760B058114_Struct_2_6C094E18B8FF040A
{
	::Class_3_270194760B058114* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_6C094E18B8FF040A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_6C094E18B8FF040A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
