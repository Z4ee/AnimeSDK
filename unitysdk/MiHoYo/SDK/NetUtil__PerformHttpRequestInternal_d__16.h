#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class INetworkInterceptor; }
namespace MiHoYo::SDK { class NetUtil_ResponseCallback; }
namespace MiHoYo::SDK { class NetUtil_ResponseModel; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1836ED80)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183707D0)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18370830)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x183707E0)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836ED70)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1836C5B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil__PerformHttpRequestInternal_d__16_TypeDefinitionIndex = 8134;

	class NetUtil__PerformHttpRequestInternal_d__16 : public ::System::Object
	{
	public:
		::System::String* _key_5__8; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__5; // 0x18
		::System::String* _processedUrl_5__3; // 0x30
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__11; // 0x38
		::System::String* _value_5__9; // 0x40
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__19; // 0x48
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__10; // 0x50
		::System::String* _responseString_5__21; // 0x68
		::System::String* _errorMsg_5__13; // 0x70
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__16; // 0x78
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__14; // 0x80
		::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback; // 0x88
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__6; // 0x90
		::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x98
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__22; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0xB8
		::System::String* _targetMD5_5__17; // 0xC0
		::System::Object* __2__current; // 0xC8
		::System::Action* timeoutCallback; // 0xD0
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::System::String*> __s__7; // 0xD8
		::System::String* url; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0xF8
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__15; // 0x100
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _responseHeaders_5__20; // 0x110
		::System::Exception* _ex_5__24; // 0x118
		::System::String* _downloadMD5_5__18; // 0x120
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__23; // 0x128
		::System::Int32 retryLimit; // 0x130
		::System::Int32 __1__state; // 0x134
		::System::Int32 _delayTimeMs_5__1; // 0x138
		::System::Boolean checkMD5; // 0x13C
		::System::Int64 _responseCode_5__12; // 0x140
		::System::Single timeoutSecond; // 0x148
		::System::Int32 _leftRetryCount_5__2; // 0x14C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
