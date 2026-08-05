#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1684BB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1684BA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1684C550)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameReplaceAvatarConfig_TypeDefinitionIndex = 62498;

	class LDShootGameReplaceAvatarConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* avatarTemplateIdInput; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEREPLACEAVATARCONFIG_PROCESS_OFFSET))(this, f);
		}
	};
}
