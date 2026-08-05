#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas::Nodes { class CustomFunctionEvent; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7216F0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS24_0__INVOKEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1E721700)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent___c__DisplayClass24_0_TypeDefinitionIndex = 29842;

	class CustomFunctionEvent___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::FlowCanvas::Nodes::CustomFunctionEvent* __4__this; // 0x38
		::FlowCanvas::FlowHandler* flowCallback; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeAsync_b__0(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS24_0__INVOKEASYNC_B__0_OFFSET))(this, o);
		}
	};
}
