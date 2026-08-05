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
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_BEGIN_OFFSET UNITYSDK_OFFSET(0x136982C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_BREAK_OFFSET UNITYSDK_OFFSET(0x13698750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_CHECKWARPMONSTERNAME_OFFSET UNITYSDK_OFFSET(0x13699360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_CREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x13699AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_DORESTART_OFFSET UNITYSDK_OFFSET(0x136989B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_FIREFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x13698A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_FORCEBREAK_OFFSET UNITYSDK_OFFSET(0x13698800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_GET_MUTEAI_OFFSET UNITYSDK_OFFSET(0x13697B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_GET_MUTEHUD_OFFSET UNITYSDK_OFFSET(0x13697C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x136986A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1369AEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13698260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_POSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x13698D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RANDOMPICK_OFFSET UNITYSDK_OFFSET(0x1369B410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13697D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RESTART_OFFSET UNITYSDK_OFFSET(0x13698C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RESTDATA_OFFSET UNITYSDK_OFFSET(0x13698190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1369B5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_0_OFFSET UNITYSDK_OFFSET(0x1369B690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_1_OFFSET UNITYSDK_OFFSET(0x1369B6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_2_OFFSET UNITYSDK_OFFSET(0x1369B790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_3_OFFSET UNITYSDK_OFFSET(0x1369B7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_4_OFFSET UNITYSDK_OFFSET(0x1369B7D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_5_OFFSET UNITYSDK_OFFSET(0x1369B7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1369B7F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterRandom_TypeDefinitionIndex = 66966;

	class LDWaveMonsterRandom : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* indexOutput; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* createMonsterNameDic; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::FlowCanvas::FlowInput* restartInput; // 0xC0
		::MoleMole::Battle::Entity* createEntity; // 0xC8
		::FlowCanvas::FlowOutput* doOutput; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* createList; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterRandomSelectItem*>*>* randomIDInput; // 0xE0
		::FlowCanvas::FlowInput* breakInput; // 0xE8
		::FlowCanvas::FlowOutput* finishOutput; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* saveMapInput; // 0xF8
		::System::String* currMonsterName; // 0x100
		::UnityEngine::Coroutine* coroutine; // 0x108
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* monsterIDTypeInput; // 0x110
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>*>* createInput; // 0x118
		::FlowCanvas::ValueInput_1<::System::String*>* currentSectionName; // 0x120
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0x128
		::System::String* createMonsterName; // 0x130
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteAiInput; // 0x138
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteHudInput; // 0x140
		::FlowCanvas::FlowOutput* output; // 0x148
		::FlowCanvas::ValueInput_1<::System::Boolean>* towardsPlayerInput; // 0x150
		::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* campInput; // 0x158
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityListOutput; // 0x160
		::System::String* errorMsg; // 0x168
		::System::Single startTime; // 0x170
		::System::Boolean isAddToSaveMap; // 0x174
		::System::Boolean waitBreak; // 0x175
		::System::Boolean waittingCreate; // 0x176
		::System::Boolean waittingRestart; // 0x177
		::System::Boolean isStart; // 0x178
		::System::Single waitDuration; // 0x17C
		::System::Int32 createIndex; // 0x180
		::System::Single waitDelta; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_MuteAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_GET_MUTEAI_OFFSET))(this);
		}

		::System::Boolean get_MuteHud()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_GET_MUTEHUD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RESTDATA_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_BEGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_BREAK_OFFSET))(this, f);
		}

		::System::Void ForceBreak(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_FORCEBREAK_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RESTART_OFFSET))(this, f);
		}

		::System::Void DoRestart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_DORESTART_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void PostEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_POSTENTITYREADY_OFFSET))(this, entity);
		}

		::System::String* CheckWarpMonsterName(::System::String* configName, ::System::Int32 createIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_CHECKWARPMONSTERNAME_OFFSET))(this, configName, createIndex);
		}

		::System::Void CreateMonster(::System::Int32 monsterId, ::System::String* spawnPointName, ::MoleMole::Config::CampType camp, ::System::Boolean towardsPlayer, ::System::Int32 aiConfigId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_CREATEMONSTER_OFFSET))(this, monsterId, spawnPointName, camp, towardsPlayer, aiConfigId);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Int32 RandomPick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_RANDOMPICK_OFFSET))(this);
		}

		::System::Void FireFinishEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM_FIREFINISHEVENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__37_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__37_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__37_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__37_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__37_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__37_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__REGISTERPORTS_B__37_5_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
