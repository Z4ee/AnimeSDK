#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/QuickGraph/Algorithm/AlgorithmBase_1.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC41950C_7;
template <typename T> class Class_3_B60F6C2F126D2E26_2;

inline static constexpr unsigned int Class_2_FF0E09D6FC603CEA_TypeDefinitionIndex = 25786;

template <typename TVertex, typename TEdge>
class Class_2_FF0E09D6FC603CEA : public ::MoleMole::QuickGraph::Algorithm::AlgorithmBase_1<::Class_0_16E4307DCC41950C_7<TVertex, TEdge>*>
{
public:
	::System::Collections::Generic::IList_1<TVertex>* Field_2_0; // 0x0
	::System::Boolean Field_2_1; // 0x0
	::Class_3_B60F6C2F126D2E26_2<TVertex>* Field_2_2; // 0x0
	::Class_3_B60F6C2F126D2E26_2<TVertex>* Field_2_3; // 0x0
};
