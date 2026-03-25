#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTUREPHASEENTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9817B50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_AdventurePhaseEnterEvent_TypeDefinitionIndex = 52477;

	class GridFightFlowDirector_AdventurePhaseEnterEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_AdventurePhaseEnterEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTUREPHASEENTEREVENT__CTOR_OFFSET))(this);
		}
	};
}
