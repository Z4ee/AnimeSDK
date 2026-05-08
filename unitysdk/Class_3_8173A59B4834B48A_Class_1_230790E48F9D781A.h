#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2, typename T3> class Class_3_8173A59B4834B48A;

inline static constexpr unsigned int Class_3_8173A59B4834B48A_Class_1_230790E48F9D781A_TypeDefinitionIndex = 25775;

template <typename TVertex, typename TEdge, typename TGraph>
class Class_3_8173A59B4834B48A_Class_1_230790E48F9D781A : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	::System::Collections::Generic::IEnumerable_1<TEdge>* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::Class_3_8173A59B4834B48A<TVertex, TEdge, TGraph>* Field_1_3; // 0x0
	::System::Collections::Generic::List_1_Enumerator<::System::Collections::Generic::IEnumerable_1<TEdge>*> Field_1_4; // 0x0
};
