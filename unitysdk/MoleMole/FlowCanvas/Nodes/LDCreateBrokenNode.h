#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B18D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118B1EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateBrokenNode_TypeDefinitionIndex = 57035;

	class LDCreateBrokenNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::Battle::Entity*, ::System::Int32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::System::Int32 monsterId, ::System::String* anchor)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE_INVOKE_OFFSET))(this, monsterId, anchor);
		}
	};
}
