#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_90998AEA3C61F12E;
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_90998AEA3C61F12E___GETACCESSTOKEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15AC960)
#define CLASS_1_90998AEA3C61F12E___GETACCESSTOKEN_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x15AC940)

inline static constexpr unsigned int Class_1_90998AEA3C61F12E___GetAccessToken_d__6_TypeDefinitionIndex = 46276;

struct alignas(8) Class_1_90998AEA3C61F12E___GetAccessToken_d__6
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__2; // 0x28
	::Class_1_90998AEA3C61F12E* __4__this; // 0x38
	::System::Net::Http::HttpClient* _client_5__2; // 0x40
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1; // 0x48
	::System::Int32 __1__state; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___GETACCESSTOKEN_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___GETACCESSTOKEN_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
