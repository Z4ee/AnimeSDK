#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterRandomSelectItem; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_BEGIN_OFFSET UNITYSDK_OFFSET(0x13015D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_BREAK_OFFSET UNITYSDK_OFFSET(0x13016890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_CHECKWARPMONSTERNAME_OFFSET UNITYSDK_OFFSET(0x13016EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_CREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x13017620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_DORESTART_OFFSET UNITYSDK_OFFSET(0x13016AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_FIREFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x13016B80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_FORCEBREAK_OFFSET UNITYSDK_OFFSET(0x13016940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x130167E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x130185E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RANDOMPICKTYPE_OFFSET UNITYSDK_OFFSET(0x13016150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RANDOMPICK_OFFSET UNITYSDK_OFFSET(0x13018B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130157B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RESTART_OFFSET UNITYSDK_OFFSET(0x13016D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RESTDATA_OFFSET UNITYSDK_OFFSET(0x13015C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x13018BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_0_OFFSET UNITYSDK_OFFSET(0x13018D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_1_OFFSET UNITYSDK_OFFSET(0x13018D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_2_OFFSET UNITYSDK_OFFSET(0x13018E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_3_OFFSET UNITYSDK_OFFSET(0x13018E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_4_OFFSET UNITYSDK_OFFSET(0x13018EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_5_OFFSET UNITYSDK_OFFSET(0x13018EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterRandomType_TypeDefinitionIndex = 75525;

	class LDWaveMonsterRandomType : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* createList; // 0xA8
		::UnityEngine::Coroutine* coroutine; // 0xB0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xB8
		::FlowCanvas::FlowOutput* finishOutput; // 0xC0
		::MoleMole::Battle::Entity* createEntity; // 0xC8
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterRandomSelectItem*>* tempList; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* typeMaxInput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterRandomSelectItem*>*>* randomIDInput; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityListOutput; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Int32>* indexOutput; // 0xF0
		::FlowCanvas::ValueInput_1<::System::String*>* currentSectionName; // 0xF8
		::FlowCanvas::FlowOutput* output; // 0x100
		::System::Collections::Generic::List_1<::System::Int32>* pickAIList; // 0x108
		::System::String* errorMsg; // 0x110
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* monsterIDTypeInput; // 0x118
		::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* campInput; // 0x120
		::FlowCanvas::FlowInput* input; // 0x128
		::System::String* currMonsterName; // 0x130
		::FlowCanvas::FlowOutput* doOutput; // 0x138
		::System::Collections::Generic::List_1<::System::Int32>* pickList; // 0x140
		::FlowCanvas::FlowInput* restartInput; // 0x148
		::FlowCanvas::ValueInput_1<::System::Int32>* typeMinInput; // 0x150
		::FlowCanvas::ValueInput_1<::System::Boolean>* towardsPlayerInput; // 0x158
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* saveMapInput; // 0x160
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>*>* createInput; // 0x168
		::FlowCanvas::FlowInput* breakInput; // 0x170
		::System::Single waitDuration; // 0x178
		::System::Single waitDelta; // 0x17C
		::System::Boolean isStart; // 0x180
		::System::Boolean waittingRestart; // 0x181
		::System::Boolean waittingCreate; // 0x182
		::System::Boolean waitBreak; // 0x183
		::System::Single startTime; // 0x184
		::System::Int32 createIndex; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void RestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RESTDATA_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_BEGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_BREAK_OFFSET))(this, f);
		}

		::System::Void ForceBreak(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_FORCEBREAK_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RESTART_OFFSET))(this, f);
		}

		::System::Void DoRestart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_DORESTART_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::String* CheckWarpMonsterName(::System::String* configName, ::System::Int32 createIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_CHECKWARPMONSTERNAME_OFFSET))(this, configName, createIndex);
		}

		::System::Void CreateMonster(::System::Int32 monsterId, ::System::String* spawnPointName, ::MoleMole::Config::CampType camp, ::System::Boolean towardsPlayer, ::System::Int32 aiConfigId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_CREATEMONSTER_OFFSET))(this, monsterId, spawnPointName, camp, towardsPlayer, aiConfigId);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Int32 RandomPick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RANDOMPICK_OFFSET))(this);
		}

		::System::Void RandomPickType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_RANDOMPICKTYPE_OFFSET))(this);
		}

		::System::Void FireFinishEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE_FIREFINISHEVENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__34_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__34_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__34_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__34_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__34_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__34_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__REGISTERPORTS_B__34_5_OFFSET))(this);
		}
	};
}
