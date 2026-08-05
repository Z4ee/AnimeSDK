#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_91CA132C22E737F0.h"

class Class_0_16E4307DCC419505_47;
class Class_0_16E4307DCC419505_60;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_3_8173A59B4834B48A_TypeDefinitionIndex = 28722;

template <typename TVertex, typename TEdge, typename TGraph>
class Class_3_8173A59B4834B48A : public ::Class_2_91CA132C22E737F0<TVertex, TGraph>
{
public:
	::Class_0_16E4307DCC419505_60* Field_3_2; // 0x0
	::System::Int32 Field_3_1; // 0x0
	::System::Collections::Generic::List_1<::System::Collections::Generic::IEnumerable_1<TEdge>*>* Field_3_0; // 0x0
};
