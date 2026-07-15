#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1A6A82D0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1A6A8760)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1A6A8710)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A4910)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A6A84F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_SettleState_TypeDefinitionIndex = 61680;

	class GridFightFlowDirector_SettleState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEVENT_OFFSET))(this, a1);
		}

		::System::Void _TryShowSettleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__TRYSHOWSETTLERESULT_OFFSET))(this);
		}
	};
}
