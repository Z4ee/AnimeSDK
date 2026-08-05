#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/AttractorCommonConfig.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_NearestData.h"
#include "unitysdk/NPCCrowd/Ability/NPCAttractorInteractState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_2BC2D5DA764F8F39_6;
class Class_3_F2DAD7F45F518868;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::AI { class AllAttractorsConfigAssetSO; }
namespace NPCCrowd::AI { class AttractorConfigAssetSO; }
namespace NPCCrowd::AI { class AttractorInstance; }
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace NPCCrowd::AI { class AttractorTemplateAssetSO; }
namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORMANAGER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x951A930)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLAIMATTRACTORSLOT_OFFSET UNITYSDK_OFFSET(0x951AFA0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLEARATTRACTED_OFFSET UNITYSDK_OFFSET(0x951B6F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x9514EF0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_1_OFFSET UNITYSDK_OFFSET(0x9519070)
#define NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_OFFSET UNITYSDK_OFFSET(0x9518F50)
#define NPCCROWD_AI_ATTRACTORMANAGER_DEBUGSETALLATTRACTORCONDITIONIGNORE_OFFSET UNITYSDK_OFFSET(0x951B980)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHALLCONFLICT_OFFSET UNITYSDK_OFFSET(0x9517E20)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHSERVERATTRACTORCONFLICT_OFFSET UNITYSDK_OFFSET(0x95180F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYSETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x951AF30)
#define NPCCROWD_AI_ATTRACTORMANAGER_DISABLEENTITYATTRACT_OFFSET UNITYSDK_OFFSET(0x9518B90)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCEATTRACTORSPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x951B3B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_1_OFFSET UNITYSDK_OFFSET(0x951B0F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_OFFSET UNITYSDK_OFFSET(0x9514890)
#define NPCCROWD_AI_ATTRACTORMANAGER_GETATTRACTORRUNTIME_OFFSET UNITYSDK_OFFSET(0x9514710)
#define NPCCROWD_AI_ATTRACTORMANAGER_GETINSTANCESECTIONID_OFFSET UNITYSDK_OFFSET(0x9514450)
#define NPCCROWD_AI_ATTRACTORMANAGER_GET_NEEDREFRESHCONFLICT_OFFSET UNITYSDK_OFFSET(0x9514050)
#define NPCCROWD_AI_ATTRACTORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x9514060)
#define NPCCROWD_AI_ATTRACTORMANAGER_HANDLEMAINCITYOBJECTAREA_OFFSET UNITYSDK_OFFSET(0x951B790)
#define NPCCROWD_AI_ATTRACTORMANAGER_HANDLESERVERDATA_OFFSET UNITYSDK_OFFSET(0x95144B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITHANDLECONFLICT_OFFSET UNITYSDK_OFFSET(0x9516550)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITLINANDCLUSTER_OFFSET UNITYSDK_OFFSET(0x9515CC0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITNEARESTDATA_OFFSET UNITYSDK_OFFSET(0x9516E60)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x9515770)
#define NPCCROWD_AI_ATTRACTORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9514180)
#define NPCCROWD_AI_ATTRACTORMANAGER_LOADCURSECTIONDATA_OFFSET UNITYSDK_OFFSET(0x95153B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONATTRACTORSPAWNEDENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x9519D10)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9514B00)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0x951B550)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATABIGSCENE_OFFSET UNITYSDK_OFFSET(0x9514C10)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATA_OFFSET UNITYSDK_OFFSET(0x95176F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONSETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x951AB10)
#define NPCCROWD_AI_ATTRACTORMANAGER_POSTREFRESHDATABIGSCENE_OFFSET UNITYSDK_OFFSET(0x9516E10)
#define NPCCROWD_AI_ATTRACTORMANAGER_REFRESHALLCONFLICT_OFFSET UNITYSDK_OFFSET(0x9517DD0)
#define NPCCROWD_AI_ATTRACTORMANAGER_REFRESHSERVERATTRACTORCONFLICT_OFFSET UNITYSDK_OFFSET(0x9514820)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x95143C0)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_1_OFFSET UNITYSDK_OFFSET(0x951A4F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_2_OFFSET UNITYSDK_OFFSET(0x9517970)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_OFFSET UNITYSDK_OFFSET(0x951A300)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x9516420)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORINITENABLE_OFFSET UNITYSDK_OFFSET(0x951AE00)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYBEATTRACTED_OFFSET UNITYSDK_OFFSET(0x951B2B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9518D60)
#define NPCCROWD_AI_ATTRACTORMANAGER_SPAWNDEFAULTNPC_OFFSET UNITYSDK_OFFSET(0x9517490)
#define NPCCROWD_AI_ATTRACTORMANAGER_UNREGISTERATTRACTOR_OFFSET UNITYSDK_OFFSET(0x9519FB0)
#define NPCCROWD_AI_ATTRACTORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x951C180)
#define NPCCROWD_AI_ATTRACTORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x951BB60)
#define NPCCROWD_AI_ATTRACTORMANAGER__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_2_OFFSET UNITYSDK_OFFSET(0x951C250)
#define NPCCROWD_AI_ATTRACTORMANAGER__LOADCURSECTIONDATA_B__36_0_OFFSET UNITYSDK_OFFSET(0x951C1D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorManager_TypeDefinitionIndex = 61924;

	class AttractorManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AttractorTemplateConfigAssetSOPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager_TypeDefinitionIndex)->GetStaticField(0x51100);
		}
		static ::System::String** StaticGet_AttractorConfigAssetSOPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager_TypeDefinitionIndex)->GetStaticField(0x51108);
		}
		::System::Collections::Generic::List_1<::System::Int32>* serverConflictResult; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* entityBeAttracted; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorRuntime*>* attractorRuntimes; // 0x20
		::Foundation::AssetRequestHandle _baseHandle; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Int32, ::NPCCrowd::AI::AttractorRuntime*>>* entityBeAttractedSpawn; // 0x48
		::Foundation::AssetRequestHandle _templateHandle; // 0x50
		::NPCCrowd::AI::AttractorConfigAssetSO* _attractorConfig; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* debugIgnoreConditionList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorTemplate*>* attractorConfigs; // 0x80
		::Foundation::AssetRequestHandle _configHandle; // 0x88
		::NPCCrowd::AI::AllAttractorsConfigAssetSO* _baseConfig; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* delayEnableDict; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* curMainCityObjectAreaList; // 0xB8
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>* curInstances; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData>* attractorIns2NearestPathData; // 0xC8
		::NPCCrowd::AI::AttractorTemplateAssetSO* _templateConfig; // 0xD0
		::System::Collections::Generic::List_1<::System::Int32>* defaultMainAttractorHandler; // 0xD8
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0xE0
		::System::Collections::Generic::List_1<::System::Int32>* attractorHandler; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* linkValidDict; // 0xF0
		::System::Collections::Generic::List_1<::System::Int32>* serverAttractorHandlers; // 0xF8
		::NPCCrowd::AI::AttractorCommonConfig CommonConfig; // 0x100
		::System::Boolean delayRefreshServerConflict; // 0x10C
		::System::Boolean delayRefreshConflict; // 0x10D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_needRefreshConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GET_NEEDREFRESHCONFLICT_OFFSET))(this);
		}

		static ::NPCCrowd::AI::AttractorManager* Get()
		{
			return ((::NPCCrowd::AI::AttractorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Int32 GetInstanceSectionID(::System::Int32 instanceID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GETINSTANCESECTIONID_OFFSET))(instanceID);
		}

		static ::System::Void HandleServerData(::Class_3_2BC2D5DA764F8F39_6* attractorData, ::System::Boolean handleTag)
		{
			return ((::System::Void(*)(::Class_3_2BC2D5DA764F8F39_6*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_HANDLESERVERDATA_OFFSET))(attractorData, handleTag);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRefreshDataBigScene(::System::Int32 sceneID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATABIGSCENE_OFFSET))(this, sceneID, enable);
		}

		::System::Void PostRefreshDataBigScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_POSTREFRESHDATABIGSCENE_OFFSET))(this);
		}

		::System::Void OnRefreshData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATA_OFFSET))(this, sectionID);
		}

		::System::Void LoadCurSectionData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_LOADCURSECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Void InitRuntimeData(::System::Collections::Generic::List_1<::System::Int32>* allIDs, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* id2Handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITRUNTIMEDATA_OFFSET))(this, allIDs, id2Handler);
		}

		::System::Void InitNearestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITNEARESTDATA_OFFSET))(this);
		}

		::System::Void InitLinAndCluster(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITLINANDCLUSTER_OFFSET))(this, sectionID);
		}

		::System::Void InitHandleConflict(::System::Int32 sectionID, ::System::Collections::Generic::List_1<::System::Int32>* allIDs, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* id2Handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITHANDLECONFLICT_OFFSET))(this, sectionID, allIDs, id2Handler);
		}

		::System::Void SpawnDefaultNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SPAWNDEFAULTNPC_OFFSET))(this);
		}

		::System::Void RefreshAllConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REFRESHALLCONFLICT_OFFSET))(this);
		}

		::System::Void DelayRefreshAllConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHALLCONFLICT_OFFSET))(this);
		}

		::System::Void RefreshServerAttractorConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REFRESHSERVERATTRACTORCONFLICT_OFFSET))(this);
		}

		::System::Void DelayRefreshServerAttractorConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHSERVERATTRACTORCONFLICT_OFFSET))(this);
		}

		static ::System::Void DisableEntityAttract(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DISABLEENTITYATTRACT_OFFSET))(entity);
		}

		static ::System::Void SetEntityTransform(::MoleMole::Battle::Entity* entity, ::NPCCrowd::AI::AttractorRuntime* attractorInstance)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYTRANSFORM_OFFSET))(entity, attractorInstance);
		}

		::System::Void CreateCrowdEntityWithAttractor(::System::Int32 attractorHandler, ::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_OFFSET))(this, attractorHandler, npcComp);
		}

		::System::Void CreateCrowdEntityWithAttractor_1(::NPCCrowd::AI::AttractorRuntime* attractorRuntime, ::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_1_OFFSET))(this, attractorRuntime, npcComp);
		}

		::System::Void OnAttractorSpawnedEntityLoaded(::MoleMole::Battle::Entity* entity, ::System::Int32 attractorHandler, ::NPCCrowd::AI::AttractorRuntime* attractorInstance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONATTRACTORSPAWNEDENTITYLOADED_OFFSET))(this, entity, attractorHandler, attractorInstance);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLEARDATA_OFFSET))(this);
		}

		::System::Void RegisterAttractorConfig(::NPCCrowd::AI::AttractorTemplate* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorTemplate*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTORCONFIG_OFFSET))(this, config);
		}

		::System::Int32 RegisterAttractor(::System::Int32 attractorTemplateID, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_OFFSET))(this, attractorTemplateID, attractorPosition, attractorRotation);
		}

		::System::Int32 RegisterAttractor_1(::NPCCrowd::AI::AttractorDefinition attractorConfig, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation, ::System::Int32 attractorHandler)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorDefinition, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_1_OFFSET))(this, attractorConfig, attractorPosition, attractorRotation, attractorHandler);
		}

		::System::Int32 RegisterAttractor_2(::NPCCrowd::AI::AttractorTemplate* template_, ::NPCCrowd::AI::AttractorDefinition attractorConfig, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation, ::System::Int32 attractorHandler)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorTemplate*, ::NPCCrowd::AI::AttractorDefinition, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_2_OFFSET))(this, template_, attractorConfig, attractorPosition, attractorRotation, attractorHandler);
		}

		static ::System::Boolean CheckCondition(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* poolConditions)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CHECKCONDITION_OFFSET))(poolConditions);
		}

		::System::Boolean UnregisterAttractor(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_UNREGISTERATTRACTOR_OFFSET))(this, handler);
		}

		::System::Void SetAttractorEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORENABLE_OFFSET))(this, handler, enable);
		}

		::System::Void SetAttractorInitEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORINITENABLE_OFFSET))(this, handler, enable);
		}

		::System::Void OnSetAttractorEnable(::NPCCrowd::AI::AttractorRuntime* attractor)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONSETATTRACTORENABLE_OFFSET))(this, attractor);
		}

		::System::Void DelaySetAttractorEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYSETATTRACTORENABLE_OFFSET))(this, handler, enable);
		}

		::System::Boolean ClaimAttractorSlot(::System::Int32 handler, ::System::UInt32 entityID, ::System::Boolean force)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLAIMATTRACTORSLOT_OFFSET))(this, handler, entityID, force);
		}

		::System::Boolean GetAttractorRuntime(::System::Int32 handler, ::NPCCrowd::AI::AttractorRuntime*& attractor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AttractorRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GETATTRACTORRUNTIME_OFFSET))(this, handler, attractor);
		}

		::System::Void ForceSetAttractEntity(::System::Int32 handler, ::MoleMole::Battle::Entity* entity, ::System::Boolean serverControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_OFFSET))(this, handler, entity, serverControl);
		}

		::System::Boolean ForceSetAttractEntity_1(::System::Int32 handler, ::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorFrag, ::NPCCrowd::Ability::NPCAttractorInteractState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::NPCAttractorInteractState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_1_OFFSET))(this, handler, entityID, attractorFrag, state);
		}

		::System::Boolean ForceAttractorSpawnEntity(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCEATTRACTORSPAWNENTITY_OFFSET))(this, handler);
		}

		::System::Void OnEntityDestroy(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONENTITYDESTROY_OFFSET))(this, ability);
		}

		::System::Void SetEntityBeAttracted(::System::UInt32 entityID, ::System::Int32 attractorHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYBEATTRACTED_OFFSET))(this, entityID, attractorHandler);
		}

		::System::Void ClearAttracted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLEARATTRACTED_OFFSET))(this);
		}

		::System::Void HandleMainCityObjectArea(::System::String* key, ::System::Boolean register_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_HANDLEMAINCITYOBJECTAREA_OFFSET))(this, key, register_);
		}

		::System::Void DebugSetAllAttractorConditionIgnore(::System::Boolean ignore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DEBUGSETALLATTRACTORCONDITIONIGNORE_OFFSET))(this, ignore);
		}

		::System::Int32 _LoadCurSectionData_b__36_0(::NPCCrowd::AI::AttractorInstance* a, ::NPCCrowd::AI::AttractorInstance* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorInstance*, ::NPCCrowd::AI::AttractorInstance*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__LOADCURSECTIONDATA_B__36_0_OFFSET))(this, a, b);
		}

		::System::Int32 _DelayRefreshServerAttractorConflict_b__45_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_2_OFFSET))(this, a, b);
		}
	};
}
