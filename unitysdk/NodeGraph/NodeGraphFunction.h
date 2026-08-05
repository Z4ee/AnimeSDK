#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphBase.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphType.h"

namespace NodeGraph { class NodeGraphChild; }

#define NODEGRAPH_NODEGRAPHFUNCTION_CREATEGRAPH_OFFSET UNITYSDK_OFFSET(0x17FBCD40)
#define NODEGRAPH_NODEGRAPHFUNCTION_CREATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x17FBCE50)
#define NODEGRAPH_NODEGRAPHFUNCTION_GET_ROOTGRAPH_OFFSET UNITYSDK_OFFSET(0x17FBCC80)
#define NODEGRAPH_NODEGRAPHFUNCTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17FBCC70)
#define NODEGRAPH_NODEGRAPHFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBCCB0)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphFunction_TypeDefinitionIndex = 49007;

	class NodeGraphFunction : public ::NodeGraph::NodeGraphBase
	{
	public:
		::NodeGraph::NodeGraphChild* _subGraph; // 0x58
		::NodeGraph::NodeGraphBase* _parentGraph; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* parentGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHFUNCTION__CTOR_OFFSET))(this, parentGraph);
		}

		::NodeGraph::NodeGraphBase_GraphType get_Type()
		{
			return ((::NodeGraph::NodeGraphBase_GraphType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHFUNCTION_GET_TYPE_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* get_RootGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHFUNCTION_GET_ROOTGRAPH_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* CreateGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHFUNCTION_CREATEGRAPH_OFFSET))(this);
		}

		::System::Void CreateSubGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHFUNCTION_CREATESUBGRAPH_OFFSET))(this);
		}
	};
}
