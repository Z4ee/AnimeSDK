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

#define MIHOYO_SDK_UGCNETWORK_GENERATERANDOMDELAYTIMEMS_OFFSET UNITYSDK_OFFSET(0xB2C3ED0)
#define MIHOYO_SDK_UGCNETWORK_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0xB2C3570)
#define MIHOYO_SDK_UGCNETWORK_HTTPPOSTBINARY_OFFSET UNITYSDK_OFFSET(0xB2C3990)
#define MIHOYO_SDK_UGCNETWORK_PERFORMHTTPREQUESTBINARY_OFFSET UNITYSDK_OFFSET(0xB2C3E00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork_TypeDefinitionIndex = 46910;

	class UGCNetwork : public ::System::Object
	{
	public:
		// static const ::System::Int32 ERROR_CODE_SERVER_TRAFFIC_LIMIT = 0x1AD; // 0x0
		// static const ::System::Int32 MAX_DELAY_TIME_MS = 0x7D0; // 0x0
		// static const ::System::Int32 DEFAULT_RETRY_COUNT_LIMIT = 0x3; // 0x0
		// static const ::System::Single DEFAULT_REQUEST_TIMEOUT_SEC; // 0x0

		static ::System::Collections::IEnumerator* HttpGetBinary(::System::String* a1, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_HTTPGETBINARY_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::IEnumerator* HttpPostBinary(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a3, ::System::Action* a4, ::System::String* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_HTTPPOSTBINARY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Collections::IEnumerator* PerformHttpRequestBinary(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* a1, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_PERFORMHTTPREQUESTBINARY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Int32 GenerateRandomDelayTimeMs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_GENERATERANDOMDELAYTIMEMS_OFFSET))();
		}
	};
}
