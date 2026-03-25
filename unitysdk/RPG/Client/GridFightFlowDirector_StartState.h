#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x981A6F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x981A790)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x981A740)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9816AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_StartState_TypeDefinitionIndex = 52485;

	class GridFightFlowDirector_StartState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STARTSTATE_ONEVENT_OFFSET))(this, event);
		}
	};
}
