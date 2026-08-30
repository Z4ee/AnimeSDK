#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD195070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_MonsterReavelHintClosedEvent_TypeDefinitionIndex = 64640;

	class GridFightFlowDirector_MonsterReavelHintClosedEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_MonsterReavelHintClosedEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_MONSTERREAVELHINTCLOSEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
