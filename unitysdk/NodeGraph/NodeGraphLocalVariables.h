#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphVariables.h"
#include "unitysdk/NodeGraph/NodeGraphVariables_NodeGraphVariablesScope.h"

#define NODEGRAPH_NODEGRAPHLOCALVARIABLES_GET_SCOPE_OFFSET UNITYSDK_OFFSET(0xD95ABC0)
#define NODEGRAPH_NODEGRAPHLOCALVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0xD95ABD0)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphLocalVariables_TypeDefinitionIndex = 81835;

	class NodeGraphLocalVariables : public ::NodeGraph::NodeGraphVariables
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHLOCALVARIABLES__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphVariables_NodeGraphVariablesScope get_Scope()
		{
			return ((::NodeGraph::NodeGraphVariables_NodeGraphVariablesScope(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHLOCALVARIABLES_GET_SCOPE_OFFSET))(this);
		}
	};
}
