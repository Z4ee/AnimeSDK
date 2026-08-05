#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B11BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE_STOPTYPEENTITYTIMESLOW_OFFSET UNITYSDK_OFFSET(0x19B11F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B121D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetAnimControllerNode_TypeDefinitionIndex = 52728;

	class LDResetAnimControllerNode : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean isHandleCutscene, ::System::Boolean isHandleQteWindow, ::System::Boolean isHandleTimeSlow)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE_INVOKE_OFFSET))(this, entity, isHandleCutscene, isHandleQteWindow, isHandleTimeSlow);
		}

		::System::Void StopTypeEntityTimeSlow(::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETANIMCONTROLLERNODE_STOPTYPEENTITYTIMESLOW_OFFSET))(this, entityType);
		}
	};
}
