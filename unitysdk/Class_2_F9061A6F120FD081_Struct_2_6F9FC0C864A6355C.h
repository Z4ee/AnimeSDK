#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F9061A6F120FD081;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_F9061A6F120FD081_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86CB00)
#define CLASS_2_F9061A6F120FD081_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Struct_2_6F9FC0C864A6355C_TypeDefinitionIndex = 75868;

struct alignas(8) Class_2_F9061A6F120FD081_Struct_2_6F9FC0C864A6355C
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_5; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x18
	::Class_2_F9061A6F120FD081* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::System::Threading::CancellationToken Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
