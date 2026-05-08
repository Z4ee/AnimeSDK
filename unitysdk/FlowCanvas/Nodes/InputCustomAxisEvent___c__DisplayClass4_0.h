#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class InputCustomAxisEvent; }

#define FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E16A0)
#define FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E16B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InputCustomAxisEvent___c__DisplayClass4_0_TypeDefinitionIndex = 27523;

	class InputCustomAxisEvent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::InputCustomAxisEvent* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
