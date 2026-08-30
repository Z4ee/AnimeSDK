#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTURERETURNAUTOSHOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD441D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_AdventureReturnAutoShowEvent_TypeDefinitionIndex = 64646;

	class GridFightFlowDirector_AdventureReturnAutoShowEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_AdventureReturnAutoShowEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_ADVENTURERETURNAUTOSHOWEVENT__CTOR_OFFSET))(this);
		}
	};
}
