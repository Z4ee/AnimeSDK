#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x125B60F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x125B6640)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetCameraReferenceMove_TypeDefinitionIndex = 77117;

	class LDSetCameraReferenceMove : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean active, ::MoleMole::Battle::Entity* refEntity, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE_INVOKE_OFFSET))(this, active, refEntity, tag);
		}
	};
}
