#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class CustomFunctionEvent; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D531DF0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS19_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D531E00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent___c__DisplayClass19_0_TypeDefinitionIndex = 30208;

	class CustomFunctionEvent___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CustomFunctionEvent* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS19_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
