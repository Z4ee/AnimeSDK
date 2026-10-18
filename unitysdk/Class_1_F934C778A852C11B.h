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

#define CLASS_1_F934C778A852C11B_METHOD_1_BCD347CA10E2017B_OFFSET UNITYSDK_OFFSET(0x1DD0C860)

inline static constexpr unsigned int Class_1_F934C778A852C11B_TypeDefinitionIndex = 6414;

class Class_1_F934C778A852C11B : public ::System::Object
{
public:
	static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*> Method_1_BCD347CA10E2017B(::System::Collections::IEnumerable* a1)
	{
		return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*>(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F934C778A852C11B_METHOD_1_BCD347CA10E2017B_OFFSET))(a1);
	}
};
