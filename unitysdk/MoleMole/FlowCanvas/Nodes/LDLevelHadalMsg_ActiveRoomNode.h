#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB05A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_ACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB06B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelHadalMsg_ActiveRoomNode_TypeDefinitionIndex = 54790;

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
