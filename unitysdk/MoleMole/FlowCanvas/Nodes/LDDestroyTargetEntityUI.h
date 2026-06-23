#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1911B0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1911B220)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetEntityUI_TypeDefinitionIndex = 56077;

	class LDDestroyTargetEntityUI : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
