#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/QuickGraph/Algorithm/AlgorithmBase_1.h"

namespace MoleMole::QuickGraph::Collections { template <typename T1, typename T2> class BinaryQueue_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC41950C_4;
template <typename T> class Class_3_B60F6C2F126D2E26_2;

namespace MoleMole::QuickGraph::Algorithm::TopologicalSort
{
	inline static constexpr unsigned int SourceFirstTopologicalSortAlgorithm_2_TypeDefinitionIndex = 25559;

	template <typename TVertex, typename TEdge>
	class SourceFirstTopologicalSortAlgorithm_2 : public ::MoleMole::QuickGraph::Algorithm::AlgorithmBase_1<::Class_0_16E4307DCC41950C_4<TVertex, TEdge>*>
	{
	public:
		::System::Collections::Generic::IDictionary_2<TVertex, ::System::Int32>* inDegrees; // 0x0
		::MoleMole::QuickGraph::Collections::BinaryQueue_2<TVertex, ::System::Int32>* heap; // 0x0
		::System::Collections::Generic::IList_1<TVertex>* sortedVertices; // 0x0
		::Class_3_B60F6C2F126D2E26_2<TVertex>* AddVertex; // 0x0
	};
}
