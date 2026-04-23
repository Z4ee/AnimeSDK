#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA49B0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleStartEvent_TypeDefinitionIndex = 59431;

	class GridFightFlowDirector_BattleStartEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_BattleStartEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLESTARTEVENT__CTOR_OFFSET))(this);
		}
	};
}
