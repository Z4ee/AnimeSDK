#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class PureReflectionConstructorNode___c__DisplayClass10_0; }

#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7EA70)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_1__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1EB7EA80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectionConstructorNode___c__DisplayClass10_1_TypeDefinitionIndex = 31287;

	class PureReflectionConstructorNode___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0x10
		::FlowCanvas::Nodes::PureReflectionConstructorNode___c__DisplayClass10_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_1__REGISTERPORTS_B__1_OFFSET))(this, flow);
		}
	};
}
