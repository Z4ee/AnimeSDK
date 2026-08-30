#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1CE29E00)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ISHTTPERROR_OFFSET UNITYSDK_OFFSET(0x1CE29DF0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ISNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1CE29DE0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1CE29E40)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1CE29E20)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_RESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1CE29E30)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1CE29E10)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1CE29DD0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1FF10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityWebRequestException_TypeDefinitionIndex = 42907;

	class UnityWebRequestException : public ::System::Exception
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _UnityWebRequest_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ResponseHeaders_k__BackingField; // 0x90
		::System::String* _Error_k__BackingField; // 0x98
		::System::String* _Text_k__BackingField; // 0xA0
		::System::String* msg; // 0xA8
		::System::Int64 _ResponseCode_k__BackingField; // 0xB0
		::System::Boolean _IsHttpError_k__BackingField; // 0xB8
		::System::Boolean _IsNetworkError_k__BackingField; // 0xB9

		::System::Void _ctor(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest* get_UnityWebRequest()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsNetworkError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ISNETWORKERROR_OFFSET))(this);
		}

		::System::Boolean get_IsHttpError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ISHTTPERROR_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET))(this);
		}

		::System::Int64 get_ResponseCode()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_RESPONSECODE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_ResponseHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_RESPONSEHEADERS_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
