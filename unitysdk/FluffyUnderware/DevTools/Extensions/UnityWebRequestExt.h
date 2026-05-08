#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_UNITYWEBREQUESTEXT_ISERROR_OFFSET UNITYSDK_OFFSET(0x1B2D3920)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int UnityWebRequestExt_TypeDefinitionIndex = 25901;

	class UnityWebRequestExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsError(::UnityEngine::Networking::UnityWebRequest* webRequest)
		{
			return ((::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_UNITYWEBREQUESTEXT_ISERROR_OFFSET))(webRequest);
		}
	};
}
