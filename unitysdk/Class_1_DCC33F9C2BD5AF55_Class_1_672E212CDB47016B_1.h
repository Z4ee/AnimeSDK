#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC41950C_6;
template <typename T1, typename T2> class Class_1_DCC33F9C2BD5AF55;

inline static constexpr unsigned int Class_1_DCC33F9C2BD5AF55_Class_1_672E212CDB47016B_1_TypeDefinitionIndex = 25737;

template <typename TVertex, typename TEdge>
class Class_1_DCC33F9C2BD5AF55_Class_1_672E212CDB47016B_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	TEdge Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::Class_1_DCC33F9C2BD5AF55<TVertex, TEdge>* Field_1_3; // 0x0
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC41950C_6<TVertex, TEdge>*>* Field_1_4; // 0x0
	::System::Collections::Generic::IEnumerator_1<TEdge>* Field_1_5; // 0x0
};
