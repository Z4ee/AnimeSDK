#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDExitSideScrollingCameraModeV2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A82140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS5_0__HANDLEFLOWINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x13A82150)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitSideScrollingCameraModeV2___c__DisplayClass5_0_TypeDefinitionIndex = 90282;

	class LDExitSideScrollingCameraModeV2___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDExitSideScrollingCameraModeV2* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleFlowInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS5_0__HANDLEFLOWINPUT_B__0_OFFSET))(this);
		}
	};
}
