#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B34091191FCE3A1B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B1F0B860CA2A61C8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EFC60)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B1F0B860CA2A61C8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_B1F0B860CA2A61C8_TypeDefinitionIndex = 86404;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_B1F0B860CA2A61C8
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_B34091191FCE3A1B* Field_2_2; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B1F0B860CA2A61C8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B1F0B860CA2A61C8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
