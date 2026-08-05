#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A49BFE0BEC7F1D1;
class Class_2_1A49BFE0BEC7F1D1_Class_1_E90E2F66D681DA93_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_5CABB40870716F72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7DF2F0)
#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_5CABB40870716F72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

inline static constexpr unsigned int Class_2_1A49BFE0BEC7F1D1_Struct_2_5CABB40870716F72_TypeDefinitionIndex = 90531;

struct alignas(8) Class_2_1A49BFE0BEC7F1D1_Struct_2_5CABB40870716F72
{
	::Class_2_1A49BFE0BEC7F1D1* Field_2_6; // 0x10
	::Class_2_1A49BFE0BEC7F1D1_Class_1_E90E2F66D681DA93_1* Field_2_11; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> Field_2_7; // 0x20
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_10; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::UInt32 Field_2_5; // 0x44
	::System::UInt32 Field_2_4; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_5CABB40870716F72_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_5CABB40870716F72_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
