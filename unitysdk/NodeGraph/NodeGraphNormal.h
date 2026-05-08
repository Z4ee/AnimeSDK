#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphBase.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_NODEGRAPHNORMAL_CREATEGRAPH_OFFSET UNITYSDK_OFFSET(0x10935A70)
#define NODEGRAPH_NODEGRAPHNORMAL_CREATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x10935C10)
#define NODEGRAPH_NODEGRAPHNORMAL_GET_ROOTGRAPH_OFFSET UNITYSDK_OFFSET(0x10935A60)
#define NODEGRAPH_NODEGRAPHNORMAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10935A50)
#define NODEGRAPH_NODEGRAPHNORMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x10935B80)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphNormal_TypeDefinitionIndex = 66679;

	class NodeGraphNormal : public ::NodeGraph::NodeGraphBase
	{
	public:
		::System::Collections::Generic::List_1<::NodeGraph::NodeGraphBase*>* _subGraphList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHNORMAL__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase_GraphType get_Type()
		{
			return ((::NodeGraph::NodeGraphBase_GraphType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHNORMAL_GET_TYPE_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* get_RootGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHNORMAL_GET_ROOTGRAPH_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* CreateGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHNORMAL_CREATEGRAPH_OFFSET))(this);
		}

		::System::Void CreateSubGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHNORMAL_CREATESUBGRAPH_OFFSET))(this);
		}
	};
}
