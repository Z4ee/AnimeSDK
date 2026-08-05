#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InLevelInteractionEventNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InteractionEndSuddenEventMsg.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1369D880)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1369D8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_InteractionTriggerEndSuddenEventEvent_TypeDefinitionIndex = 58495;

	class LD_AbyssS2_InteractionTriggerEndSuddenEventEvent : public ::MoleMole::FlowCanvas::Nodes::InLevelInteractionEventNode_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
