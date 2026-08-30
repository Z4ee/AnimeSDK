#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_1_OFFSET UNITYSDK_OFFSET(0x1CE13B60)
#define CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CE13B10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCancellationExtensions_TypeDefinitionIndex = 42641;

	class UniTaskCancellationExtensions : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationToken GetCancellationTokenOnDestroy(::UnityEngine::GameObject* a1)
		{
			return ((::System::Threading::CancellationToken(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET))(a1);
		}

		static ::System::Threading::CancellationToken GetCancellationTokenOnDestroy_1(::UnityEngine::Component* a1)
		{
			return ((::System::Threading::CancellationToken(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_1_OFFSET))(a1);
		}
	};
}
