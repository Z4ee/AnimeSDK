#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A04FF20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A050050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedStartBattle_TypeDefinitionIndex = 84863;

	class LDTurnBasedStartBattle : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE_INVOKE_OFFSET))(this);
		}
	};
}
