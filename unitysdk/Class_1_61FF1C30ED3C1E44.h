#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_61FF1C30ED3C1E44_Class_3_B6136C2F127116DF_22;

inline static constexpr unsigned int Class_1_61FF1C30ED3C1E44_TypeDefinitionIndex = 63670;

template <typename TKey, typename TValue>
class Class_1_61FF1C30ED3C1E44 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TKey, TValue>* Field_1_0; // 0x0
	::Class_1_61FF1C30ED3C1E44_Class_3_B6136C2F127116DF_22<TKey, TValue>* Field_1_1; // 0x0
};
