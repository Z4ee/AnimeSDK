#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class CustomFunctionEvent; }
namespace System { template <typename T> class Action_1; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E721680)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1E721690)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent___c__DisplayClass22_0_TypeDefinitionIndex = 29843;

	class CustomFunctionEvent___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CustomFunctionEvent* __4__this; // 0x10
		::System::Action_1<::System::Object*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _NodeCanvas_Framework_IInvokable_InvokeAsync_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_B__0_OFFSET))(this, f);
		}
	};
}
