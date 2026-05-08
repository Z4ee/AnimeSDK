#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B84CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B84D50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEntityByUnit_TypeDefinitionIndex = 78544;

	class LDTurnBasedGetEntityByUnit : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Battle::Entity*, ::MoleMole::TurnBattleEntityUnit*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
