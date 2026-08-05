#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class TurnBattleUnitBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x107D4510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x107D4670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCastToEntityUnit_TypeDefinitionIndex = 54082;

	class LDTurnBasedCastToEntityUnit : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::TurnBattleEntityUnit*, ::MoleMole::TurnBattleUnitBase*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::TurnBattleEntityUnit* Invoke(::MoleMole::TurnBattleUnitBase* unit)
		{
			return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
