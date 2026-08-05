#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ShootGamePatternEvent.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNSTART_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x144D7C90)
#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x144D7CD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OnEventPatternStart_TypeDefinitionIndex = 53986;

	class OnEventPatternStart : public ::MoleMole::FlowCanvas::Nodes::ShootGamePatternEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNSTART__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNSTART_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
