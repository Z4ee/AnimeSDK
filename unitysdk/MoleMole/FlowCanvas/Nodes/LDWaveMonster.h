#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster_InputOutputOption.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster___c__DisplayClass76_0.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster___c__DisplayClass76_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_3217798F52249A87.h"
#include "unitysdk/Struct_2_820267F94C5D0AA4.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x1B1A93C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ADDENTITYTOMAP_OFFSET UNITYSDK_OFFSET(0x1B1A9440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1B1A8600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_BREAK_OFFSET UNITYSDK_OFFSET(0x1B1A8D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CHECKWARPMONSTERNAME_OFFSET UNITYSDK_OFFSET(0x1B1A9ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_COLLECTPRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1B1A7080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CREATEMONSTER_1_OFFSET UNITYSDK_OFFSET(0x1B1AA6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1B1AC070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B1A7C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_DORESTART_OFFSET UNITYSDK_OFFSET(0x1B1A8FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_FIREFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x1B1A9070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_FORCEBREAK_OFFSET UNITYSDK_OFFSET(0x1B1A8DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCAMPTYPE_OFFSET UNITYSDK_OFFSET(0x1B1AA3B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B1A82B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x1B1A8490)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x1B1AD9F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B1A72D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GET_MUTEAI_OFFSET UNITYSDK_OFFSET(0x1B1A5190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GET_MUTEHUD_OFFSET UNITYSDK_OFFSET(0x1B1A5250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B1A9990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISPRELOADDONE_OFFSET UNITYSDK_OFFSET(0x1B1A8260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x1B1A58C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISSHOWELE_OFFSET UNITYSDK_OFFSET(0x1B1A5870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISTRAPMONSTER_OFFSET UNITYSDK_OFFSET(0x1B1ABFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_MULTIPLAYERINTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B1A98E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B1AE3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B1ADB00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1A88F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B1AE110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B1ADD20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_POSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B1ACEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_PRELOADMONSTERASSETS_OFFSET UNITYSDK_OFFSET(0x1B1A74D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B1A5310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1B1A5760)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RESTART_OFFSET UNITYSDK_OFFSET(0x1B1A9280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RUNNINGRIGIDBODYORIGINALCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B1A5900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_SETMONSTERENTITYACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1A5F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_SINGLEINTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B1A9830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1B1A9C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_UPDATERUNNINGRIGIDBODYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B1A5AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CHECKCOULDCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1B1AD870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CREATEMONSTER_G____CREATEMONSTER_76_0_OFFSET UNITYSDK_OFFSET(0x1B1AC260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AE3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_0_OFFSET UNITYSDK_OFFSET(0x1B1AE500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_1_OFFSET UNITYSDK_OFFSET(0x1B1AE540)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_2_OFFSET UNITYSDK_OFFSET(0x1B1AE610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_3_OFFSET UNITYSDK_OFFSET(0x1B1AE640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_4_OFFSET UNITYSDK_OFFSET(0x1B1AE650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_5_OFFSET UNITYSDK_OFFSET(0x1B1AE660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B1AE670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ISPRELOADDONE_OFFSET UNITYSDK_OFFSET(0x1B1AE680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x1B1AE690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B1AE6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B1AE6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B1AE6C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster_TypeDefinitionIndex = 83841;

	class LDWaveMonster : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* campInput; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* preloadEntityList; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteHudInput; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::MonsterAlertInitParams>* monsterAlertInitParamsInput; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityListOutput; // 0xC8
		::MoleMole::Battle::Entity* createEntity; // 0xD0
		::FlowCanvas::FlowInput* restartInput; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::Int32>* indexOutput; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* currentSectionName; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Boolean>* towardsPlayerInput; // 0xF0
		::FlowCanvas::FlowOutput* finishOutput; // 0xF8
		::FlowCanvas::FlowInput* breakInput; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* createMonsterNameDic; // 0x108
		::UnityEngine::Coroutine* coroutine; // 0x110
		::FlowCanvas::FlowOutput* doOutput; // 0x118
		::System::String* createMonsterName; // 0x120
		::FlowCanvas::ValueInput_1<::System::Boolean>* isServerSync; // 0x128
		::FlowCanvas::FlowInput* input; // 0x130
		::System::String* errorMsg; // 0x138
		::FlowCanvas::FlowOutput* output; // 0x140
		::System::String* currMonsterName; // 0x148
		::FlowCanvas::ValueInput_1<::UnityEngine::RigidbodyConstraints>* RunningOverrideRbConstraints; // 0x150
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* saveMapInput; // 0x158
		::FlowCanvas::ValueInput_1<::System::Boolean>* overrideCamp; // 0x160
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteAiInput; // 0x168
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0x170
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* createList; // 0x178
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* monsterIDInput; // 0x180
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>*>* createInput; // 0x188
		::System::Boolean isAddToSaveMap; // 0x190
		::System::Boolean waittingRestart; // 0x191
		::System::Single waitDuration; // 0x194
		::System::Boolean inPreload; // 0x198
		::System::Boolean highPreloadPriority; // 0x199
		::System::Boolean waittingCreate; // 0x19A
		::System::Boolean isTrapCreateNode; // 0x19B
		::System::Single startTime; // 0x19C
		::System::Boolean isMonsterCreateNode; // 0x1A0
		::System::Boolean waitBreak; // 0x1A1
		::System::Boolean isStart; // 0x1A2
		::System::Boolean needPreload; // 0x1A3
		::System::Single waitDelta; // 0x1A4
		::System::Int32 createIndex; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_MuteAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GET_MUTEAI_OFFSET))(this);
		}

		::System::Boolean get_MuteHud()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GET_MUTEHUD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsShowEle(::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption checkOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISSHOWELE_OFFSET))(this, checkOpt);
		}

		::System::Boolean IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISSERVERCARE_OFFSET))(this);
		}

		::UnityEngine::RigidbodyConstraints RunningRigidbodyOriginalConstraints(::Class_3_C93CC3D2C2AC4067* modelComponent)
		{
			return ((::UnityEngine::RigidbodyConstraints(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RUNNINGRIGIDBODYORIGINALCONSTRAINTS_OFFSET))(this, modelComponent);
		}

		::System::Void UpdateRunningRigidbodyConstraints(::Class_3_C93CC3D2C2AC4067* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_UPDATERUNNINGRIGIDBODYCONSTRAINTS_OFFSET))(this, modelComponent);
		}

		::System::Void SetMonsterEntityActive(::MoleMole::Battle::Entity* monster, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_SETMONSTERENTITYACTIVE_OFFSET))(this, monster, active);
		}

		::System::Void CollectPreloadAssets(::System::Collections::Generic::List_1<::System::Int32>* monsterIdList, ::System::Collections::Generic::List_1<::System::Int32>* sceneObjectIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_COLLECTPRELOADASSETS_OFFSET))(this, monsterIdList, sceneObjectIdList);
		}

		::System::Void PreloadMonsterAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_PRELOADMONSTERASSETS_OFFSET))(this);
		}

		::MoleMole::Config::EntityType GetEntityType(::System::Int32 entityID)
		{
			return ((::MoleMole::Config::EntityType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETENTITYTYPE_OFFSET))(this, entityID);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_DOPRELOAD_OFFSET))(this);
		}

		::System::Boolean IsPreloadDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISPRELOADDONE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RESETDATA_OFFSET))(this);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_BREAK_OFFSET))(this, f);
		}

		::System::Void ForceBreak(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_FORCEBREAK_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_RESTART_OFFSET))(this, f);
		}

		::System::Void DoRestart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_DORESTART_OFFSET))(this, f);
		}

		::System::Void ActivePreloadMonster(::MoleMole::Battle::Entity* entity, ::System::Int32 createIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ACTIVEPRELOADMONSTER_OFFSET))(this, entity, createIndex);
		}

		::System::Collections::IEnumerator* SingleInternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_SINGLEINTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* MultiplayerInternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_MULTIPLAYERINTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::MoleMole::Config::CampType GetCampType(::System::Int32 templateID)
		{
			return ((::MoleMole::Config::CampType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCAMPTYPE_OFFSET))(this, templateID);
		}

		::System::Boolean IsTrapMonster(::System::Int32 monsterId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ISTRAPMONSTER_OFFSET))(this, monsterId);
		}

		::System::Void CreateMonster(::System::Int32 monsterId, ::System::String* spawnPointName, ::UnityEngine::Vector3 spawnPointOffset, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* tags, ::MoleMole::Config::CampType camp, ::System::Boolean towardsPlayer, ::System::Int32 monsterAIID, ::System::Boolean forceBaseID, ::System::Boolean isPreload, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* initAnimatorParams, ::System::Collections::Generic::List_1<::System::Int32>* initAbilityList, ::System::Int32 monsterMappingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CREATEMONSTER_OFFSET))(this, monsterId, spawnPointName, spawnPointOffset, tags, camp, towardsPlayer, monsterAIID, forceBaseID, isPreload, initAnimatorParams, initAbilityList, monsterMappingID);
		}

		::System::Void CreateMonster_1(::Struct_2_820267F94C5D0AA4 config, ::Struct_2_3217798F52249A87 postReadyConfig, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_820267F94C5D0AA4, ::Struct_2_3217798F52249A87, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CREATEMONSTER_1_OFFSET))(this, config, postReadyConfig, isPreload);
		}

		::System::Boolean _CheckCouldCreateMonster(::System::UInt32 monsterID, ::System::UInt32 createIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CHECKCOULDCREATEMONSTER_OFFSET))(this, monsterID, createIndex);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void PostEntityReady(::MoleMole::Battle::Entity* entity, ::Struct_2_3217798F52249A87 postReadyConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_3217798F52249A87))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_POSTENTITYREADY_OFFSET))(this, entity, postReadyConfig);
		}

		::System::Void AddEntityToMap(::MoleMole::Battle::Entity* entity, ::System::String* monsterName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ADDENTITYTOMAP_OFFSET))(this, entity, monsterName);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity, ::Struct_2_3217798F52249A87 postReadyConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_3217798F52249A87))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADY_OFFSET))(this, entity, postReadyConfig);
		}

		::System::String* CheckWarpMonsterName(::System::String* configName, ::System::Int32 createIndex, ::System::String* postfix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_CHECKWARPMONSTERNAME_OFFSET))(this, configName, createIndex, postfix);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONRESET_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::System::Void FireFinishEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_FIREFINISHEVENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__47_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__47_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__47_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__47_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__47_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__47_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__REGISTERPORTS_B__47_5_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _CreateMonster_g____CreateMonster_76_0(::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass76_0& a1, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass76_1& a2)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass76_0&, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass76_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__CREATEMONSTER_G____CREATEMONSTER_76_0_OFFSET))(this, a1, a2);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_DOPRELOAD_OFFSET))(this);
		}

		::System::Boolean __base_IsPreloadDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ISPRELOADDONE_OFFSET))(this);
		}

		::System::Boolean __base_IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ISSERVERCARE_OFFSET))(this);
		}

		::System::Void __base_OnCreate(::NodeCanvas::Framework::Graph* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___BASE_ONRESET_OFFSET))(this);
		}
	};
}
