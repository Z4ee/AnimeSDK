#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x98179D0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9819B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_SettleResultEvent_TypeDefinitionIndex = 52480;

	class GridFightFlowDirector_SettleResultEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_SettleResultEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET))(this);
		}
	};
}
