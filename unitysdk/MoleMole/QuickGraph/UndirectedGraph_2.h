#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::QuickGraph { template <typename T1, typename T2> class UndirectedGraph_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_0_16E4307DCC41950C_5;
template <typename T1, typename T2> class Class_1_DCC33F9C2BD5AF55_1;
template <typename T1, typename T2> class Class_2_2FB19FFA31134084;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26_1;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26_2;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E2F_2;
template <typename T> class Class_3_B60F6C2F126D2E26;
template <typename T> class Class_3_B60F6C2F126D2E26_3;

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int UndirectedGraph_2_TypeDefinitionIndex = 28206;

	template <typename TVertex, typename TEdge>
	class UndirectedGraph_2 : public ::System::Object
	{
	public:
		::System::Boolean allowParallelEdges; // 0x0
		::Class_2_2FB19FFA31134084<TVertex, TEdge>* adjacentEdges; // 0x0
		::Class_3_B60F6C2F126D2E2F_2<TVertex, TEdge>* edgeEqualityComparer; // 0x0
		::System::Int32 edgeCount; // 0x0
		::System::Int32 edgeCapacity; // 0x0
		::Class_3_B60F6C2F126D2E26<TVertex>* VertexAdded; // 0x0
		::Class_3_B60F6C2F126D2E26<TVertex>* VertexRemoved; // 0x0
		::Class_3_B60F6C2F126D2E26_2<TVertex, TEdge>* EdgeAdded; // 0x0
		::Class_3_B60F6C2F126D2E26_2<TVertex, TEdge>* EdgeRemoved; // 0x0
	};
}
