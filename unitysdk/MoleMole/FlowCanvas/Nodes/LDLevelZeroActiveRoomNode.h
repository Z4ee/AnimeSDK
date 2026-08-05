#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A99F7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99F900)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroActiveRoomNode_TypeDefinitionIndex = 71856;

	class LDLevelZeroActiveRoomNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE_INVOKE_OFFSET))(this);
		}
	};
}
