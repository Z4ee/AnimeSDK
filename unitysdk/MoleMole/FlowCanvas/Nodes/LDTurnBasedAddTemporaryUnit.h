#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BAAE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAAFD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedAddTemporaryUnit_TypeDefinitionIndex = 80448;

	class LDTurnBasedAddTemporaryUnit : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::TurnBattleEntityUnit*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::TurnBattleEntityUnit* entityUnit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT_INVOKE_OFFSET))(this, entityUnit);
		}
	};
}
