#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class UnityEventAutoCallbackEvent; }

#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E39D0)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT___C__DISPLAYCLASS20_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E3E80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UnityEventAutoCallbackEvent___c__DisplayClass20_0_TypeDefinitionIndex = 27867;

	class UnityEventAutoCallbackEvent___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::UnityEventAutoCallbackEvent* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT___C__DISPLAYCLASS20_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
