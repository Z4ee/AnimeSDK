#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class CancellationTokenSource; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollection_1__GetConsumingEnumerable_d__68_TypeDefinitionIndex = 4004;

	template <typename T>
	class BlockingCollection_1__GetConsumingEnumerable_d__68 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationToken __3__cancellationToken; // 0x0
		::System::Collections::Concurrent::BlockingCollection_1<T>* __4__this; // 0x0
		::System::Threading::CancellationTokenSource* _linkedTokenSource_5__1; // 0x0
	};
}
