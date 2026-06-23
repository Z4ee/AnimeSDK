#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_91CA132C22E737F0.h"
#include "unitysdk/Enum_3_8FC0D48D451FB142.h"

class Class_0_16E4307DCC419505_45;
class Class_0_16E4307DCC419505_51;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26_2;

inline static constexpr unsigned int Class_3_3F156B807355F183_TypeDefinitionIndex = 28275;

template <typename TVertex, typename TEdge, typename TGraph>
class Class_3_3F156B807355F183 : public ::Class_2_91CA132C22E737F0<TVertex, TGraph>
{
public:
	::System::Func_2<TEdge, ::System::Double>* Field_3_0; // 0x0
	::Class_0_16E4307DCC419505_51* Field_3_1; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::Enum_3_8FC0D48D451FB142>* Field_3_2; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::System::Double>* Field_3_3; // 0x0
	::System::Collections::Generic::Dictionary_2<TEdge, ::System::Double>* Field_3_4; // 0x0
	::Class_3_B60F6C2F126D2E26_2<TVertex, TEdge>* Field_3_5; // 0x0
};
