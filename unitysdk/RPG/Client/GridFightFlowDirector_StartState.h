#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1BD47270)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1BD47310)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1BD472C0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD42CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_StartState_TypeDefinitionIndex = 64653;

	class GridFightFlowDirector_StartState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEVENT_OFFSET))(this, a1);
		}
	};
}
