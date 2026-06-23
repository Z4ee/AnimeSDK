#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole { template <typename T> class ITurnBattleUnitSnapshot_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x161E6E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x161E6F80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnUnit_TypeDefinitionIndex = 61275;

	class LDTurnBasedCreateNewTurnUnit : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::TurnBattleUnitBase*, ::MoleMole::ITurnBattleUnitSnapshot_1<::MoleMole::TurnBattleUnitBase*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::TurnBattleUnitBase* Invoke(::MoleMole::ITurnBattleUnitSnapshot_1<::MoleMole::TurnBattleUnitBase*>* snapshot)
		{
			return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID, ::MoleMole::ITurnBattleUnitSnapshot_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNUNIT_INVOKE_OFFSET))(this, snapshot);
		}
	};
}
