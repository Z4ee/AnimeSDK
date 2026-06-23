#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class MergeBoth; }

#define FLOWCANVAS_NODES_MERGEBOTH___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51DF10)
#define FLOWCANVAS_NODES_MERGEBOTH___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D51E230)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MergeBoth___c__DisplayClass7_0_TypeDefinitionIndex = 29622;

	class MergeBoth___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::MergeBoth* __4__this; // 0x10
		::System::Int32 i1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, flow);
		}
	};
}
