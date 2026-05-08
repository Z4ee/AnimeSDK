#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D42350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D42510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetCurrentEntityUnit_TypeDefinitionIndex = 46829;

	class LDTurnBasedGetCurrentEntityUnit : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::TurnBattleEntityUnit*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::TurnBattleEntityUnit* Invoke()
		{
			return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT_INVOKE_OFFSET))(this);
		}
	};
}
