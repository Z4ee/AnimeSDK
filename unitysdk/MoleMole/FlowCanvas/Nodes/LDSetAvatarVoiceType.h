#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FAE144EE9510F878.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_BEGIN_OFFSET UNITYSDK_OFFSET(0x16E4D4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16E4D400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4D760)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x16E4D7A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAvatarVoiceType_TypeDefinitionIndex = 78391;

	class LDSetAvatarVoiceType : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::Enum_3_FAE144EE9510F878 AvatarVoiceType; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARVOICETYPE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
