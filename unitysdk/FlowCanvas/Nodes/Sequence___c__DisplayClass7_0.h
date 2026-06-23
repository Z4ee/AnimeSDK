#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Sequence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61FF00)
#define FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1C61FF10)
#define FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1C620040)
#define FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1C620070)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Sequence___c__DisplayClass7_0_TypeDefinitionIndex = 29732;

	class Sequence___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* outs; // 0x10
		::FlowCanvas::Nodes::Sequence* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
