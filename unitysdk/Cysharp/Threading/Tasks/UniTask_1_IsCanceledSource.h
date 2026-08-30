#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_IsCanceledSource_TypeDefinitionIndex = 42798;

	template <typename T>
	class UniTask_1_IsCanceledSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* source; // 0x0
	};
}
