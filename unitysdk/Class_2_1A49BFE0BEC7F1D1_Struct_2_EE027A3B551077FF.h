#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A49BFE0BEC7F1D1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_EE027A3B551077FF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x822820)
#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_EE027A3B551077FF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)

inline static constexpr unsigned int Class_2_1A49BFE0BEC7F1D1_Struct_2_EE027A3B551077FF_TypeDefinitionIndex = 90522;

struct alignas(8) Class_2_1A49BFE0BEC7F1D1_Struct_2_EE027A3B551077FF
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> Field_2_0; // 0x10
	::Class_2_1A49BFE0BEC7F1D1* Field_2_7; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_6; // 0x30
	::System::Int32 Field_2_1; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_EE027A3B551077FF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_EE027A3B551077FF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
