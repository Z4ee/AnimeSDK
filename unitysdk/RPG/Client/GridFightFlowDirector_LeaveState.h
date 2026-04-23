#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA49BA30)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xA49BF00)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA49BEB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA499EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_LeaveState_TypeDefinitionIndex = 59455;

	class GridFightFlowDirector_LeaveState : public ::System::Object
	{
	public:
		::System::Boolean _ShouldShowEntrancePage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_LEAVESTATE_ONEVENT_OFFSET))(this, event);
		}
	};
}
