#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"
#include "unitysdk/MoleMole/Config/CampType.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x160446B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16044760)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetMonsterTeamNode_TypeDefinitionIndex = 58070;

	class LDSetMonsterTeamNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Config::CampType, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::CampType Team, ::System::Boolean notifyHUD)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::CampType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE_INVOKE_OFFSET))(this, entity, Team, notifyHUD);
		}
	};
}
