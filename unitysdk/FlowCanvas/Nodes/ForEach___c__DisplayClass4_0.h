#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowBreak; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class ForEach; }

#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC33F40)
#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1CC33F50)
#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1CC33F70)
#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1CC33F90)
#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x1CC344D0)
#define FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__4_OFFSET UNITYSDK_OFFSET(0x1CC344B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForEach___c__DisplayClass4_0_TypeDefinitionIndex = 29420;

	class ForEach___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fFinish; // 0x10
		::FlowCanvas::FlowBreak* __9__4; // 0x18
		::FlowCanvas::Nodes::ForEach* __4__this; // 0x20
		::FlowCanvas::FlowOutput* fCurrent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH___C__DISPLAYCLASS4_0__REGISTERPORTS_B__3_OFFSET))(this, f);
		}
	};
}
