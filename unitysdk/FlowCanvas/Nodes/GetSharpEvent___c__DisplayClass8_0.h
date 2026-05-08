#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class GetSharpEvent; }
namespace FlowCanvas::Nodes { class SharpEvent; }

#define FLOWCANVAS_NODES_GETSHARPEVENT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EB700)
#define FLOWCANVAS_NODES_GETSHARPEVENT___C__DISPLAYCLASS8_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B0EB710)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetSharpEvent___c__DisplayClass8_0_TypeDefinitionIndex = 27914;

	class GetSharpEvent___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::SharpEvent* wrapper; // 0x10
		::FlowCanvas::Nodes::GetSharpEvent* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT___C__DISPLAYCLASS8_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
