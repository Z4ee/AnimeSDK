#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1780B640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT_ISAPPENDTARGET_OFFSET UNITYSDK_OFFSET(0x1780BB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1780BCA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedAddExtraUnit_TypeDefinitionIndex = 54474;

	class LDTurnBasedAddExtraUnit : public ::FlowCanvas::Nodes::CallableActionNode_3<::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* target, ::System::Int32 existingTurnNumber, ::System::Boolean allowAppendAfterExtraUnit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT_INVOKE_OFFSET))(this, target, existingTurnNumber, allowAppendAfterExtraUnit);
		}

		static ::System::Boolean IsAppendTarget(::MoleMole::TurnBattleUnitBase* unit, ::MoleMole::Battle::Entity* target)
		{
			return ((::System::Boolean(*)(::MoleMole::TurnBattleUnitBase*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDEXTRAUNIT_ISAPPENDTARGET_OFFSET))(unit, target);
		}
	};
}
