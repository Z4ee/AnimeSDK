#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LinkedHashMap_2_Enumerator.h"
#include "unitysdk/Foundation/LinkedHashMap_2_KeyEnumerable.h"
#include "unitysdk/Foundation/LinkedHashMap_2_ValueEnumerable.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class LinkedHashMap_2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

inline static constexpr unsigned int Class_1_ECD4F42ECE6FDB8C_TypeDefinitionIndex = 50813;

template <typename TKey, typename TValue>
class Class_1_ECD4F42ECE6FDB8C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	::Foundation::LinkedHashMap_2<TKey, TValue>* Field_1_1; // 0x0
	::System::Action_2<TKey, TValue>* Field_1_2; // 0x0
};
