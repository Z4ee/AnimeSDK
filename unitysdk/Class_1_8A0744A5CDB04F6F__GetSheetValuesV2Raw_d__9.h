#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8A0744A5CDB04F6F;
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2RAW_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2DF79E0)
#define CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2RAW_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2DF79F0)

inline static constexpr unsigned int Class_1_8A0744A5CDB04F6F__GetSheetValuesV2Raw_d__9_TypeDefinitionIndex = 50411;

struct alignas(8) Class_1_8A0744A5CDB04F6F__GetSheetValuesV2Raw_d__9
{
	::System::String* sheetID; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__3; // 0x18
	::System::Net::Http::HttpRequestMessage* _request_5__2; // 0x28
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x48
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__2; // 0x50
	::System::Net::Http::HttpClient* _client_5__3; // 0x60
	::System::String* rangeAddress; // 0x68
	::Class_1_8A0744A5CDB04F6F* __4__this; // 0x70
	::System::String* docID; // 0x78
	::System::Int32 __1__state; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2RAW_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2RAW_D__9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
