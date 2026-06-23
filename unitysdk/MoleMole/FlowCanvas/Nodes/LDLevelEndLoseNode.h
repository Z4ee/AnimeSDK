#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDLOSENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x182D4EF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDLOSENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x182D4F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndLoseNode_TypeDefinitionIndex = 83804;

	class LDLevelEndLoseNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDLOSENODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDLOSENODE_INVOKE_OFFSET))(this);
		}
	};
}
