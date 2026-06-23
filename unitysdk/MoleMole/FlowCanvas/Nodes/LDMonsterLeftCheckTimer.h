#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_BEIGIN_OFFSET UNITYSDK_OFFSET(0x182D6D20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_BREAK_OFFSET UNITYSDK_OFFSET(0x182D6F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_CHECKMONSTERNUMBER_OFFSET UNITYSDK_OFFSET(0x182D65E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_COMPAREMONSTERCAMP_OFFSET UNITYSDK_OFFSET(0x182D63D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x182D6ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182D5C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_SELECTMONSTERBYCAMP_OFFSET UNITYSDK_OFFSET(0x182D5FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x182D7050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_0_OFFSET UNITYSDK_OFFSET(0x182D7120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_1_OFFSET UNITYSDK_OFFSET(0x182D7150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_2_OFFSET UNITYSDK_OFFSET(0x182D7180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_3_OFFSET UNITYSDK_OFFSET(0x182D71B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_4_OFFSET UNITYSDK_OFFSET(0x182D71C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterLeftCheckTimer_TypeDefinitionIndex = 42570;

	class LDMonsterLeftCheckTimer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* dataMapInput; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Single>* currTimeOutPut; // 0xB0
		::FlowCanvas::FlowOutput* falseOutPut; // 0xB8
		::UnityEngine::Coroutine* coroutine; // 0xC0
		::FlowCanvas::FlowInput* start; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* timeInput; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* allMonsterInput; // 0xD8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* monsterList; // 0xE0
		::FlowCanvas::FlowOutput* trueOutPut; // 0xE8
		::FlowCanvas::FlowInput* breakInput; // 0xF0
		::FlowCanvas::ValueOutput_1<::System::Single>* normaliezedOutPut; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* monsterCampInput; // 0x100
		::FlowCanvas::ValueInput_1<::System::Int32>* countInput; // 0x108
		::FlowCanvas::FlowInput* restart; // 0x110
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* compareTypeInput; // 0x118
		::System::Single tickStart; // 0x120
		::System::Single curTickTime; // 0x124
		::System::Single normalized; // 0x128
		::System::Boolean finish; // 0x12C
		::System::Boolean isStart; // 0x12D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 SelectMonsterByCamp(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* monsterList)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_SELECTMONSTERBYCAMP_OFFSET))(this, monsterList);
		}

		::System::Boolean CompareMonsterCamp(::MoleMole::Battle::Entity* self, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_COMPAREMONSTERCAMP_OFFSET))(this, self, monster);
		}

		::System::Boolean CheckMonsterNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_CHECKMONSTERNUMBER_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_BEIGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_BREAK_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__20_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__20_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__20_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_2_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__20_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_3_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__20_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKTIMER__REGISTERPORTS_B__20_4_OFFSET))(this);
		}
	};
}
