#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace UnityEngine::Events { class UnityEvent; }

#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA9B680)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA92710)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityEventHandlerAsyncEnumerable_TypeDefinitionIndex = 42898;

	class UnityEventHandlerAsyncEnumerable : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken1; // 0x10
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x18

		::System::Void _ctor(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_GETASYNCENUMERATOR_OFFSET))(this, a1);
		}
	};
}
