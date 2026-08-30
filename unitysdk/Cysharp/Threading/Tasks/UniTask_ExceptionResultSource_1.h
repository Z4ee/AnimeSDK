#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_ExceptionResultSource_1_TypeDefinitionIndex = 42659;

	template <typename T>
	class UniTask_ExceptionResultSource_1 : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
		::System::Boolean calledGet; // 0x0
	};
}
