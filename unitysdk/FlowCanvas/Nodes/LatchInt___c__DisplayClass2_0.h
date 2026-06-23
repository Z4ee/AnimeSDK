#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class LatchInt; }

#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC417F0)
#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1BC41800)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchInt___c__DisplayClass2_0_TypeDefinitionIndex = 29435;

	class LatchInt___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::LatchInt* __4__this; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
