#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_3B3453E1BC8531F5_TypeDefinitionIndex = 84245;

template <typename U, typename V>
class Class_1_3B3453E1BC8531F5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<U, V>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<V, U>* Field_1_1; // 0x0
};
