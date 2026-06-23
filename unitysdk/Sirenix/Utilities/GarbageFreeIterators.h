#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Utilities/GarbageFreeIterators_DictionaryIterator_2.h"
#include "unitysdk/Sirenix/Utilities/GarbageFreeIterators_DictionaryValueIterator_2.h"
#include "unitysdk/Sirenix/Utilities/GarbageFreeIterators_HashsetIterator_1.h"
#include "unitysdk/Sirenix/Utilities/GarbageFreeIterators_ListIterator_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_TypeDefinitionIndex = 6440;

	class GarbageFreeIterators : public ::System::Object
	{
	public:
	};
}
