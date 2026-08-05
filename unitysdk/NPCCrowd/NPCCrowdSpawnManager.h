#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/NPCCrowd/NPCCrowdSpawnManager_CrowdPoolKey.h"
#include "unitysdk/NPCCrowd/NPCCrowdSpawnManager_FarthestDespawnCandidate.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCCrowdSpawnManager_SpawnedNpcInfo; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCSpawnConfigSO; }
namespace NPCCrowd { class NPCSpawnPointRuntime; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_ADDROADCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x12D31E80)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0x12D34E40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODERECYCLESTATE_OFFSET UNITYSDK_OFFSET(0x12D30810)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODEREUSESTATE_OFFSET UNITYSDK_OFFSET(0x12D2FBF0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYNPCLIMITRATIO_OFFSET UNITYSDK_OFFSET(0x12D321A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET UNITYSDK_OFFSET(0x12D342E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET UNITYSDK_OFFSET(0x12D36110)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET UNITYSDK_OFFSET(0x12D34AC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CLEARPOOLONSECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x12D2F0C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x12D33160)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DEBUGSPAWNNPCATPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x12D379A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x12D35AA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_1_OFFSET UNITYSDK_OFFSET(0x12D35BF0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_OFFSET UNITYSDK_OFFSET(0x12D35B90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0x12D37030)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET UNITYSDK_OFFSET(0x12D32330)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_EVICTLEASTRECENTLYUSEDPOOL_OFFSET UNITYSDK_OFFSET(0x12D30B60)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_FORCEDESTROYPOOLEDENTITY_OFFSET UNITYSDK_OFFSET(0x12D300D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x12D34DA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET UNITYSDK_OFFSET(0x12D34C90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINTSBYPATH_OFFSET UNITYSDK_OFFSET(0x12D38D40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D38C30)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET UNITYSDK_OFFSET(0x12D36770)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D35190)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GET_CURRENTCROWDCOUNT_OFFSET UNITYSDK_OFFSET(0x12D32140)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x12D31FC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x12D32990)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISDELAYDESPAWNPATHNODE_OFFSET UNITYSDK_OFFSET(0x12D365D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISPOOLOPTIMIZATIONENABLED_OFFSET UNITYSDK_OFFSET(0x12D2EFC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISREPEATABLEAVATARID_OFFSET UNITYSDK_OFFSET(0x12D2FA90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISVALIDPOOLEDNPC_OFFSET UNITYSDK_OFFSET(0x12D2FB50)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_MERGEPOINTVALIDRESULTS_OFFSET UNITYSDK_OFFSET(0x12D34190)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET UNITYSDK_OFFSET(0x12D36ED0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x12D31530)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12D32CC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET UNITYSDK_OFFSET(0x12D368E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x12D324F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x12D323C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x12D33780)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHDELAYDESPAWNPATHNODECACHE_OFFSET UNITYSDK_OFFSET(0x12D32B10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHPOOLOPTIMIZATIONSWITCH_OFFSET UNITYSDK_OFFSET(0x12D2F010)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D37EE0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERLOD_OFFSET UNITYSDK_OFFSET(0x12D31B20)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERPATHSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D38130)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D38390)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RELEASEPOPULATIONUSAGE_OFFSET UNITYSDK_OFFSET(0x12D31820)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLBYKEY_OFFSET UNITYSDK_OFFSET(0x12D30FD0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x12D30F10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEROADCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x12D31960)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RESETFADESTATE_OFFSET UNITYSDK_OFFSET(0x12D31A90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RESETPATHGRAPHSTATEFORRECYCLE_OFFSET UNITYSDK_OFFSET(0x12D313A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SETABILITYUSINGSTATE_OFFSET UNITYSDK_OFFSET(0x12D31220)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET UNITYSDK_OFFSET(0x12D38AE0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDQUEUEFADEFOROUTRANGE_OFFSET UNITYSDK_OFFSET(0x12D364D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x12D32240)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET UNITYSDK_OFFSET(0x12D372D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x12D35370)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x12D35800)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYACQUIREPOOLEDCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x12D2F6E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET UNITYSDK_OFFSET(0x12D36F20)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYQUEUEFADE_OFFSET UNITYSDK_OFFSET(0x12D363A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYRECYCLETOPOOLLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x12D30460)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x12D36640)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERLOD_OFFSET UNITYSDK_OFFSET(0x12D31700)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERPATHSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D38940)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12D38650)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET UNITYSDK_OFFSET(0x12D33BE0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEGLOBALPERCENTPOINTWEIGHTS_OFFSET UNITYSDK_OFFSET(0x12D346F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET UNITYSDK_OFFSET(0x12D33900)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12D34030)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x12D30E90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D39370)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12D38E20)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x12D393F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12D39480)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x12D39510)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x12D395A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x12D39640)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12D396D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_TypeDefinitionIndex = 48986;

	class NPCCrowdSpawnManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x43330);
		}
		static ::System::String** StaticGet_SpawnConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x43350);
		}
		static ::System::Collections::Generic::IComparer_1<::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate>** StaticGet_s_farthestDespawnCandidateComparer()
		{
			return (::System::Collections::Generic::IComparer_1<::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x43358);
		}
		static ::System::Single* StaticGet_NPCLimitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xFAF0);
		}
		static ::System::Single* StaticGet_GlobalSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xFAF4);
		}
		static ::System::Boolean* StaticGet_DebugSpawnAtPlayerOnInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xFAF8);
		}
		static ::System::Boolean* StaticGet_enableSpawn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xFAF9);
		}
		static ::System::Boolean* StaticGet_SpawnPointNoLimit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xFAFA);
		}
		// static const ::System::String* FadeDitherKey; // 0x0
		// static const ::System::Int32 MAX_NPCCROWD_COUNT = 0xFA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _pooledStateTreeIndexBackup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* _spawnedNpcList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* _spawnedNpcListCache; // 0x28
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* distanceCallback; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* _delayDespawnPathNodeIDSet; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey>* _emptyPoolKeysCache; // 0x40
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimesCache; // 0x50
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* delayFadeIDs; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* validNPCSpawnPoints; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate>* _farthestDespawnCandidates; // 0x68
		::NPCCrowd::NPCSpawnConfigSO* _configSO; // 0x70
		::MoleMole::Config::CharacterFadeDitheringDataV2 ditherData; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimes; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* delayDespawnIDs; // 0xA8
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey, ::System::Single>* _poolKeyLastUsedTime; // 0xB0
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey, ::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>*>* _crowdEntityPool; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* entityID2Handler; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>*>* _pathID2SpawnPoints; // 0xC8
		::System::Single _spawnTimer; // 0xD0
		::Unity::Collections::NativeArray_1<::System::Int32> _spawnedPathNodeIDArray; // 0xD8
		::Unity::Collections::NativeList_1<::System::Int32> spawnPointValidIndices; // 0xE8
		::Unity::Jobs::JobHandle _pointJobHandle; // 0xF8
		::System::Single validPointWeight; // 0x108
		::System::Boolean _isPoolOptimizationEnabled; // 0x10C
		::Unity::Jobs::JobHandle _despawnJobHandle; // 0x110
		::Unity::Collections::NativeArray_1<::System::Int32> spawnPointKey; // 0x120
		::Unity::Collections::NativeArray_1<::System::UInt32> _spawnedNpcArray; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsPoolOptimizationEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISPOOLOPTIMIZATIONENABLED_OFFSET))(this);
		}

		::System::Void RefreshPoolOptimizationSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHPOOLOPTIMIZATIONSWITCH_OFFSET))(this);
		}

		::System::Boolean TryAcquirePooledCrowdEntity(::System::Int32 tagID, ::System::Int32 avatarID, ::Class_3_F2DAD7F45F518868*& npcComp, ::System::Int32 populationID, ::System::Boolean onlyRepeatable)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_3_F2DAD7F45F518868*&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYACQUIREPOOLEDCROWDENTITY_OFFSET))(this, tagID, avatarID, npcComp, populationID, onlyRepeatable);
		}

		::System::Boolean TryRecycleToPoolLightMode(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean onlyRepeatable)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYRECYCLETOPOOLLIGHTMODE_OFFSET))(this, npcComp, onlyRepeatable);
		}

		::System::Void ClearPoolOnSectionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CLEARPOOLONSECTIONCHANGE_OFFSET))(this);
		}

		::System::Void RemoveEntityFromPoolOnEntityRemove(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLONENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Boolean RemoveEntityFromPoolByKey(::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey key, ::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLBYKEY_OFFSET))(this, key, entityID);
		}

		::System::Void EvictLeastRecentlyUsedPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_EVICTLEASTRECENTLYUSEDPOOL_OFFSET))(this);
		}

		static ::System::Boolean IsRepeatableAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISREPEATABLEAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean IsValidPooledNpc(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISVALIDPOOLEDNPC_OFFSET))(npcComp);
		}

		::System::Boolean ApplyLightModeRecycleState(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODERECYCLESTATE_OFFSET))(this, npcComp);
		}

		::System::Boolean ApplyLightModeReuseState(::Class_3_F2DAD7F45F518868* npcComp, ::System::Int32 populationID, ::System::Int32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODEREUSESTATE_OFFSET))(this, npcComp, populationID, avatarID);
		}

		::System::Boolean SetAbilityUsingState(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean isUsing)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SETABILITYUSINGSTATE_OFFSET))(this, npcComp, isUsing);
		}

		static ::System::Void ReleasePopulationUsage(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RELEASEPOPULATIONUSAGE_OFFSET))(npcComp);
		}

		static ::System::Void ResetFadeState(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RESETFADESTATE_OFFSET))(npcComp);
		}

		static ::System::Void ResetPathGraphStateForRecycle(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RESETPATHGRAPHSTATEFORRECYCLE_OFFSET))(npcComp);
		}

		static ::System::Void UnregisterLod(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERLOD_OFFSET))(npcComp);
		}

		static ::System::Void RegisterLod(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERLOD_OFFSET))(npcComp);
		}

		static ::System::Void RemoveRoadCrowdEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEROADCROWDENTITY_OFFSET))(entity);
		}

		static ::System::Void AddRoadCrowdEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ADDROADCROWDENTITY_OFFSET))(entity);
		}

		::System::Void ForceDestroyPooledEntity(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_FORCEDESTROYPOOLEDENTITY_OFFSET))(this, npcComp);
		}

		static ::NPCCrowd::NPCCrowdSpawnManager* Get()
		{
			return ((::NPCCrowd::NPCCrowdSpawnManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET))();
		}

		::System::Int32 get_CurrentCrowdCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GET_CURRENTCROWDCOUNT_OFFSET))(this);
		}

		static ::System::Int32 ApplyNPCLimitRatio(::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYNPCLIMITRATIO_OFFSET))(count);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EnableSpawn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET))(this, enable);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean GetSpawnInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET))(this, entityID, info);
		}

		::System::Int32 GetSpawnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void AddSpawnedNPC(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET))(this, entityID);
		}

		::System::Void CheckSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET))(this);
		}

		::System::Void CheckDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET))(this, deltaTime);
		}

		::System::Void DelayDespawnEntity(::System::UInt32 entityID, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET))(this, entityID, fade);
		}

		::System::Void DespawnFarthest(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_OFFSET))(this, count);
		}

		::System::Void DespawnFarthest_1(::System::Int32 count, ::System::Int32& culledCount, ::System::Single& farthestDist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_1_OFFSET))(this, count, culledCount, farthestDist);
		}

		::System::Void CheckSpawnInfoDespawn(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info, ::System::Single deltaTime, ::System::Single playerPosY, ::System::Int32 currentPathNodeID)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET))(this, info, deltaTime, playerPosY, currentPathNodeID);
		}

		::System::Void TryQueueFade(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYQUEUEFADE_OFFSET))(this, info);
		}

		::System::Boolean ShouldQueueFadeForOutRange(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info, ::System::Int32 currentPathNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDQUEUEFADEFOROUTRANGE_OFFSET))(this, info, currentPathNodeID);
		}

		::System::Void StartFade(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* spawnedNpcInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET))(this, spawnedNpcInfo, deltaTime);
		}

		::System::Boolean TrySpawnNPC(::NPCCrowd::NPCSpawnPointRuntime* pointRuntime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYSPAWNNPC_OFFSET))(this, pointRuntime);
		}

		::System::Boolean SpawnNPC(::NPCCrowd::NPCSpawnPointRuntime* spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET))(this, spawnPoint);
		}

		::System::Void OnPathLimitChanged(::System::Int32 pathID, ::System::Int32 limit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET))(this, pathID, limit);
		}

		::System::Void OnCrowdEntityAdd(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET))(this, npcCmp);
		}

		::System::Void OnCrowdEntityRemove(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Boolean TryGetSpawnNPCInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& spawnedNpcInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET))(this, entityID, spawnedNpcInfo);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Void SpawnInitNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET))(this);
		}

		::System::Void DebugSpawnNPCAtPlayerPosition(::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DEBUGSPAWNNPCATPLAYERPOSITION_OFFSET))(this, playerPos);
		}

		::NPCCrowd::SpawnRangeConfig* GetSpawnRangeConfig(::System::Int32 graphID)
		{
			return ((::NPCCrowd::SpawnRangeConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET))(this, graphID);
		}

		::System::Void RefreshDelayDespawnPathNodeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHDELAYDESPAWNPATHNODECACHE_OFFSET))(this);
		}

		::System::Boolean IsDelayDespawnPathNode(::System::Int32 pathNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISDELAYDESPAWNPATHNODE_OFFSET))(this, pathNodeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET))(this);
		}

		::System::Void RegisterAttractorSpawnPoint(::NPCCrowd::AI::SpawnConfigForAttractor* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void RegisterSpawnPoint(::NPCCrowd::AI::SpawnPoint* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPoint*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void UnRegisterSpawnPoint(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET))(this, handler);
		}

		::System::Void SetSpawnPointBlocked(::System::Int32 handler, ::System::Boolean blocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET))(this, handler, blocked);
		}

		::System::Boolean GetSpawnPoint(::System::Int32 handler, ::NPCCrowd::NPCSpawnPointRuntime*& spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET))(this, handler, spawnPoint);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* GetSpawnPointsByPath(::System::Int32 pathID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINTSBYPATH_OFFSET))(this, pathID);
		}

		::System::Void RegisterPathSpawnPoint(::NPCCrowd::NPCSpawnPointRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERPATHSPAWNPOINT_OFFSET))(this, runtime);
		}

		::System::Void UnRegisterPathSpawnPoint(::NPCCrowd::NPCSpawnPointRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERPATHSPAWNPOINT_OFFSET))(this, runtime);
		}

		::System::Void UpdatePointValid(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET))(this, deltaTime);
		}

		::System::Void MergePointValidResults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_MERGEPOINTVALIDRESULTS_OFFSET))(this);
		}

		::System::Void UpdateGlobalPercentPointWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEGLOBALPERCENTPOINTWEIGHTS_OFFSET))(this);
		}

		::System::Void UpdateDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::NPCSpawnPointRuntime* GetValidSpawnPoint()
		{
			return ((::NPCCrowd::NPCSpawnPointRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
