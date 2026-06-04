#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET UNITYSDK_OFFSET(0xCD9B720)
#define RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET UNITYSDK_OFFSET(0xCD9BAB0)
#define RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0xCD9CA90)
#define RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCD98630)
#define RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET UNITYSDK_OFFSET(0xCD9CA00)
#define RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD965C0)
#define RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCD9B310)
#define RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCD9B3A0)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET UNITYSDK_OFFSET(0xCD98F80)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCD98EF0)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCD98E60)
#define RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET UNITYSDK_OFFSET(0xCD9C980)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xCD9B680)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xCD9B6D0)
#define RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCD97F80)
#define RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCD97E60)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCD97D60)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCD98C70)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET UNITYSDK_OFFSET(0xCD98BD0)
#define RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCD97F20)
#define RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCD97DF0)
#define RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCD97FE0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xCD9BE00)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BDA0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xCD9BE20)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BE40)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BDC0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xCD9BDE0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BD80)
#define RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BCE0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD00)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BCB0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD60)
#define RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET UNITYSDK_OFFSET(0xCD9BCD0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD40)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD20)
#define RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xCD999A0)
#define RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xCD99390)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET UNITYSDK_OFFSET(0xCD9BF70)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET UNITYSDK_OFFSET(0xCD9C730)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xCD9CE90)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xCD9CCD0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xCD9CB40)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET UNITYSDK_OFFSET(0xCD9C880)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0xCD920A0)
#define RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET UNITYSDK_OFFSET(0xCD9A6D0)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCD99190)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCD99030)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xCD98070)
#define RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0xCD9B930)
#define RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET UNITYSDK_OFFSET(0xCD967E0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xCD9BE10)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BDB0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xCD9BE30)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BE50)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BDD0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xCD9BDF0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BD90)
#define RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BCF0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD10)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xCD9BCC0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD70)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD50)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xCD9BD30)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCD99290)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCD990D0)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xCD98870)
#define RPG_GAMECORE_ENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD9BE60)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xCD9D260)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xCD9D120)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xCD9D050)
#define RPG_GAMECORE_ENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD96200)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET UNITYSDK_OFFSET(0xCD9A030)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET UNITYSDK_OFFSET(0xCD99C00)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET UNITYSDK_OFFSET(0xCD99B80)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET UNITYSDK_OFFSET(0xCD9A2D0)
#define RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET UNITYSDK_OFFSET(0xCD9BB80)
#define RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET UNITYSDK_OFFSET(0xCD9C1C0)
#define RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xCD9AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManager_TypeDefinitionIndex = 52807;

	class EntityManager : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasAnyComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x4D560);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__CheckEntityInTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x4D568);
		}
		static ::System::String** StaticGet_LocalPlayerUniqueName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x4D570);
		}
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x4D578);
		}
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandleDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x4D580);
		}
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>*>* _PauseEntityTimeSlowIndexDic; // 0x10
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _AllTeamEntity; // 0x18
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutSummonerEntity_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutEntity_k__BackingField; // 0x28
		::UnityEngine::GameObject* _GroupGORoot_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _DataViewUISelectSummonerOfUncreatedServant_k__BackingField; // 0x38
		::UnityEngine::GameObject* _PlayerGORoot_k__BackingField; // 0x40
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType>* _ProcessEntityTeamChangeDelg; // 0x48
		::RPG::GameCore::GameEntity* _LevelEntity_k__BackingField; // 0x50
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*>* _GroupEntityIDToEntityDict; // 0x58
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _SnapshotEntityMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _ServerEntityIDToEntityDict; // 0x70
		::RPG::GameCore::GameEntity* _DataViewUIWillSelectEntity_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* _EntityUniqueNameDict; // 0x80
		::RPG::GameCore::GameEntityList* _DataViewUISelectFadeInFollowEntities_k__BackingField; // 0x88
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _AllTeamEntityList; // 0x90
		::UnityEngine::GameObject* _LittleGameGORoot_k__BackingField; // 0x98
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeInEntity_k__BackingField; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* _UniqueNamedEntityDictionary; // 0xA8
		::RPG::GameCore::GameEntity* _DataViewUILeaveSummonerOfUncreatedServant_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _AllEntityDictionary; // 0xB8
		::UnityEngine::GameObject* _EntityGORoot_k__BackingField; // 0xC0
		::UnityEngine::GameObject* _PerformanceGORoot_k__BackingField; // 0xC8
		::System::Boolean _UseUniqueSnapshot; // 0xD0

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupBuildInEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetEnemyTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetUniqueSnapshotByOwnerRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void RegisterUniqueNameEntity(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearEntityUniqueName(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void UnregisterUniqueNameEntity(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetEntityUniqueNames(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetEntityByUniqueName(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FindEntityByServerEntityID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FindEntityByGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* FindEntitiesByGroupID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void RegisterServerEntityID(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterServerEntityID(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseAllEntityByTeamType(::RPG::GameCore::TeamType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCreateNewEntityProcessGlobalTimescaleLock(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetEntitySummoner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET))(this, a1);
		}

		::System::Void _GetEntityServant(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET))(this, a1, a2);
		}

		::System::Void _GetEntityFollowedBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET))(this, a1, a2);
		}

		::System::Void _GetEntityTransmitVisibilityTargets(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshViewModeSelectedEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::System::Void EnterViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET))(this);
		}

		::System::Void ExistViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* GetAllEnityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* GetAllUniqueNamedEntityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET))(this);
		}

		::System::Void AddToMananger(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET))(this, a1);
		}

		::System::Void RemoveFromManager(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET))(this, a1);
		}

		::System::Void AddToUniqueSnapshotMap(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET))(this, a1);
		}

		::System::Void _ProcessEntityTeamChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::TeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_LevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET))(this);
		}

		::System::Void set_LevelEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* get_OwnerWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_EntityGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET))(this);
		}

		::System::Void set_EntityGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_GroupGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET))(this);
		}

		::System::Void set_GroupGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_PlayerGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET))(this);
		}

		::System::Void set_PlayerGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_PerformanceGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET))(this);
		}

		::System::Void set_PerformanceGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_LittleGameGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET))(this);
		}

		::System::Void set_LittleGameGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUIWillSelectEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUIWillSelectEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeInEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutSummonerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutSummonerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUILeaveSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUILeaveSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* get_DataViewUISelectFadeInFollowEntities()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInFollowEntities(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this, a1);
		}

		::System::Void QueryAllEntites(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesViewModeSort(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QueryEntities_1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::GameEntity* FindFirstEntity(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ContainsEntity(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CalcEntityCount(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentType(::System::RuntimeTypeHandle a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::RuntimeTypeHandle, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithAnyComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* _QueryEntitiesImpl(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _CheckEntityHasComponentType(::RPG::GameCore::GameEntity* a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckEntityHasComponentTypes(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::RuntimeTypeHandle>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckEntityHasAnyComponentTypes(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::RuntimeTypeHandle>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET))(a1, a2);
		}
	};
}
