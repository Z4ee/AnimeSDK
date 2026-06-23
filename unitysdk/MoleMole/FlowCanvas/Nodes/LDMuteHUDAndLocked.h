#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x19121980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED__CTOR_OFFSET UNITYSDK_OFFSET(0x19121EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteHUDAndLocked_TypeDefinitionIndex = 65108;

	class LDMuteHUDAndLocked : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute, ::System::Boolean ignoreHUDAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED_INVOKE_OFFSET))(this, entity, isMute, ignoreHUDAnim);
		}
	};
}
