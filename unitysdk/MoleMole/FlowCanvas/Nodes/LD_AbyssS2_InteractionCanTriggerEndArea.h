#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA_INVOKE_OFFSET UNITYSDK_OFFSET(0x118C0CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x118C0D40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_InteractionCanTriggerEndArea_TypeDefinitionIndex = 40217;

	class LD_AbyssS2_InteractionCanTriggerEndArea : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA_INVOKE_OFFSET))(this);
		}
	};
}
