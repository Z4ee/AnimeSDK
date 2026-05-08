#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_RECOVERENTITY_OFFSET UNITYSDK_OFFSET(0x16D460C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16D45C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x16D45D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__CTOR_OFFSET UNITYSDK_OFFSET(0x16D46260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x16D462A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x16D46310)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HenshinBuddy_TypeDefinitionIndex = 73628;

	class LD_HenshinBuddy : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* hideOriBuddy; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* buddyID; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Level::BangbooPlayType>* bangbooPlayType; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_START_INTERACT_OFFSET))(this, f);
		}

		::System::Void RecoverEntity(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_RECOVERENTITY_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_1_OFFSET))(this, f);
		}
	};
}
