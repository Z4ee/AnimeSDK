#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class LatchInt___c__DisplayClass2_0; }

#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41820)
#define FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1BC41830)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchInt___c__DisplayClass2_1_TypeDefinitionIndex = 29434;

	class LatchInt___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::LatchInt___c__DisplayClass2_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT___C__DISPLAYCLASS2_1__REGISTERPORTS_B__1_OFFSET))(this, f);
		}
	};
}
