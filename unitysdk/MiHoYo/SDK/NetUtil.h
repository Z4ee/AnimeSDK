#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class INetworkInterceptor; }
namespace MiHoYo::SDK { class NetUtil_ResponseCallback; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL_DOWNLOADDATAASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A349160)
#define MIHOYO_SDK_NETUTIL_GENERATERANDOMDELAYTIMEMS_OFFSET UNITYSDK_OFFSET(0x1A34A650)
#define MIHOYO_SDK_NETUTIL_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0x1A34A440)
#define MIHOYO_SDK_NETUTIL_HTTPGET_1_OFFSET UNITYSDK_OFFSET(0x1A3494D0)
#define MIHOYO_SDK_NETUTIL_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1A3491C0)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_1_OFFSET UNITYSDK_OFFSET(0x1A34A0D0)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_OFFSET UNITYSDK_OFFSET(0x1A349E40)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_1_OFFSET UNITYSDK_OFFSET(0x1A349B10)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_OFFSET UNITYSDK_OFFSET(0x1A3497E0)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTFORBINARYRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A34A5C0)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A34A360)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1A349670)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0x1A349360)
#define MIHOYO_SDK_NETUTIL_REGISTERINTERCEPTOR_OFFSET UNITYSDK_OFFSET(0x1A348FE0)
#define MIHOYO_SDK_NETUTIL_TRYHTTPREQUESTBYHTTPDNS_OFFSET UNITYSDK_OFFSET(0x1A34A670)
#define MIHOYO_SDK_NETUTIL_UNREGISTERINTERCEPTOR_OFFSET UNITYSDK_OFFSET(0x1A3490D0)
#define MIHOYO_SDK_NETUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A34AB20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil_TypeDefinitionIndex = 19047;

	class NetUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::INetworkInterceptor*>** StaticGet__interceptors()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::INetworkInterceptor*>**)Il2CppClass::FromTypeDefinitionIndex(NetUtil_TypeDefinitionIndex)->GetStaticField(0xB190);
		}
		// static const ::System::Int32 ERROR_CODE_SERVER_TRAFFIC_LIMIT = 0x1AD; // 0x0
		// static const ::System::Int32 MAX_DELAY_TIME_MS = 0x7D0; // 0x0
		// static const ::System::Int32 DEFAULT_RETRY_COUNT_LIMIT = 0x3; // 0x0
		// static const ::System::Single DEFAULT_REQUEST_TIMEOUT_SEC; // 0x0
		// static const ::System::String* RESOLVE_FAILED_MSG; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterInterceptor(::MiHoYo::SDK::INetworkInterceptor* interceptor)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::INetworkInterceptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_REGISTERINTERCEPTOR_OFFSET))(interceptor);
		}

		static ::System::Void UnregisterInterceptor(::MiHoYo::SDK::INetworkInterceptor* interceptor)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::INetworkInterceptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_UNREGISTERINTERCEPTOR_OFFSET))(interceptor);
		}

		static ::System::Collections::IEnumerator* DownloadDataAsByteArray(::System::String* url, ::System::String* method, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completed)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_DOWNLOADDATAASBYTEARRAY_OFFSET))(url, method, completed);
		}

		static ::System::Collections::IEnumerator* HttpGet(::System::String* url, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGET_OFFSET))(url, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpGet_1(::System::String* url, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGET_1_OFFSET))(url, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpPostJson(::System::String* url, ::System::String* jsonBody, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_OFFSET))(url, jsonBody, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpPostJson_1(::System::String* url, ::System::String* jsonBody, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_1_OFFSET))(url, jsonBody, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpPostForm(::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formDict, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_OFFSET))(url, formDict, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpPostForm_1(::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formDict, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_1_OFFSET))(url, formDict, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestInternal(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun, ::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback, ::System::Action* timeoutCallback, ::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::MiHoYo::SDK::NetUtil_ResponseCallback*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTINTERNAL_OFFSET))(buildRequestFun, responseCallback, timeoutCallback, url, headers, timeoutSecond, retryLimit, checkMD5, reportDict);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequest(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_OFFSET))(buildRequestFun, completeCallback, timeoutCallback, url, headers, timeoutSecond, retryLimit, checkMD5, reportDict);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequest_1(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_1_OFFSET))(buildRequestFun, completeCallback, timeoutCallback, url, headers, timeoutSecond, retryLimit, checkMD5, reportDict);
		}

		static ::System::Collections::IEnumerator* HttpGetBinary(::System::String* url, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGETBINARY_OFFSET))(url, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestForBinaryResponse(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTFORBINARYRESPONSE_OFFSET))(buildRequestFun, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit);
		}

		static ::System::Int32 GenerateRandomDelayTimeMs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_GENERATERANDOMDELAYTIMEMS_OFFSET))();
		}

		static ::System::Boolean TryHttpRequestByHttpDns(::UnityEngine::Networking::UnityWebRequest* request, ::System::String* strErrMsg, ::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Boolean checkMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::String*, ::MiHoYo::SDK::NetUtil_ResponseCallback*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_TRYHTTPREQUESTBYHTTPDNS_OFFSET))(request, strErrMsg, responseCallback, timeoutCallback, headers, checkMD5, reportDict);
		}
	};
}
