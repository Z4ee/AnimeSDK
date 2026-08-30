#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEFINISHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD441F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_BattleFinishEvent_TypeDefinitionIndex = 64642;

	class GridFightFlowDirector_BattleFinishEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_BattleFinishEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_BATTLEFINISHEVENT__CTOR_OFFSET))(this);
		}
	};
}
