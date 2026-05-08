#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class PureReflectedMethodNode___c__DisplayClass16_0; }

#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B417AD0)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1B417AE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass16_1_TypeDefinitionIndex = 27961;

	class PureReflectedMethodNode___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0x10
		::FlowCanvas::Nodes::PureReflectedMethodNode___c__DisplayClass16_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__REGISTERPORTS_B__2_OFFSET))(this, flow);
		}
	};
}
