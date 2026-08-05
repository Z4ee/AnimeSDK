#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0364EA98FAD4F59F.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_4BD68EEAB5D091BF;
template <typename T1, typename T2> class Class_1_7DAA2A08443E4E42;
template <typename T1, typename T2> class Class_1_DD5009F722EC4683;

inline static constexpr unsigned int Class_1_4BD68EEAB5D091BF_TypeDefinitionIndex = 28628;

template <typename TPriority, typename TValue>
class Class_1_4BD68EEAB5D091BF : public ::System::Object
{
public:
	::Class_1_7DAA2A08443E4E42<TPriority, TValue>* Field_1_0; // 0x0
	::Class_1_DD5009F722EC4683<TPriority, TValue>* Field_1_7; // 0x0
	::System::Int16 Field_1_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_DD5009F722EC4683<TPriority, TValue>*>* Field_1_5; // 0x0
	::System::Comparison_1<TPriority>* Field_1_4; // 0x0
	::Enum_3_0364EA98FAD4F59F Field_1_11; // 0x0
	::System::Int32 Field_1_10; // 0x0
};
