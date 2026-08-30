#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD194AB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xD194FB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD194F60)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD192B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_LeaveState_TypeDefinitionIndex = 64665;

	class GridFightFlowDirector_LeaveState : public ::System::Object
	{
	public:
		::System::Boolean _ShouldShowEntrancePage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEVENT_OFFSET))(this, a1);
		}
	};
}
