#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class CoroutineState; }

#define FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC02C0)
#define FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1AFC02D0)
#define FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1AFC03A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CoroutineState___c__DisplayClass3_0_TypeDefinitionIndex = 26906;

	class CoroutineState___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fUpdate; // 0x10
		::FlowCanvas::FlowOutput* fFinish; // 0x18
		::FlowCanvas::FlowOutput* fStart; // 0x20
		::FlowCanvas::Nodes::CoroutineState* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}
	};
}
