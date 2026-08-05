#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class SignalCallback; }

#define FLOWCANVAS_NODES_SIGNALCALLBACK___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7234B0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK___C__DISPLAYCLASS16_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1E7234C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SignalCallback___c__DisplayClass16_0_TypeDefinitionIndex = 31312;

	class SignalCallback___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::SignalCallback* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__2()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK___C__DISPLAYCLASS16_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
