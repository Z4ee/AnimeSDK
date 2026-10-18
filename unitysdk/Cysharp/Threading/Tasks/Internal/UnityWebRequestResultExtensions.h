#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYWEBREQUESTRESULTEXTENSIONS_ISERROR_OFFSET UNITYSDK_OFFSET(0x1F120BB0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityWebRequestResultExtensions_TypeDefinitionIndex = 38689;

	class UnityWebRequestResultExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsError(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYWEBREQUESTRESULTEXTENSIONS_ISERROR_OFFSET))(a1);
		}
	};
}
