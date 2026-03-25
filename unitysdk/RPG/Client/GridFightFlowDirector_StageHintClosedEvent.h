#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0x9817560)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x981A060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_StageHintClosedEvent_TypeDefinitionIndex = 52471;

	class GridFightFlowDirector_StageHintClosedEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_StageHintClosedEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPortalBuffSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET))(this);
		}
	};
}
