#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowBreak; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class ForLoop; }

#define FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D388260)
#define FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D388270)
#define FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D388290)
#define FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1D3887F0)
#define FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x1D3887D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForLoop___c__DisplayClass6_0_TypeDefinitionIndex = 29923;

	class ForLoop___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fCurrent; // 0x10
		::FlowCanvas::FlowOutput* fFinish; // 0x18
		::FlowCanvas::FlowBreak* __9__3; // 0x20
		::FlowCanvas::Nodes::ForLoop* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET))(this, f);
		}
	};
}
