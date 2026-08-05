#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class DelegateCallbackEvent; }

#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD74C0)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT___C__DISPLAYCLASS9_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1DAD74D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DelegateCallbackEvent___c__DisplayClass9_0_TypeDefinitionIndex = 30548;

	class DelegateCallbackEvent___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::DelegateCallbackEvent* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT___C__DISPLAYCLASS9_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
