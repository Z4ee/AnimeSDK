#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D3B3C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3B4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroActiveRoomNode_TypeDefinitionIndex = 52981;

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
