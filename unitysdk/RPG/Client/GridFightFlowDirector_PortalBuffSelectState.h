#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA49C480)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xA49C6B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA49C660)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA499E70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PortalBuffSelectState_TypeDefinitionIndex = 59445;

	class GridFightFlowDirector_PortalBuffSelectState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE_ONEVENT_OFFSET))(this, event);
		}
	};
}
