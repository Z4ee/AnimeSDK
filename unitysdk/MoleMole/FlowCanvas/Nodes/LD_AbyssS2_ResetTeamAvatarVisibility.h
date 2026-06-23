#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB90D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB9190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x12BB91D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ResetTeamAvatarVisibility_TypeDefinitionIndex = 43601;

	class LD_AbyssS2_ResetTeamAvatarVisibility : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_RESETTEAMAVATARVISIBILITY__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}
	};
}
