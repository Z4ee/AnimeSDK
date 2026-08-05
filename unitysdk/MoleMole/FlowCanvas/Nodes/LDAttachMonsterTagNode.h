#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDATTACHMONSTERTAGNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B52CD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDATTACHMONSTERTAGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52CE80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAttachMonsterTagNode_TypeDefinitionIndex = 42222;

	class LDAttachMonsterTagNode : public ::FlowCanvas::Nodes::CallableActionNode_3<::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDATTACHMONSTERTAGNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDATTACHMONSTERTAGNODE_INVOKE_OFFSET))(this, entity, tag, value);
		}
	};
}
