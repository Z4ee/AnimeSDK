#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D46200)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D46320)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_B__2_1_OFFSET UNITYSDK_OFFSET(0x10D467E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_B__2_2_OFFSET UNITYSDK_OFFSET(0x10D46830)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_G___SETKEY_2_0_OFFSET UNITYSDK_OFFSET(0x10D46360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LevelMonsterPropertyModifyByIDNode_TypeDefinitionIndex = 80531;

	class LD_LevelMonsterPropertyModifyByIDNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _monsterAdjustID; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_g___SetKey_2_0(::System::Boolean isRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_G___SETKEY_2_0_OFFSET))(this, isRemove);
		}

		::System::Void _RegisterPorts_b__2_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_B__2_1_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__2_2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELMONSTERPROPERTYMODIFYBYIDNODE__REGISTERPORTS_B__2_2_OFFSET))(this, flow);
		}
	};
}
