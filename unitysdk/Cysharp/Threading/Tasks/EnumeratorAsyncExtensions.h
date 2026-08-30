#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class MonoBehaviour; }

#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_CORE_OFFSET UNITYSDK_OFFSET(0x1EA4FF80)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_1_OFFSET UNITYSDK_OFFSET(0x1EA4FE40)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x1EA4FDA0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_WITHCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1EA4FAB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumeratorAsyncExtensions_TypeDefinitionIndex = 42568;

	class EnumeratorAsyncExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask WithCancellation(::System::Collections::IEnumerator* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::IEnumerator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_WITHCANCELLATION_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask ToUniTask(::System::Collections::IEnumerator* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask ToUniTask_1(::System::Collections::IEnumerator* a1, ::UnityEngine::MonoBehaviour* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* Core(::System::Collections::IEnumerator* a1, ::UnityEngine::MonoBehaviour* a2, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_CORE_OFFSET))(a1, a2, a3);
		}
	};
}
