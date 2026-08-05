#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class ConfigPosRotWithReferTarget; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDEFFECTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B52CAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52CD10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddEffectNode_TypeDefinitionIndex = 41969;

	class LDAddEffectNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDEFFECTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* EffectPattern, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget* EffectPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDEFFECTNODE_INVOKE_OFFSET))(this, entity, EffectPattern, EffectPosRot);
		}
	};
}
