#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Merge_1_TypeDefinitionIndex = 44326;

	template <typename T>
	class Merge_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>* sources; // 0x0
	};
}
