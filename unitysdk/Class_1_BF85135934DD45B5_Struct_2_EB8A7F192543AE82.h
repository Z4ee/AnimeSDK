#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BF85135934DD45B5;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BF85135934DD45B5_STRUCT_2_EB8A7F192543AE82_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FA830)
#define CLASS_1_BF85135934DD45B5_STRUCT_2_EB8A7F192543AE82_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x646640)

inline static constexpr unsigned int Class_1_BF85135934DD45B5_Struct_2_EB8A7F192543AE82_TypeDefinitionIndex = 45251;

struct alignas(8) Class_1_BF85135934DD45B5_Struct_2_EB8A7F192543AE82
{
	::System::Action* Field_2_4; // 0x10
	::Class_1_BF85135934DD45B5* Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_2; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_STRUCT_2_EB8A7F192543AE82_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_STRUCT_2_EB8A7F192543AE82_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
