#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BC95CD88D4586F73;
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BC95CD88D4586F73___GETACCESSTOKEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC5AF80)
#define CLASS_1_BC95CD88D4586F73___GETACCESSTOKEN_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xC5AF90)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73___GetAccessToken_d__6_TypeDefinitionIndex = 40367;

struct alignas(8) Class_1_BC95CD88D4586F73___GetAccessToken_d__6
{
	::Class_1_BC95CD88D4586F73* __4__this; // 0x10
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1; // 0x18
	::System::Net::Http::HttpClient* _client_5__2; // 0x28
	::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__2; // 0x30
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x40
	::System::Int32 __1__state; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73___GETACCESSTOKEN_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73___GETACCESSTOKEN_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
