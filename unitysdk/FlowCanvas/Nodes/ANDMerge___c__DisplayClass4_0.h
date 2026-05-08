#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ANDMerge; }

#define FLOWCANVAS_NODES_ANDMERGE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4572E0)
#define FLOWCANVAS_NODES_ANDMERGE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B4572F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ANDMerge___c__DisplayClass4_0_TypeDefinitionIndex = 26997;

	class ANDMerge___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ANDMerge* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANDMERGE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANDMERGE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
