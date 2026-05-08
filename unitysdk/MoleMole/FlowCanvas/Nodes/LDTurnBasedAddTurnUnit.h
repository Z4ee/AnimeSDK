#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole { class TurnBattleUnitBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTURNUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1499A4B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTURNUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1499A5F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedAddTurnUnit_TypeDefinitionIndex = 55462;

	class LDTurnBasedAddTurnUnit : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::TurnBattleUnitBase*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTURNUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::TurnBattleUnitBase* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTURNUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
