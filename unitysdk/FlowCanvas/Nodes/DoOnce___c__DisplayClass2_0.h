#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class DoOnce; }

#define FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81CD20)
#define FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D81CD30)
#define FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D81CD90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DoOnce___c__DisplayClass2_0_TypeDefinitionIndex = 30425;

	class DoOnce___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0x10
		::FlowCanvas::Nodes::DoOnce* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DOONCE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}
	};
}
