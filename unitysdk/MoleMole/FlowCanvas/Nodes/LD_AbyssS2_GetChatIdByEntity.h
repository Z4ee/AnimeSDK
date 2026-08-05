#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCHATIDBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x118C08E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCHATIDBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x118C0A40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetChatIdByEntity_TypeDefinitionIndex = 71757;

	class LD_AbyssS2_GetChatIdByEntity : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCHATIDBYENTITY__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCHATIDBYENTITY_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
