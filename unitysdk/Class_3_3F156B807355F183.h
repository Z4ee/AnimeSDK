#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_91CA132C22E737F0.h"
#include "unitysdk/Enum_3_7545EB2DE9368024.h"

class Class_0_16E4307DCC419505_47;
class Class_0_16E4307DCC419505_60;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26_3;

inline static constexpr unsigned int Class_3_3F156B807355F183_TypeDefinitionIndex = 28863;

template <typename TVertex, typename TEdge, typename TGraph>
class Class_3_3F156B807355F183 : public ::Class_2_91CA132C22E737F0<TVertex, TGraph>
{
public:
	::System::Func_2<TEdge, ::System::Double>* Field_3_2; // 0x0
	::Class_0_16E4307DCC419505_60* Field_3_1; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::Enum_3_7545EB2DE9368024>* Field_3_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::System::Double>* Field_3_7; // 0x0
	::System::Collections::Generic::Dictionary_2<TEdge, ::System::Double>* Field_3_6; // 0x0
	::Class_3_B60F6C2F126D2E26_3<TVertex, TEdge>* Field_3_5; // 0x0
};
