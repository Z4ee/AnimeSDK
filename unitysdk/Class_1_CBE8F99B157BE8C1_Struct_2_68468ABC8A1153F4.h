#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_CBE8F99B157BE8C1_STRUCT_2_68468ABC8A1153F4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x831C50)
#define CLASS_1_CBE8F99B157BE8C1_STRUCT_2_68468ABC8A1153F4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int Class_1_CBE8F99B157BE8C1_Struct_2_68468ABC8A1153F4_TypeDefinitionIndex = 73100;

struct alignas(8) Class_1_CBE8F99B157BE8C1_Struct_2_68468ABC8A1153F4
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> Field_2_4; // 0x30
	::System::String* Field_2_2; // 0x38
	::System::Net::WebResponse* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_STRUCT_2_68468ABC8A1153F4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_STRUCT_2_68468ABC8A1153F4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
