#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class InvokeSignal; }

#define FLOWCANVAS_NODES_INVOKESIGNAL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC0680)
#define FLOWCANVAS_NODES_INVOKESIGNAL___C__DISPLAYCLASS10_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1AFC0690)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InvokeSignal___c__DisplayClass10_0_TypeDefinitionIndex = 26858;

	class InvokeSignal___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* exit; // 0x10
		::FlowCanvas::Nodes::InvokeSignal* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL___C__DISPLAYCLASS10_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
