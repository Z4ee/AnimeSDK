#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C3F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170C4090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelHadalMsg_ActiveRoomNode_TypeDefinitionIndex = 41754;

	class LDLevelHadalMsg_ActiveRoomNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE_INVOKE_OFFSET))(this);
		}
	};
}
