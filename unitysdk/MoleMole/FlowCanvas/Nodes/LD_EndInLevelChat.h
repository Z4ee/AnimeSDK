#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1499C3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1499C490)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1499C4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EndInLevelChat_TypeDefinitionIndex = 74363;

	class LD_EndInLevelChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* _in; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::System::Int32 ChatID; // 0xB8
		::System::Boolean CutCameraBlendOut; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHAT__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
