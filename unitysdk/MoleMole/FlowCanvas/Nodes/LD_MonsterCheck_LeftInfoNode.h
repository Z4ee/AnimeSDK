#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x16CAA780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x16CAA930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16CAA530)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16CAA3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x16CAA580)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAABC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__ONEVENTFROMANYONE_B__12_0_OFFSET UNITYSDK_OFFSET(0x16CAAED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x16CAAC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x16CAAE10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__START_OFFSET UNITYSDK_OFFSET(0x16CAA730)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16CAAF10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MonsterCheck_LeftInfoNode_TypeDefinitionIndex = 46297;

	class LD_MonsterCheck_LeftInfoNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* _aliveCount; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isAll; // 0xB8
		::FlowCanvas::FlowOutput* _OnChanged; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::Config::MonsterStrengthType>* _monsterStrength; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isUpgrade; // 0xD0
		::System::Boolean isBinded; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__START_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Int32 _RegisterPorts_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__REGISTERPORTS_B__6_1_OFFSET))(this, flow);
		}

		::System::Void _OnEventFromAnyone_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE__ONEVENTFROMANYONE_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCHECK_LEFTINFONODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
