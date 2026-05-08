#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ShootGamePatternEvent.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNEND_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x16D474B0)
#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNEND__CTOR_OFFSET UNITYSDK_OFFSET(0x16D474F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OnEventPatternEnd_TypeDefinitionIndex = 82427;

	class OnEventPatternEnd : public ::MoleMole::FlowCanvas::Nodes::ShootGamePatternEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNEND__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNEND_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
