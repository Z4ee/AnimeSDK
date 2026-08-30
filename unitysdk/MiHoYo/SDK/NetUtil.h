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

#define MIHOYO_SDK_NETUTIL_DOWNLOADDATAASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B9A64F0)
#define MIHOYO_SDK_NETUTIL_GENERATERANDOMDELAYTIMEMS_OFFSET UNITYSDK_OFFSET(0x1B9A7F60)
#define MIHOYO_SDK_NETUTIL_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0x1B9A7CB0)
#define MIHOYO_SDK_NETUTIL_HTTPGET_1_OFFSET UNITYSDK_OFFSET(0x1B9A6910)
#define MIHOYO_SDK_NETUTIL_HTTPGET_OFFSET UNITYSDK_OFFSET(0x1B9A6540)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_1_OFFSET UNITYSDK_OFFSET(0x1B9A7870)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_OFFSET UNITYSDK_OFFSET(0x1B9A7460)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_1_OFFSET UNITYSDK_OFFSET(0x1B9A70C0)
#define MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_OFFSET UNITYSDK_OFFSET(0x1B9A6C90)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTFORBINARYRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B9A7EC0)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B9A7BD0)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1B9A6B30)
#define MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0x1B9A67F0)
#define MIHOYO_SDK_NETUTIL_REGISTERINTERCEPTOR_OFFSET UNITYSDK_OFFSET(0x1B9A6340)
#define MIHOYO_SDK_NETUTIL_TRYHTTPREQUESTBYHTTPDNS_OFFSET UNITYSDK_OFFSET(0x1B9A7F80)
#define MIHOYO_SDK_NETUTIL_UNREGISTERINTERCEPTOR_OFFSET UNITYSDK_OFFSET(0x1B9A6460)
#define MIHOYO_SDK_NETUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9A8550)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil_TypeDefinitionIndex = 8139;

	class NetUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::INetworkInterceptor*>** StaticGet__interceptors()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::INetworkInterceptor*>**)Il2CppClass::FromTypeDefinitionIndex(NetUtil_TypeDefinitionIndex)->GetStaticField(0x17D50);
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

		static ::System::Void RegisterInterceptor(::MiHoYo::SDK::INetworkInterceptor* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::INetworkInterceptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_REGISTERINTERCEPTOR_OFFSET))(a1);
		}

		static ::System::Void UnregisterInterceptor(::MiHoYo::SDK::INetworkInterceptor* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::INetworkInterceptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_UNREGISTERINTERCEPTOR_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* DownloadDataAsByteArray(::System::String* a1, ::System::String* a2, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_DOWNLOADDATAASBYTEARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* HttpGet(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGET_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::IEnumerator* HttpGet_1(::System::String* a1, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGET_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::IEnumerator* HttpPostJson(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Collections::IEnumerator* HttpPostJson_1(::System::String* a1, ::System::String* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTJSON_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Collections::IEnumerator* HttpPostForm(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Collections::IEnumerator* HttpPostForm_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPPOSTFORM_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestInternal(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* a1, ::MiHoYo::SDK::NetUtil_ResponseCallback* a2, ::System::Action* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::MiHoYo::SDK::NetUtil_ResponseCallback*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequest(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* a1, ::System::Action_1<::System::String*>* a2, ::System::Action* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequest_1(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>* a1, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a2, ::System::Action* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUEST_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Collections::IEnumerator* HttpGetBinary(::System::String* a1, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPGETBINARY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestForBinaryResponse(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* a1, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_PERFORMHTTPREQUESTFORBINARYRESPONSE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 GenerateRandomDelayTimeMs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_GENERATERANDOMDELAYTIMEMS_OFFSET))();
		}

		static ::System::Boolean TryHttpRequestByHttpDns(::UnityEngine::Networking::UnityWebRequest* a1, ::System::String* a2, ::MiHoYo::SDK::NetUtil_ResponseCallback* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Boolean a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::String*, ::MiHoYo::SDK::NetUtil_ResponseCallback*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_TRYHTTPREQUESTBYHTTPDNS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
