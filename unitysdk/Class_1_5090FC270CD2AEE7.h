#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_5090FC270CD2AEE7_TypeDefinitionIndex = 81434;

template <typename TKey, typename TValue>
class Class_1_5090FC270CD2AEE7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TKey, TValue>* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<TValue>* Field_1_1; // 0x0
};
