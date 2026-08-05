#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EE518804D24B05ED___C_STRUCT_2_85F2DC50D993E980_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x848F70)
#define CLASS_2_EE518804D24B05ED___C_STRUCT_2_85F2DC50D993E980_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7DEF30)

inline static constexpr unsigned int Class_2_EE518804D24B05ED___c_Struct_2_85F2DC50D993E980_TypeDefinitionIndex = 60014;

struct alignas(8) Class_2_EE518804D24B05ED___c_Struct_2_85F2DC50D993E980
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_6; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> Field_2_7; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_2; // 0x28
	::System::Net::Http::HttpClient* Field_2_0; // 0x48
	::System::Int32 Field_2_3; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED___C_STRUCT_2_85F2DC50D993E980_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED___C_STRUCT_2_85F2DC50D993E980_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
