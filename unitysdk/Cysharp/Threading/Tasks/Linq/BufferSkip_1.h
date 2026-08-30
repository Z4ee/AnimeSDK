#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int BufferSkip_1_TypeDefinitionIndex = 44132;

	template <typename TSource>
	class BufferSkip_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 skip; // 0x0
	};
}
