#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8A0744A5CDB04F6F;
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8A0744A5CDB04F6F__UPDATESHEET_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2DF7A10)
#define CLASS_1_8A0744A5CDB04F6F__UPDATESHEET_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2DF7A20)

inline static constexpr unsigned int Class_1_8A0744A5CDB04F6F__UpdateSheet_d__10_TypeDefinitionIndex = 50413;

struct alignas(8) Class_1_8A0744A5CDB04F6F__UpdateSheet_d__10
{
	::System::String* rangeAddress; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__3; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x28
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__2; // 0x30
	::Class_1_8A0744A5CDB04F6F* __4__this; // 0x40
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x48
	::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x60
	::System::Net::Http::HttpClient* _client_5__3; // 0x68
	::System::String* docID; // 0x70
	::System::String* resource; // 0x78
	::System::String* sheetID; // 0x80
	::System::Int32 __1__state; // 0x88

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__UPDATESHEET_D__10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__UPDATESHEET_D__10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
