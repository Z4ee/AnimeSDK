#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_DISPOSEEX_OFFSET UNITYSDK_OFFSET(0x1BB09EB0)
#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_SENDWEBREQUESTEX_OFFSET UNITYSDK_OFFSET(0x1BB09EE0)
#define MIHOYO_SDK_UNITYWEBREQUESTSHIM_SETREQUESTHEADEREX_OFFSET UNITYSDK_OFFSET(0x1BB09EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UnityWebRequestShim_TypeDefinitionIndex = 7938;

	class UnityWebRequestShim : public ::System::Object
	{
	public:
		static ::System::Void DisposeEx(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_DISPOSEEX_OFFSET))(a1);
		}

		static ::System::Void SetRequestHeaderEx(::UnityEngine::Networking::UnityWebRequest* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_SETREQUESTHEADEREX_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequestEx(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNITYWEBREQUESTSHIM_SENDWEBREQUESTEX_OFFSET))(a1);
		}
	};
}
