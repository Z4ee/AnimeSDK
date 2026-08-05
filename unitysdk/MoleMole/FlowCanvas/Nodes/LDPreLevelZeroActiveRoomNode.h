#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1A1F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A2030)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPreLevelZeroActiveRoomNode_TypeDefinitionIndex = 44219;

	class LDPreLevelZeroActiveRoomNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE_INVOKE_OFFSET))(this);
		}
	};
}
