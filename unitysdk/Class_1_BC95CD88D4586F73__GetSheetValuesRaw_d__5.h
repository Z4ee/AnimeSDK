#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BC95CD88D4586F73;
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BC95CD88D4586F73__GETSHEETVALUESRAW_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC5AF60)
#define CLASS_1_BC95CD88D4586F73__GETSHEETVALUESRAW_D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xC5AF70)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73__GetSheetValuesRaw_d__5_TypeDefinitionIndex = 40366;

struct alignas(8) Class_1_BC95CD88D4586F73__GetSheetValuesRaw_d__5
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__3; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x38
	::System::Net::Http::HttpClient* _client_5__3; // 0x40
	::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x48
	::System::String* docID; // 0x50
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__2; // 0x58
	::Class_1_BC95CD88D4586F73* __4__this; // 0x68
	::System::String* range; // 0x70
	::System::Int32 __1__state; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__GETSHEETVALUESRAW_D__5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__GETSHEETVALUESRAW_D__5_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
