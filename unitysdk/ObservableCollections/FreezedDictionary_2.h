#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISortableSynchronizedView_2; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int FreezedDictionary_2_TypeDefinitionIndex = 25592;

	template <typename TKey, typename TValue>
	class FreezedDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary; // 0x0
	};
}
