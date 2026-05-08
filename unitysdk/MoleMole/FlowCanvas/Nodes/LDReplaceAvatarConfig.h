#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG_PROCESS_OFFSET UNITYSDK_OFFSET(0x16B80F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B80E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B81700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceAvatarConfig_TypeDefinitionIndex = 42017;

	class LDReplaceAvatarConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* overrideAvatarConfigIDInput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* avatarTemplateIdInput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARCONFIG_PROCESS_OFFSET))(this, f);
		}
	};
}
