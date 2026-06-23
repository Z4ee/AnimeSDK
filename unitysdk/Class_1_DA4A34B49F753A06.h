#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD7E22C9221A038B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_7DAA2A08443E4E4B;
template <typename T1, typename T2> class Class_1_DA4A34B49F753A06;
template <typename T1, typename T2> class Class_1_DD5009F722EC4683;

inline static constexpr unsigned int Class_1_DA4A34B49F753A06_TypeDefinitionIndex = 28236;

template <typename TPriority, typename TValue>
class Class_1_DA4A34B49F753A06 : public ::System::Object
{
public:
	::Class_1_7DAA2A08443E4E4B<TPriority, TValue>* Field_1_0; // 0x0
	::Class_1_DD5009F722EC4683<TPriority, TValue>* Field_1_1; // 0x0
	::System::Int16 Field_1_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_DD5009F722EC4683<TPriority, TValue>*>* Field_1_3; // 0x0
	::System::Comparison_1<TPriority>* Field_1_4; // 0x0
	::Enum_3_AD7E22C9221A038B Field_1_5; // 0x0
	::System::Int32 Field_1_6; // 0x0
};
