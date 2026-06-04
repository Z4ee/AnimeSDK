#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_25538049F7DB29C4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_25538049F7DB29C4__LISTSHEETS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2BCB620)
#define CLASS_1_25538049F7DB29C4__LISTSHEETS_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BCB610)

inline static constexpr unsigned int Class_1_25538049F7DB29C4__ListSheets_d__11_TypeDefinitionIndex = 46863;

struct alignas(8) Class_1_25538049F7DB29C4__ListSheets_d__11
{
	::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__3; // 0x18
	::System::String* docID; // 0x28
	::Class_1_25538049F7DB29C4* __4__this; // 0x30
	::System::Net::Http::HttpClient* _client_5__3; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x40
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*> __t__builder; // 0x48
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__2; // 0x60
	::System::Int32 __1__state; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25538049F7DB29C4__LISTSHEETS_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_25538049F7DB29C4__LISTSHEETS_D__11_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
