#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A49BFE0BEC7F1D1;
class Class_2_1A49BFE0BEC7F1D1_Class_1_AF1A2ED1877196F1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1A49BFE0BEC7F1D1_CLASS_1_AF1A2ED1877196F1_STRUCT_2_957F2300CF95ED7B_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x669850)
#define CLASS_2_1A49BFE0BEC7F1D1_CLASS_1_AF1A2ED1877196F1_STRUCT_2_957F2300CF95ED7B_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x59F4E0)

inline static constexpr unsigned int Class_2_1A49BFE0BEC7F1D1_Class_1_AF1A2ED1877196F1_Struct_2_957F2300CF95ED7B_4_TypeDefinitionIndex = 90521;

struct alignas(8) Class_2_1A49BFE0BEC7F1D1_Class_1_AF1A2ED1877196F1_Struct_2_957F2300CF95ED7B_4
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_6; // 0x30
	::Class_2_1A49BFE0BEC7F1D1* Field_2_7; // 0x38
	::Class_2_1A49BFE0BEC7F1D1_Class_1_AF1A2ED1877196F1* Field_2_0; // 0x40
	::System::Int32 Field_2_2; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_CLASS_1_AF1A2ED1877196F1_STRUCT_2_957F2300CF95ED7B_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_CLASS_1_AF1A2ED1877196F1_STRUCT_2_957F2300CF95ED7B_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
