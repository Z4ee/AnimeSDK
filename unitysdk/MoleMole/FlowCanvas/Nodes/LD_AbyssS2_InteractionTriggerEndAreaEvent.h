#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InLevelInteractionEventNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDAREAEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x13ED8090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDAREAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED80F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_InteractionTriggerEndAreaEvent_TypeDefinitionIndex = 65450;

	class LD_AbyssS2_InteractionTriggerEndAreaEvent : public ::MoleMole::FlowCanvas::Nodes::InLevelInteractionEventNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDAREAEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDAREAEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
