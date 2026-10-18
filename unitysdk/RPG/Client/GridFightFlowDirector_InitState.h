#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD12CC60)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xD12CD00)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD12CCB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1266E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_InitState_TypeDefinitionIndex = 64592;

	class GridFightFlowDirector_InitState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEVENT_OFFSET))(this, a1);
		}
	};
}
