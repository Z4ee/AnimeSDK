#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1FAA73F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_1_OFFSET UNITYSDK_OFFSET(0x1FAA7AD0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x1FAA7A60)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x1FAA76F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1FAA7690)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_TypeDefinitionIndex = 31910;

	class UniTaskExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask task, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET))(task, cancellationToken);
		}

		static ::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask task, ::System::Action_1<::System::Exception*>* exceptionHandler)
		{
			return ((::System::Collections::IEnumerator*(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET))(task, exceptionHandler);
		}

		static ::System::Void Forget(::Cysharp::Threading::Tasks::UniTask task)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(task);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask task, ::System::Action* continuationFunction)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_OFFSET))(task, continuationFunction);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_1(::Cysharp::Threading::Tasks::UniTask task, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* continuationFunction)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_1_OFFSET))(task, continuationFunction);
		}
	};
}
