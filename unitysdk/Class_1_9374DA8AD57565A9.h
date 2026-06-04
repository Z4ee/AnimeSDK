#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/ZLinq/Linq/FromArray_1.h"
#include "unitysdk/ZLinq/Linq/FromDictionary_2.h"
#include "unitysdk/ZLinq/Linq/FromEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromHashSet_1.h"
#include "unitysdk/ZLinq/Linq/FromLinkedList_1.h"
#include "unitysdk/ZLinq/Linq/FromList_1.h"
#include "unitysdk/ZLinq/Linq/FromMemory_1.h"
#include "unitysdk/ZLinq/Linq/FromNonGenericEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromQueue_1.h"
#include "unitysdk/ZLinq/Linq/FromReadOnlySequence_1.h"
#include "unitysdk/ZLinq/Linq/FromSortedSet_1.h"
#include "unitysdk/ZLinq/Linq/FromStack_1.h"
#include "unitysdk/ZLinq/PooledArray_1.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_9374DA8AD57565A9_METHOD_1_9AE324BCEFACA884_OFFSET UNITYSDK_OFFSET(0x19F1F450)

inline static constexpr unsigned int Class_1_9374DA8AD57565A9_TypeDefinitionIndex = 6788;

class Class_1_9374DA8AD57565A9 : public ::System::Object
{
public:
	static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*> Method_1_9AE324BCEFACA884(::System::Collections::IEnumerable* a1)
	{
		return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*>(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_9374DA8AD57565A9_METHOD_1_9AE324BCEFACA884_OFFSET))(a1);
	}
};
