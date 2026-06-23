#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDReadDailyCardData_MonsterInfo.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D40270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_START_OFFSET UNITYSDK_OFFSET(0x10D404E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D40D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_0_OFFSET UNITYSDK_OFFSET(0x10D40DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_1_OFFSET UNITYSDK_OFFSET(0x10D40E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_2_OFFSET UNITYSDK_OFFSET(0x10D40E20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_3_OFFSET UNITYSDK_OFFSET(0x10D40E30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_4_OFFSET UNITYSDK_OFFSET(0x10D40E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_5_OFFSET UNITYSDK_OFFSET(0x10D40E50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadDailyCardData_TypeDefinitionIndex = 85919;

	class LDReadDailyCardData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::String*>* targetBattleStage; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::String*>* playerSpawnPosNode; // 0xB8
		::System::String* playerSpawnPos; // 0xC0
		::System::String* targetBattleStageHandle; // 0xC8
		::FlowCanvas::ValueOutput_1<::System::Int32>* changeToBadassBattleField; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* cardIdNode; // 0xD8
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* waveMonsterHandle; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>*>* waveMonsters; // 0xE8
		::FlowCanvas::FlowInput* input; // 0xF0
		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType performType; // 0xF8
		::System::Int32 changeToBadassBattleFieldHandler; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__13_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_0_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* _RegisterPorts_b__13_1()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__13_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_2_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__13_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_3_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__13_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_4_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType _RegisterPorts_b__13_5()
		{
			return ((::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_5_OFFSET))(this);
		}
	};
}
