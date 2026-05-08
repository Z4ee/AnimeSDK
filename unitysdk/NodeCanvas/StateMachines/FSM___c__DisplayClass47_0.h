#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_FSM___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20D4B0)
#define NODECANVAS_STATEMACHINES_FSM___C__DISPLAYCLASS47_0__GETSTATEWITHNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1A20D4C0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM___c__DisplayClass47_0_TypeDefinitionIndex = 27566;

	class FSM___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStateWithName_b__0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM___C__DISPLAYCLASS47_0__GETSTATEWITHNAME_B__0_OFFSET))(this, n);
		}
	};
}
