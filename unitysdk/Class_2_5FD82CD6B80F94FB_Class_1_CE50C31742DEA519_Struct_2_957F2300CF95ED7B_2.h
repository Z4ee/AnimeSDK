#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5FD82CD6B80F94FB_Class_1_CE50C31742DEA519;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_5FD82CD6B80F94FB_CLASS_1_CE50C31742DEA519_STRUCT_2_957F2300CF95ED7B_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x828720)
#define CLASS_2_5FD82CD6B80F94FB_CLASS_1_CE50C31742DEA519_STRUCT_2_957F2300CF95ED7B_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x61A480)

inline static constexpr unsigned int Class_2_5FD82CD6B80F94FB_Class_1_CE50C31742DEA519_Struct_2_957F2300CF95ED7B_2_TypeDefinitionIndex = 74205;

struct alignas(8) Class_2_5FD82CD6B80F94FB_Class_1_CE50C31742DEA519_Struct_2_957F2300CF95ED7B_2
{
	::Class_2_5FD82CD6B80F94FB_Class_1_CE50C31742DEA519* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FD82CD6B80F94FB_CLASS_1_CE50C31742DEA519_STRUCT_2_957F2300CF95ED7B_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_5FD82CD6B80F94FB_CLASS_1_CE50C31742DEA519_STRUCT_2_957F2300CF95ED7B_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
