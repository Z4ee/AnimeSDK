#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8FC0D48D451FB142.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::QuickGraph { template <typename T1, typename T2> class UndirectedGraph_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC41950C_6;

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int UndirectedGraph_2_Class_1_BABCD07EB4C1BB88_TypeDefinitionIndex = 25634;

	template <typename TVertex, typename TEdge>
	class UndirectedGraph_2_Class_1_BABCD07EB4C1BB88 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_0; // 0x0
		TEdge Field_1_1; // 0x0
		::System::Int32 Field_1_2; // 0x0
		::MoleMole::QuickGraph::UndirectedGraph_2<TVertex, TEdge>* Field_1_3; // 0x0
		::System::Collections::Generic::Dictionary_2<TEdge, ::Enum_3_8FC0D48D451FB142>* Field_1_4; // 0x0
		::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<TVertex, ::Class_0_16E4307DCC41950C_6<TVertex, TEdge>*> Field_1_5; // 0x0
		::System::Collections::Generic::IEnumerator_1<TEdge>* Field_1_6; // 0x0
	};
}
