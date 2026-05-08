#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE847F0)
#define QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE84EA0)
#define QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE83080)

namespace QWER
{
	inline static constexpr unsigned int CAppConfigHelper___ReadWebFileAsync_d__3_TypeDefinitionIndex = 85838;

	class CAppConfigHelper___ReadWebFileAsync_d__3 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* __s__5; // 0x10
		::System::Runtime::CompilerServices::TaskAwaiter __u__3; // 0x18
		::System::Object* __s__1; // 0x20
		::System::Net::Http::HttpClient* oHttpClient; // 0x28
		::System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppArray<::System::Byte>*> __u__2; // 0x30
		::System::String* strUrl; // 0x38
		::System::Net::Http::HttpResponseMessage* _oRsp_5__3; // 0x40
		::System::Exception* _e_5__6; // 0x48
		::System::Net::Http::HttpResponseMessage* __s__4; // 0x50
		::Il2CppArray<::System::Byte>* __s__7; // 0x58
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::Byte>*> __t__builder; // 0x60
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1; // 0x78
		::System::Int32 __1__state; // 0x80
		::System::Int32 dwCount; // 0x84
		::System::Int32 __s__2; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER___READWEBFILEASYNC_D__3_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
