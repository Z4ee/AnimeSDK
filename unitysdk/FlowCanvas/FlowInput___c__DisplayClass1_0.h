#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowNode; }

#define FLOWCANVAS_FLOWINPUT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD70B0)
#define FLOWCANVAS_FLOWINPUT___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1DAD70C0)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowInput___c__DisplayClass1_0_TypeDefinitionIndex = 30567;

	class FlowInput___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowNode* parent; // 0x10
		::FlowCanvas::FlowInput* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET))(this, f);
		}
	};
}
