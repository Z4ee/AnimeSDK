#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class LatchBool; }

#define FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D348080)
#define FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D348090)
#define FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D3480F0)
#define FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1D348150)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchBool___c__DisplayClass1_0_TypeDefinitionIndex = 29866;

	class LatchBool___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::LatchBool* __4__this; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL___C__DISPLAYCLASS1_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
