#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlowDirector_FlowStateEventBase_1.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA49B900)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_GameManualQuitEvent_TypeDefinitionIndex = 59437;

	class GridFightFlowDirector_GameManualQuitEvent : public ::RPG::Client::GridFightFlowDirector_FlowStateEventBase_1<::RPG::Client::GridFightFlowDirector_GameManualQuitEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GAMEMANUALQUITEVENT__CTOR_OFFSET))(this);
		}
	};
}
