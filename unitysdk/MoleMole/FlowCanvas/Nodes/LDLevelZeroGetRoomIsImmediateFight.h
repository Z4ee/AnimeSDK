#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19B0C6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0C7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroGetRoomIsImmediateFight_TypeDefinitionIndex = 58463;

	class LDLevelZeroGetRoomIsImmediateFight : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
