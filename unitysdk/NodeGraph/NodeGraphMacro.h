#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphBase.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_NODEGRAPHMACRO_CREATEGRAPH_OFFSET UNITYSDK_OFFSET(0x13A0DE60)
#define NODEGRAPH_NODEGRAPHMACRO_CREATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x13A0E000)
#define NODEGRAPH_NODEGRAPHMACRO_GET_ROOTGRAPH_OFFSET UNITYSDK_OFFSET(0x13A0DE50)
#define NODEGRAPH_NODEGRAPHMACRO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A0DE40)
#define NODEGRAPH_NODEGRAPHMACRO__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0DF70)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphMacro_TypeDefinitionIndex = 51822;

	class NodeGraphMacro : public ::NodeGraph::NodeGraphBase
	{
	public:
		::System::Collections::Generic::List_1<::NodeGraph::NodeGraphBase*>* _subGraphList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMACRO__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase_GraphType get_Type()
		{
			return ((::NodeGraph::NodeGraphBase_GraphType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMACRO_GET_TYPE_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* get_RootGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMACRO_GET_ROOTGRAPH_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* CreateGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMACRO_CREATEGRAPH_OFFSET))(this);
		}

		::System::Void CreateSubGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHMACRO_CREATESUBGRAPH_OFFSET))(this);
		}
	};
}
