#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEBATTLEINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x149E3890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x149E3A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedRemoveBattleInfo_TypeDefinitionIndex = 88983;

	class LDTurnBasedRemoveBattleInfo : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Int32, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEBATTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 infoConfigID, ::MoleMole::Battle::Entity* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEBATTLEINFO_INVOKE_OFFSET))(this, infoConfigID, target);
		}
	};
}
