#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_4BD68EEAB5D091BF;
template <typename T1, typename T2> class Class_1_DD5009F722EC4683;

inline static constexpr unsigned int Class_1_3E9ED739B64AE311_TypeDefinitionIndex = 28843;

template <typename TVertex, typename TDistance>
class Class_1_3E9ED739B64AE311 : public ::System::Object
{
public:
	::Class_1_4BD68EEAB5D091BF<TDistance, TVertex>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::Class_1_DD5009F722EC4683<TDistance, TVertex>*>* Field_1_7; // 0x0
	::System::Func_2<TVertex, TDistance>* Field_1_6; // 0x0
};
