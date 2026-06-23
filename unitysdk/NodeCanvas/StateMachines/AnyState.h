#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMNode.h"

namespace System { class String; }

#define NODECANVAS_STATEMACHINES_ANYSTATE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1D5288C0)
#define NODECANVAS_STATEMACHINES_ANYSTATE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D5288A0)
#define NODECANVAS_STATEMACHINES_ANYSTATE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D5288B0)
#define NODECANVAS_STATEMACHINES_ANYSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D528860)
#define NODECANVAS_STATEMACHINES_ANYSTATE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D528B10)
#define NODECANVAS_STATEMACHINES_ANYSTATE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D5288D0)
#define NODECANVAS_STATEMACHINES_ANYSTATE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D528A10)
#define NODECANVAS_STATEMACHINES_ANYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D528EC0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int AnyState_TypeDefinitionIndex = 29317;

	class AnyState : public ::NodeCanvas::StateMachines::FSMNode
	{
	public:
		::System::Boolean dontRetriggerStates; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ANYSTATE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}
	};
}
