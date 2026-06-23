#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E.h"

class Class_1_71E07B54E7993380;
class Class_1_B7E341C5F1A6F199;
class Class_2_0EAF9D2EC965AF17;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET UNITYSDK_OFFSET(0x17398410)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x1739CA70)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET UNITYSDK_OFFSET(0x1739A720)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHECKDELAYEDFADEOUTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x17397000)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEANUPDELAYEDFADEOUTEFFECTS_OFFSET UNITYSDK_OFFSET(0x1739F090)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0x1739D100)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET UNITYSDK_OFFSET(0x17399A30)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x173997E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCECLEANUPALLDELAYEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x17397080)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET UNITYSDK_OFFSET(0x1739ECF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET UNITYSDK_OFFSET(0x17397640)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x17396C60)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x17399510)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x173989A0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISENABLEDELAYEDLOCALAVATARFADEOUT_OFFSET UNITYSDK_OFFSET(0x173975B0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET UNITYSDK_OFFSET(0x17398730)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONDELAYEDFADEOUTSWITCHOUT_OFFSET UNITYSDK_OFFSET(0x1739EE40)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17396CC0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1739CC10)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x1739CB70)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET UNITYSDK_OFFSET(0x1739A640)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x1739E530)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET UNITYSDK_OFFSET(0x1739DE00)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x17396DA0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x17399CF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNREGISTERDELAYEDFADEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x173996D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1739F800)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1739F630)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1739F890)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem_TypeDefinitionIndex = 42449;

	class SwitchTeamInBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SwitchTeamInBattleSubSystem*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>** StaticGet__runtimeConfig()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0x3AF30);
		}
		static ::System::Boolean* StaticGet_DebugEnableDelayedLocalAvatarFadeOut()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xE790);
		}
		// static const ::System::String* QTE_CONFIG; // 0x0
		// static const ::System::String* FINAL_ACTIVITY_SCORE; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _pendingDelayedFadeOutEntities; // 0x10
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _needUnloadPaths; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs; // 0x20
		::System::Threading::CancellationTokenSource* _cancellation; // 0x28
		::System::Action_1<::Class_1_B7E341C5F1A6F199*>* _switchOutEventCallback; // 0x30
		::System::String* StrBuffLevelName; // 0x38
		::Class_1_71E07B54E7993380* reportData; // 0x40
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0x48
		::System::String* StrBuffProName; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* _cache; // 0x58
		::System::Int32 CurIndex; // 0x60
		::System::Boolean SwitchStart; // 0x64
		::System::Boolean EnableDelayedLocalAvatarFadeOut; // 0x65
		::System::Single _delayedFadeOutTimeoutEndTime; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>* get_RuntimeConfig()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void CheckDelayedFadeOutTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHECKDELAYEDFADEOUTTIMEOUT_OFFSET))(this);
		}

		::System::Boolean IsEnableDelayedLocalAvatarFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISENABLEDELAYEDLOCALAVATARFADEOUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetAllEntityForFightResult()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET))(this);
		}

		::System::Void SetBuffLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET))(this);
		}

		::System::Void CacheEntity(::MoleMole::Battle::Entity* e, ::System::Int32 teamIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET))(this, e, teamIndex, index);
		}

		static ::System::Void InitSwitchTeamRuntimeConfig(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* data, ::Class_2_0EAF9D2EC965AF17* battleGameContext)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_0EAF9D2EC965AF17*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET))(data, battleGameContext);
		}

		::System::Void InitSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void DisposeSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void CollectNextTeamAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET))(this);
		}

		::System::Void SwitchTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET))(this);
		}

		::System::Boolean CanSwitchTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ProcessAssetsAsync(::System::Single waitSec)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET))(this, waitSec);
		}

		::System::Void ProcessAssetsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET))(this);
		}

		::System::Void PreloadTeamAvatarData(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* avatarMemberList, ::System::Int32 ti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET))(this, avatarMemberList, ti);
		}

		::System::Void ChangeTeamAvatarsInFight(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* newAvatarDatas, ::Struct_2_B6A3FA7992F9F37E reloadParam, ::System::Action* changeEndCallBack, ::System::Action* teamReadyCallback, ::System::Int32 teamCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::Struct_2_B6A3FA7992F9F37E, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET))(this, newAvatarDatas, reloadParam, changeEndCallBack, teamReadyCallback, teamCount);
		}

		::System::Void OnDelayedFadeOutSwitchOut(::Class_1_B7E341C5F1A6F199* baseEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONDELAYEDFADEOUTSWITCHOUT_OFFSET))(this, baseEvt);
		}

		::System::Void ForceCleanupAllDelayedFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCECLEANUPALLDELAYEDFADEOUT_OFFSET))(this);
		}

		::System::Void UnregisterDelayedFadeOutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNREGISTERDELAYEDFADEOUTCALLBACK_OFFSET))(this);
		}

		static ::System::Void CleanupDelayedFadeOutEffects(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEANUPDELAYEDFADEOUTEFFECTS_OFFSET))(entity);
		}

		static ::System::Void ClearOldTeamAvatars(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* delayedFadeOutEntities)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET))(delayedFadeOutEntities);
		}

		static ::System::Void IsolateTeams(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* teams, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* skipEntities)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET))(teams, skipEntities);
		}

		static ::System::Void ForceSetAvatarStateDead(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET))(teams);
		}

		static ::System::Void ResumeTeams(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET))(teams);
		}

		static ::System::Void RefreshTeam(::MoleMole::TeamDataItem* teamData)
		{
			return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET))(teamData);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
