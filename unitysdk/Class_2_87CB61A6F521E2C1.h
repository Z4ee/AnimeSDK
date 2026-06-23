#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DCC33F9C2BD5AF55_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_53;
template <typename T1, typename T2> class Class_0_16E4307DCC419505_63;

inline static constexpr unsigned int Class_2_87CB61A6F521E2C1_TypeDefinitionIndex = 28188;

template <typename TVertex, typename TEdge>
class Class_2_87CB61A6F521E2C1 : public ::Class_1_DCC33F9C2BD5AF55_1<TVertex, TEdge>
{
public:
	::System::Collections::Generic::IDictionary_2<TVertex, TVertex>* Field_2_0; // 0x0
	::System::Collections::Generic::IDictionary_2<TVertex, ::System::Collections::Generic::IList_1<TVertex>*>* Field_2_1; // 0x0
};
