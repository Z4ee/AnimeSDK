#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x151167F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPRELEVELZEROACTIVEROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15116900)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPreLevelZeroActiveRoomNode_TypeDefinitionIndex = 85346;

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
