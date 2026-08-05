#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISortableSynchronizedView_2; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int FreezedList_1_TypeDefinitionIndex = 28765;

	template <typename T>
	class FreezedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<T>* list; // 0x0
	};
}
