#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAMEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9819B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PrepareUnfinishedGameEvent_TypeDefinitionIndex = 52482;

	class GridFightFlowDirector_PrepareUnfinishedGameEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_PrepareUnfinishedGameEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAMEEVENT__CTOR_OFFSET))(this);
		}
	};
}
