#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x13697A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13697B70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedRemoveTurnEntityUnit_TypeDefinitionIndex = 88674;

	class LDTurnBasedRemoveTurnEntityUnit : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::TurnBattleEntityUnit*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
