#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_RECOVERENTITY_OFFSET UNITYSDK_OFFSET(0x149E74E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149E7040)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x149E71B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__CTOR_OFFSET UNITYSDK_OFFSET(0x149E7680)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x149E76C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HENSHINBUDDY__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x149E7730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HenshinBuddy_TypeDefinitionIndex = 79656;

	class LD_HenshinBuddy : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* buddyID; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* hideOriBuddy; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Level::BangbooPlayType>* bangbooPlayType; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0

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
