#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEGAMEPAGEAFTERINITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9817BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleGamePageAfterInitEvent_TypeDefinitionIndex = 52475;

	class GridFightFlowDirector_BattleGamePageAfterInitEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_BattleGamePageAfterInitEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEGAMEPAGEAFTERINITEVENT__CTOR_OFFSET))(this);
		}
	};
}
