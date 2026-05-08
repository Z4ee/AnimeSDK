#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::QuickGraph { template <typename T1, typename T2> class UndirectedGraph_2___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_47;

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int UndirectedGraph_2___c_TypeDefinitionIndex = 25635;

	template <typename TVertex, typename TEdge>
	class UndirectedGraph_2___c : public ::System::Object
	{
	public:
		static ::MoleMole::QuickGraph::UndirectedGraph_2___c<TVertex, TEdge>** StaticGet___9()
		{
			return (::MoleMole::QuickGraph::UndirectedGraph_2___c<TVertex, TEdge>**)Il2CppClass::FromTypeDefinitionIndex(UndirectedGraph_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Boolean, ::Class_0_16E4307DCC419505_47<TVertex, TEdge>*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Boolean, ::Class_0_16E4307DCC419505_47<TVertex, TEdge>*>**)Il2CppClass::FromTypeDefinitionIndex(UndirectedGraph_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
