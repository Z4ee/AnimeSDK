#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x154069C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x15406A60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAIActive_TypeDefinitionIndex = 56969;

	class LDAIActive : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean active)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE_INVOKE_OFFSET))(this, entity, active);
		}
	};
}
