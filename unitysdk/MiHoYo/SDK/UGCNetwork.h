#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK_GENERATERANDOMDELAYTIMEMS_OFFSET UNITYSDK_OFFSET(0x1D95A660)
#define MIHOYO_SDK_UGCNETWORK_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0x1D95A2C0)
#define MIHOYO_SDK_UGCNETWORK_HTTPPOSTBINARY_OFFSET UNITYSDK_OFFSET(0x1D95A4D0)
#define MIHOYO_SDK_UGCNETWORK_PERFORMHTTPREQUESTBINARY_OFFSET UNITYSDK_OFFSET(0x1D95A420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork_TypeDefinitionIndex = 37498;

	class UGCNetwork : public ::System::Object
	{
	public:
		// static const ::System::Int32 ERROR_CODE_SERVER_TRAFFIC_LIMIT = 0x1AD; // 0x0
		// static const ::System::Int32 MAX_DELAY_TIME_MS = 0x7D0; // 0x0
		// static const ::System::Int32 DEFAULT_RETRY_COUNT_LIMIT = 0x3; // 0x0
		// static const ::System::Single DEFAULT_REQUEST_TIMEOUT_SEC; // 0x0

		static ::System::Collections::IEnumerator* HttpGetBinary(::System::String* url, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_HTTPGETBINARY_OFFSET))(url, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* HttpPostBinary(::System::String* url, ::Il2CppArray<::System::Byte>* body, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::String* strContentType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_HTTPPOSTBINARY_OFFSET))(url, body, completeCallback, timeoutCallback, strContentType, headers, timeoutSecond, retryLimit, checkMD5);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestBinary(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single timeoutSecond, ::System::Int32 retryLimit, ::System::Boolean checkMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_PERFORMHTTPREQUESTBINARY_OFFSET))(buildRequestFun, completeCallback, timeoutCallback, headers, timeoutSecond, retryLimit, checkMD5, reportDict);
		}

		static ::System::Int32 GenerateRandomDelayTimeMs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_GENERATERANDOMDELAYTIMEMS_OFFSET))();
		}
	};
}
