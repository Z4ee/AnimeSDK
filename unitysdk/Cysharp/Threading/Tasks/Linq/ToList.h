#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToList_TypeDefinitionIndex = 44545;

	class ToList : public ::System::Object
	{
	public:
	};
}
