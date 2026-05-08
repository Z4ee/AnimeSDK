#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { class String; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_TypeDefinitionIndex = 28622;

	template <typename T>
	struct UniTask_1
	{
		::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* source; // 0x0
		T result; // 0x0
		::System::Int16 token; // 0x0
	};
}
