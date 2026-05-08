#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x1C37E8A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_TypeDefinitionIndex = 28651;

	class UnityAsyncExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> ToUniTask(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation, ::System::IProgress_1<::System::Single>* progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_OFFSET))(asyncOperation, progress, timing, cancellationToken);
		}
	};
}
