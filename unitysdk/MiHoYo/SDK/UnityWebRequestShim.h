#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_DISPOSEEX_OFFSET UNITYSDK_OFFSET(0x17688D80)
#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_SENDWEBREQUESTEX_OFFSET UNITYSDK_OFFSET(0x17688DB0)
#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_SETREQUESTHEADEREX_OFFSET UNITYSDK_OFFSET(0x17688D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UnityWebRequestShim_TypeDefinitionIndex = 7025;

	class UnityWebRequestShim : public ::System::Object
	{
	public:
		static ::System::Void DisposeEx(::UnityEngine::Networking::UnityWebRequest* this_)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_DISPOSEEX_OFFSET))(this_);
		}

		static ::System::Void SetRequestHeaderEx(::UnityEngine::Networking::UnityWebRequest* this_, ::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_SETREQUESTHEADEREX_OFFSET))(this_, key, value);
		}

		static ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequestEx(::UnityEngine::Networking::UnityWebRequest* this_)
		{
			return ((::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_SENDWEBREQUESTEX_OFFSET))(this_);
		}
	};
}
