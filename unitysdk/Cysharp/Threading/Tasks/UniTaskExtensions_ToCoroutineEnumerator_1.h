#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_ToCoroutineEnumerator_1_TypeDefinitionIndex = 42823;

	template <typename T>
	class UniTaskExtensions_ToCoroutineEnumerator_1 : public ::System::Object
	{
	public:
		::System::Boolean completed; // 0x0
		::System::Action_1<T>* resultHandler; // 0x0
		::System::Action_1<::System::Exception*>* exceptionHandler; // 0x0
		::System::Boolean isStarted; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Object* current; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
	};
}
