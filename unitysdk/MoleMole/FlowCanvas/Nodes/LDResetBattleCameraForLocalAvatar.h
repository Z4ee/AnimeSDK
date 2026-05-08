#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_BACKCAMERA_OFFSET UNITYSDK_OFFSET(0x160440F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16044030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16044190)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetBattleCameraForLocalAvatar_TypeDefinitionIndex = 45717;

	class LDResetBattleCameraForLocalAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void BackCamera(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETBATTLECAMERAFORLOCALAVATAR_BACKCAMERA_OFFSET))(this, f);
		}
	};
}
