#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x1BD43E60)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSTAGEHINT_OFFSET UNITYSDK_OFFSET(0x1BD43B80)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLERESULTCLOSEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD44230)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleResultClosedEvent_TypeDefinitionIndex = 64644;

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
