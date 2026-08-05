#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDEnterSideScrollingCameraModeV2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1368F500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS7_0__HANDLEFLOWINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x1368F510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterSideScrollingCameraModeV2___c__DisplayClass7_0_TypeDefinitionIndex = 47401;

	class LDEnterSideScrollingCameraModeV2___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDEnterSideScrollingCameraModeV2* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleFlowInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2___C__DISPLAYCLASS7_0__HANDLEFLOWINPUT_B__0_OFFSET))(this);
		}
	};
}
