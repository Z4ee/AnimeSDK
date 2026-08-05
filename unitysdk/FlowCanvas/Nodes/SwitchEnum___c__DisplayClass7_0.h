#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class ValueInput; }

#define FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F410)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchEnum___c__DisplayClass7_0_TypeDefinitionIndex = 29763;

	class SwitchEnum___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput* selector; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
