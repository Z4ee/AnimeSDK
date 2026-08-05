#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace UnityEngine { class Component; }

#define CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA4E390)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCancellationExtensions_TypeDefinitionIndex = 31852;

	class UniTaskCancellationExtensions : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationToken GetCancellationTokenOnDestroy(::UnityEngine::Component* component)
		{
			return ((::System::Threading::CancellationToken(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET))(component);
		}
	};
}
