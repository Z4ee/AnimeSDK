#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A02D6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02D790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsAgentOwnTalentCard_TypeDefinitionIndex = 82483;

	class LD_AbyssS2_IsAgentOwnTalentCard : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISAGENTOWNTALENTCARD_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
