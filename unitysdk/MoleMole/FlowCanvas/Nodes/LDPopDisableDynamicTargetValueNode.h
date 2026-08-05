#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB4CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopDisableDynamicTargetValueNode_TypeDefinitionIndex = 68590;

	class LDPopDisableDynamicTargetValueNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* target, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET))(this, target, tag);
		}
	};
}
