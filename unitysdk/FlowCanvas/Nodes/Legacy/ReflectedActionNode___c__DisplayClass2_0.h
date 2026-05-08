#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes::Legacy { class ReflectedActionNode; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EC4A0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B0EC4B0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode___c__DisplayClass2_0_TypeDefinitionIndex = 26913;

	class ReflectedActionNode___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedActionNode* __4__this; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
