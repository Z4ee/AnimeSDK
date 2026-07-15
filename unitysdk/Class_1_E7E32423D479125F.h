#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7E32423D479125F_Struct_2_CD46B6094A97920A.h"
#include "unitysdk/Struct_2_33629F49DC550CC8.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_1_CD5FEF010EE849C3;

inline static constexpr unsigned int Class_1_E7E32423D479125F_TypeDefinitionIndex = 41245;

template <typename TKey, typename TValue>
class Class_1_E7E32423D479125F : public ::System::Object
{
public:
	::Class_1_CD5FEF010EE849C3<TValue>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TKey, ::Struct_2_33629F49DC550CC8<TValue>>* Field_1_1; // 0x0
};
