#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Split; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_SPLIT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DBB0)
#define FLOWCANVAS_NODES_SPLIT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB6DBC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Split___c__DisplayClass4_0_TypeDefinitionIndex = 31201;

	class Split___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* outs; // 0x10
		::FlowCanvas::Nodes::Split* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
