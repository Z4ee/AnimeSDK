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

#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C56D770)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C56EE80)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C56EEE0)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C56EE90)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C56D760)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56C750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil__PerformHttpRequestInternal_d__16_TypeDefinitionIndex = 19954;

	class NetUtil__PerformHttpRequestInternal_d__16 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback; // 0x10
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__11; // 0x18
		::System::String* url; // 0x20
		::System::String* _targetMD5_5__17; // 0x28
		::System::String* _processedUrl_5__3; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x38
		::System::Exception* _ex_5__24; // 0x40
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__23; // 0x48
		::System::Action* timeoutCallback; // 0x50
		::System::String* _errorMsg_5__13; // 0x58
		::System::String* _key_5__8; // 0x60
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::System::String*> __s__7; // 0x68
		::System::String* _responseString_5__21; // 0x80
		::System::Object* __2__current; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0x90
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x98
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__19; // 0xA0
		::System::String* _value_5__9; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _responseHeaders_5__20; // 0xB0
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__10; // 0xB8
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__22; // 0xD0
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::INetworkInterceptor*> __s__5; // 0xE8
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__15; // 0x100
		::System::String* _downloadMD5_5__18; // 0x108
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__14; // 0x110
		::MiHoYo::SDK::INetworkInterceptor* _interceptor_5__6; // 0x118
		::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x120
		::MiHoYo::SDK::NetUtil_ResponseModel* _responseModel_5__16; // 0x128
		::System::Single timeoutSecond; // 0x130
		::System::Int32 retryLimit; // 0x134
		::System::Int64 _responseCode_5__12; // 0x138
		::System::Int32 __1__state; // 0x140
		::System::Int32 _delayTimeMs_5__1; // 0x144
		::System::Boolean checkMD5; // 0x148
		::System::Int32 _leftRetryCount_5__2; // 0x14C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTINTERNAL_D__16__CTOR_OFFSET))(this, __1__state);
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
