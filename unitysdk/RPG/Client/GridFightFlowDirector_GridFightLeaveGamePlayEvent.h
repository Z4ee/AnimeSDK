#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GRIDFIGHTLEAVEGAMEPLAYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98183D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_GridFightLeaveGamePlayEvent_TypeDefinitionIndex = 52481;

	class GridFightFlowDirector_GridFightLeaveGamePlayEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_GridFightLeaveGamePlayEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GRIDFIGHTLEAVEGAMEPLAYEVENT__CTOR_OFFSET))(this);
		}
	};
}
