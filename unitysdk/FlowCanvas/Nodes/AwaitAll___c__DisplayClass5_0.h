#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class AwaitAll; }

#define FLOWCANVAS_NODES_AWAITALL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E12D0)
#define FLOWCANVAS_NODES_AWAITALL___C__DISPLAYCLASS5_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E12E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AwaitAll___c__DisplayClass5_0_TypeDefinitionIndex = 28054;

	class AwaitAll___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::AwaitAll* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL___C__DISPLAYCLASS5_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
