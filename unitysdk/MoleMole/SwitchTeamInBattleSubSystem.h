#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"

class Class_1_71E07B54E7993380;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET UNITYSDK_OFFSET(0x10BF9DF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x10BFDB40)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET UNITYSDK_OFFSET(0x10BFBF10)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0x10BFE1D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET UNITYSDK_OFFSET(0x10BFB210)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x10BFB000)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET UNITYSDK_OFFSET(0x10BFFD70)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET UNITYSDK_OFFSET(0x10BF9020)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x10BF8CF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x10BFAE80)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x10BFA360)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET UNITYSDK_OFFSET(0x10BFA110)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10BF8D50)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET UNITYSDK_OFFSET(0x10BFDCF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x10BFDC40)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET UNITYSDK_OFFSET(0x10BFBE30)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x10BFF5B0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET UNITYSDK_OFFSET(0x10BFEE80)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x10BF8DC0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x10BFB4D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C00040)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BFFEC0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10C000D0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem_TypeDefinitionIndex = 58528;

	class SwitchTeamInBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SwitchTeamInBattleSubSystem*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>** StaticGet__runtimeConfig()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0x3D690);
		}
		// static const ::System::String* QTE_CONFIG; // 0x0
		// static const ::System::String* FINAL_ACTIVITY_SCORE; // 0x0
		::System::String* StrBuffLevelName; // 0x10
		::System::Threading::CancellationTokenSource* _cancellation; // 0x18
		::System::String* StrBuffProName; // 0x20
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* _cache; // 0x38
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _needUnloadPaths; // 0x40
		::Class_1_71E07B54E7993380* reportData; // 0x48
		::System::Int32 CurIndex; // 0x50
		::System::Boolean SwitchStart; // 0x54

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

		static ::System::Void InitSwitchTeamRuntimeConfig(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET))(data);
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

		::System::Void ChangeTeamAvatarsInFight(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* newAvatarDatas, ::Struct_2_B6A3FA7992F9F37E_6 reloadParam, ::System::Action* changeEndCallBack, ::System::Action* teamReadyCallback, ::System::Int32 teamCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::Struct_2_B6A3FA7992F9F37E_6, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET))(this, newAvatarDatas, reloadParam, changeEndCallBack, teamReadyCallback, teamCount);
		}

		static ::System::Void ClearOldTeamAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET))();
		}

		static ::System::Void IsolateTeams(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET))(teams);
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
