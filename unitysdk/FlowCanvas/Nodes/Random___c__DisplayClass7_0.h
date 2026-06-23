#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B93F0)
#define FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D7B9400)
#define FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D7B9540)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Random___c__DisplayClass7_0_TypeDefinitionIndex = 30169;

	class Random___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* outs; // 0x10
		::FlowCanvas::Nodes::Random* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
