#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMState.h"

namespace System { class String; }

#define NODECANVAS_STATEMACHINES_EMPTYSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EF91950)
#define NODECANVAS_STATEMACHINES_EMPTYSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1EF91980)
#define NODECANVAS_STATEMACHINES_EMPTYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF91990)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int EmptyState_TypeDefinitionIndex = 31006;

	class EmptyState : public ::NodeCanvas::StateMachines::FSMState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_EMPTYSTATE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_EMPTYSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_EMPTYSTATE_ONENTER_OFFSET))(this);
		}
	};
}
