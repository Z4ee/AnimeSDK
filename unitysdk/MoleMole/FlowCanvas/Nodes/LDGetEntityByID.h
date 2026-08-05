#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B19E700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19E870)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityByID_TypeDefinitionIndex = 76643;

	class LDGetEntityByID : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Battle::Entity*, ::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYID__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::System::UInt32 a)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYID_INVOKE_OFFSET))(this, a);
		}
	};
}
