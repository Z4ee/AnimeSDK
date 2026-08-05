#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_PROCESS_OFFSET UNITYSDK_OFFSET(0x118B9E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118B9CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x118BA360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x118BA3A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceAvatarByRobotID_TypeDefinitionIndex = 61521;

	class LDReplaceAvatarByRobotID : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsMainCityPrefab; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* forceRemoveSameAvatarID; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsHideHudBG; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* TargetAvatarIndex; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsKeepState; // 0xC8
		::FlowCanvas::FlowOutput* flowOut; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* RobotID; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}
	};
}
