#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphBase.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphType.h"

#define NODEGRAPH_NODEGRAPHCHILD_CREATEGRAPH_OFFSET UNITYSDK_OFFSET(0x1274EA00)
#define NODEGRAPH_NODEGRAPHCHILD_CREATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1274EB10)
#define NODEGRAPH_NODEGRAPHCHILD_GET_ROOTGRAPH_OFFSET UNITYSDK_OFFSET(0x1274E940)
#define NODEGRAPH_NODEGRAPHCHILD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1274E930)
#define NODEGRAPH_NODEGRAPHCHILD__CTOR_OFFSET UNITYSDK_OFFSET(0x1274E970)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphChild_TypeDefinitionIndex = 52544;

	class NodeGraphChild : public ::NodeGraph::NodeGraphBase
	{
	public:
		::NodeGraph::NodeGraphBase* _parentGraph; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* parentGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHCHILD__CTOR_OFFSET))(this, parentGraph);
		}

		::NodeGraph::NodeGraphBase_GraphType get_Type()
		{
			return ((::NodeGraph::NodeGraphBase_GraphType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHCHILD_GET_TYPE_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* get_RootGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHCHILD_GET_ROOTGRAPH_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* CreateGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHCHILD_CREATEGRAPH_OFFSET))(this);
		}

		::System::Void CreateSubGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHCHILD_CREATESUBGRAPH_OFFSET))(this);
		}
	};
}
