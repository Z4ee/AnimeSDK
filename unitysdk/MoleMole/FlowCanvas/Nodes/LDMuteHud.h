#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD_INVOKE_OFFSET UNITYSDK_OFFSET(0x136931D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD__CTOR_OFFSET UNITYSDK_OFFSET(0x136934B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteHud_TypeDefinitionIndex = 87833;

	class LDMuteHud : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::UInt32 entityId, ::System::Boolean isMute)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD_INVOKE_OFFSET))(this, entity, entityId, isMute);
		}
	};
}
