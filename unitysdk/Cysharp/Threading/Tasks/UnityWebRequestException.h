#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1C5138B0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C513A30)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C5138C0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1C5138A0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5138D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityWebRequestException_TypeDefinitionIndex = 28654;

	class UnityWebRequestException : public ::System::Exception
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ResponseHeaders_k__BackingField; // 0x88
		::System::String* _Text_k__BackingField; // 0x90
		::System::String* _Error_k__BackingField; // 0x98
		::System::String* msg; // 0xA0
		::UnityEngine::Networking::UnityWebRequest* _UnityWebRequest_k__BackingField; // 0xA8
		::System::Boolean _IsHttpError_k__BackingField; // 0xB0
		::System::Boolean _IsNetworkError_k__BackingField; // 0xB1
		::System::Int64 _ResponseCode_k__BackingField; // 0xB8

		::System::Void _ctor(::UnityEngine::Networking::UnityWebRequest* unityWebRequest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET))(this, unityWebRequest);
		}

		::UnityEngine::Networking::UnityWebRequest* get_UnityWebRequest()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
