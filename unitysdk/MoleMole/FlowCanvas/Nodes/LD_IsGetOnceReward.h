#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1924A280)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1924A380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1924A3C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsGetOnceReward_TypeDefinitionIndex = 40768;

	class LD_IsGetOnceReward : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* checkOccupy; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* onceRewardId; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__2_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISGETONCEREWARD__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
