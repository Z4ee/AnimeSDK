#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }
namespace RPG::Client { class GridFightFlowDirector_ITransitionRule; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A4CB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__DISPLAYCLASS53_0___TRIGGERTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0x1A6A5CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector___c__DisplayClass53_0_TypeDefinitionIndex = 61686;

	class GridFightFlowDirector___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TriggerTransition_b__0(::RPG::Client::GridFightFlowDirector_ITransitionRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_ITransitionRule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR___C__DISPLAYCLASS53_0___TRIGGERTRANSITION_B__0_OFFSET))(this, a1);
		}
	};
}
