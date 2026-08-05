#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_DOCLEARCHATCAMERA_OFFSET UNITYSDK_OFFSET(0x1299E760)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1299E670)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1299E900)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1299E940)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ClearChatCamera_TypeDefinitionIndex = 63146;

	class LD_ClearChatCamera : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _cutCamera; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _useChatSequence; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoClearChatCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_DOCLEARCHATCAMERA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
