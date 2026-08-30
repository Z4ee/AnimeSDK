#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class ReadOnlyAsyncReactiveProperty_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable_TypeDefinitionIndex = 42543;

	template <typename T>
	class ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* parent; // 0x0
	};
}
