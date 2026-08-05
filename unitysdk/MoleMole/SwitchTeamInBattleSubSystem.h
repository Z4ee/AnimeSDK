#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"

class Class_1_71E07B54E7993380;
class Class_1_B7E341C5F1A6F199;
class Class_2_54B6207171F8D635;
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

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET UNITYSDK_OFFSET(0x17953AE0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x17959180)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET UNITYSDK_OFFSET(0x17956BB0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHECKDELAYEDFADEOUTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x179526E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEANUPDELAYEDFADEOUTEFFECTS_OFFSET UNITYSDK_OFFSET(0x1795BCF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0x17959C60)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS1_OFFSET UNITYSDK_OFFSET(0x17955800)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET UNITYSDK_OFFSET(0x17955540)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x17955290)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCECLEANUPALLDELAYEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x17952760)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET UNITYSDK_OFFSET(0x1795B890)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1795B9F0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET UNITYSDK_OFFSET(0x17952D20)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x17952150)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x17954FC0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x17954070)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISENABLEDELAYEDLOCALAVATARFADEOUT_OFFSET UNITYSDK_OFFSET(0x17952C90)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET UNITYSDK_OFFSET(0x17953E00)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONDELAYEDFADEOUTSWITCHOUT_OFFSET UNITYSDK_OFFSET(0x1795BA90)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x179521B0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET UNITYSDK_OFFSET(0x17959770)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC1_OFFSET UNITYSDK_OFFSET(0x17959360)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x179592C0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET UNITYSDK_OFFSET(0x17956750)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x1795B0D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET UNITYSDK_OFFSET(0x1795A990)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x17952480)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x17955B40)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNLOADASSETSYNC_OFFSET UNITYSDK_OFFSET(0x17959400)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNREGISTERDELAYEDFADEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17955180)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1795C4D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1795C2A0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC1_B__38_0_OFFSET UNITYSDK_OFFSET(0x1795C580)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_B__37_0_OFFSET UNITYSDK_OFFSET(0x1795C560)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1795C5A0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem_TypeDefinitionIndex = 83403;

	class SwitchTeamInBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SwitchTeamInBattleSubSystem*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>** StaticGet__runtimeConfig()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0x42860);
		}
		static ::System::Boolean* StaticGet_DebugEnableDelayedLocalAvatarFadeOut()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xF8B0);
		}
		// static const ::System::String* QTE_CONFIG; // 0x0
		// static const ::System::String* FINAL_ACTIVITY_SCORE; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs1; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* _cache; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _pendingDelayedFadeOutEntities; // 0x28
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0x30
		::Class_1_71E07B54E7993380* reportData; // 0x38
		::System::Threading::CancellationTokenSource* _cancellation; // 0x40
		::System::String* StrBuffLevelName; // 0x48
		::System::Action_1<::Class_1_B7E341C5F1A6F199*>* _switchOutEventCallback; // 0x50
		::System::String* StrBuffProName; // 0x58
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _needUnloadPaths; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs2; // 0x68
		::System::Boolean EnableDelayedLocalAvatarFadeOut; // 0x70
		::System::Boolean _canSwitchTeamTest; // 0x71
		::System::Boolean _canSwitchCharacterTest; // 0x72
		::System::Boolean SwitchStart; // 0x73
		::System::Single _delayedFadeOutTimeoutEndTime; // 0x74
		::System::Int32 CurIndex; // 0x78

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

		static ::System::Void InitSwitchTeamRuntimeConfig(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* data, ::Class_2_54B6207171F8D635* battleGameContext, ::System::Boolean performanceTest)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_54B6207171F8D635*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET))(data, battleGameContext, performanceTest);
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

		::System::Void CollectNextTeamAssets1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS1_OFFSET))(this);
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

		::Cysharp::Threading::Tasks::UniTaskVoid ProcessAssetsAsync1(::System::Single waitSec)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC1_OFFSET))(this, waitSec);
		}

		::System::Void ProcessAssetsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET))(this);
		}

		::System::Void UnloadAssetSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNLOADASSETSYNC_OFFSET))(this);
		}

		::System::Void PreloadTeamAvatarData(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* avatarMemberList, ::System::Int32 ti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET))(this, avatarMemberList, ti);
		}

		::System::Void ChangeTeamAvatarsInFight(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* newAvatarDatas, ::Struct_2_B6A3FA7992F9F37E_2 reloadParam, ::System::Action* changeEndCallBack, ::System::Action* teamReadyCallback, ::System::Int32 teamCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::Struct_2_B6A3FA7992F9F37E_2, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET))(this, newAvatarDatas, reloadParam, changeEndCallBack, teamReadyCallback, teamCount);
		}

		::System::Void ForceUnloadAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCEUNLOADASSETS_OFFSET))(this);
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

		::System::Boolean _ProcessAssetsAsync_b__37_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_B__37_0_OFFSET))(this);
		}

		::System::Boolean _ProcessAssetsAsync1_b__38_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC1_B__38_0_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
