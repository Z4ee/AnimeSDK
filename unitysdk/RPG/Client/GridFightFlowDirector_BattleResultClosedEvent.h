#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB3A560)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSTAGEHINT_OFFSET UNITYSDK_OFFSET(0xBB3A310)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleResultClosedEvent_TypeDefinitionIndex = 60369;

	class GridFightFlowDirector_BattleResultClosedEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_BattleResultClosedEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedShowStageHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSTAGEHINT_OFFSET))(this);
		}

		::System::Boolean get_NeedShowSettleResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSETTLERESULT_OFFSET))(this);
		}
	};
}
