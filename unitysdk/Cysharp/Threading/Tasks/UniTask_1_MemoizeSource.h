#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_MemoizeSource_TypeDefinitionIndex = 31899;

	template <typename T>
	class UniTask_1_MemoizeSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* source; // 0x0
		T result; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
		::Cysharp::Threading::Tasks::UniTaskStatus status; // 0x0
	};
}
