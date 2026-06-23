#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_PREACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D3B2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_PREACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3B3B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelHadalMsg_PreActiveRoomNode_TypeDefinitionIndex = 63445;

	class LDLevelHadalMsg_PreActiveRoomNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_PREACTIVEROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELHADALMSG_PREACTIVEROOMNODE_INVOKE_OFFSET))(this);
		}
	};
}
