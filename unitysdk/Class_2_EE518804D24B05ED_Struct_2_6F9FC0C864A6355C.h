#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EE518804D24B05ED;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EE518804D24B05ED_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7DF130)
#define CLASS_2_EE518804D24B05ED_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

inline static constexpr unsigned int Class_2_EE518804D24B05ED_Struct_2_6F9FC0C864A6355C_TypeDefinitionIndex = 60007;

struct alignas(8) Class_2_EE518804D24B05ED_Struct_2_6F9FC0C864A6355C
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_5; // 0x10
	::System::String* Field_2_6; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x20
	::Class_2_EE518804D24B05ED* Field_2_7; // 0x38
	::System::Threading::CancellationToken Field_2_0; // 0x40
	::System::Int32 Field_2_2; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
