#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_02D30900317D93FD;
class Class_1_50AEFB409ED29B92;
class Class_1_B8B7AE2DAD90AA4E;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET UNITYSDK_OFFSET(0x91DB500)
#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x91DB410)
#define RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET UNITYSDK_OFFSET(0x91DC6F0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET UNITYSDK_OFFSET(0x91DC1A0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMAZESKILLREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x91DBEF0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x91DC640)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x91D23A0)
#define RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x91DBCA0)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x91DA890)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x91DAB10)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDATA_OFFSET UNITYSDK_OFFSET(0x91DA9D0)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x91DA740)
#define RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0x91DDDB0)
#define RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x91DADA0)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLERESULAUTODECOMPOSEINFO_OFFSET UNITYSDK_OFFSET(0x91DC100)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x91DDFE0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET UNITYSDK_OFFSET(0x91DE130)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURRENTURNACTIONENTITY_OFFSET UNITYSDK_OFFSET(0x91DA5F0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURSTAGETYPE_OFFSET UNITYSDK_OFFSET(0x91DD890)
#define RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x91DDC90)
#define RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0x91DBA90)
#define RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET UNITYSDK_OFFSET(0x91DF6D0)
#define RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET UNITYSDK_OFFSET(0x91DAF70)
#define RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0x91DDED0)
#define RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET UNITYSDK_OFFSET(0x91DF820)
#define RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x91DFE80)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_PAUSE_DIALOG_NAME_OFFSET UNITYSDK_OFFSET(0x91DA490)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_TEAM_INFO_PAGE_NAME_OFFSET UNITYSDK_OFFSET(0x91DF3E0)
#define RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET UNITYSDK_OFFSET(0x91DB140)
#define RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x91DE0A0)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET UNITYSDK_OFFSET(0x91D9870)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET UNITYSDK_OFFSET(0x91DFD10)
#define RPG_CLIENT_BATTLEUIUTILS_ISENVBUFFEXIST_OFFSET UNITYSDK_OFFSET(0x91DD380)
#define RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET UNITYSDK_OFFSET(0x91DE580)
#define RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET UNITYSDK_OFFSET(0x91DCE80)
#define RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x91DE7A0)
#define RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET UNITYSDK_OFFSET(0x91DF970)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x91DEA40)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET UNITYSDK_OFFSET(0x91D9940)
#define RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x91DDC50)
#define RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x91DE520)
#define RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET UNITYSDK_OFFSET(0x91DE5D0)
#define RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET UNITYSDK_OFFSET(0x91D99A0)
#define RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET UNITYSDK_OFFSET(0x91DA170)
#define RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET UNITYSDK_OFFSET(0x91DB740)
#define RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x91DEDC0)
#define RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x91DEC40)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0x91DBAF0)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x91DB9D0)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x91DB910)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0x91DFB60)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET UNITYSDK_OFFSET(0x91DFE10)
#define RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET UNITYSDK_OFFSET(0x91DF4F0)
#define RPG_CLIENT_BATTLEUIUTILS_SHOULDSHOWWAVEINFO_OFFSET UNITYSDK_OFFSET(0x91DDA40)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET UNITYSDK_OFFSET(0x91D9D50)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x91D9C50)
#define RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET UNITYSDK_OFFSET(0x91DCF40)
#define RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET UNITYSDK_OFFSET(0x91DC8E0)
#define RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x91DE9C0)
#define RPG_CLIENT_BATTLEUIUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x91DFFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils_TypeDefinitionIndex = 59030;

	class BattleUIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_B8B7AE2DAD90AA4E*>** StaticGet_PendingReplayDownloadLock()
		{
			return (::System::Collections::Generic::List_1<::Class_1_B8B7AE2DAD90AA4E*>**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0x41140);
		}
		static ::System::UInt32* StaticGet_s_AvatarExpVirtualItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0x11530);
		}
		static ::System::Boolean* StaticGet_LockDownLoadReplayFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0x11534);
		}
		// static const ::System::String* _LUA_BATTLE_TEAM_INFO_PAGE; // 0x0
		// static const ::System::String* _LUA_BATTLE_PAUSE_DIALOG; // 0x0
		// static const ::System::String* HEAD_BUTTON_NORMAL_EFF; // 0x0
		// static const ::System::String* HEAD_BUTTON_SELECTED_EFF; // 0x0
		// static const ::System::Int32 LAYER_DIRTY_HP = 0x0; // 0x0
		// static const ::System::Int32 LAYER_RALLY_HP = 0x1; // 0x0
		// static const ::System::Int32 LAYER_BG_HP = 0x2; // 0x0
		// static const ::System::Int32 LAYER_NORMAL_HP = 0x3; // 0x0
		// static const ::System::Int32 LAYER_FORCE_KILL = 0x4; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsEntityHaveShieldBuff(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET))(entity);
		}

		static ::System::Boolean IsShieldModifier(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET))(modifier);
		}

		static ::System::Boolean IsUIOperationEnable(::System::Boolean isCheckTimeline)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET))(isCheckTimeline);
		}

		static ::System::Boolean ShowTeamDetailDialog(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET))(entity);
		}

		static ::System::Boolean ShowTeamDetailDialog_1(::RPG::Client::BattleViewModeInitData* initData)
		{
			return ((::System::Boolean(*)(::RPG::Client::BattleViewModeInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET))(initData);
		}

		static ::RPG::GameCore::GameEntity* GetCurrenTurnActionEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURRENTURNACTIONENTITY_OFFSET))();
		}

		static ::System::Int32 GetActiveSkillIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLINDEX_OFFSET))();
		}

		static ::RPG::GameCore::SkillConfig* GetActiveSkillConfig()
		{
			return ((::RPG::GameCore::SkillConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::SkillData* GetActiveSkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDATA_OFFSET))();
		}

		static ::RPG::GameCore::AttackDamageType GetActiveSkillDamageType(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET))(entity);
		}

		static ::RPG::GameCore::AttackDamageType GetAttachPreshowSkillDamageType(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET))(entity);
		}

		static ::UnityEngine::Vector3 GetSkillTipOffset(::RPG::Client::UISkillIndex skillIndex)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET))(skillIndex);
		}

		static ::System::Boolean IsViewModeEnable(::System::Boolean ignoreTimeLineDetailOpen)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET))(ignoreTimeLineDetailOpen);
		}

		static ::System::Boolean IsActionBarCanScroll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET))();
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel(::Class_1_02D30900317D93FD* item)
		{
			return ((::System::Boolean(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET))(item);
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET))();
		}

		static ::System::Boolean IsWaitOrder()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET))();
		}

		static ::System::Void PlayAnimationWithTimeScale(::UnityEngine::Animation* anim, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET))(anim, name);
		}

		static ::System::Void PlayAnimationWithSimulationSpeed(::UnityEngine::Animation* anim, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET))(anim, name);
		}

		static ::System::Single GetMetronomeTime(::System::Single time)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET))(time);
		}

		static ::System::Void PlayAnimationFromMetronomeTime(::UnityEngine::Animation* animation, ::System::String* animName)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET))(animation, animName);
		}

		static ::RPG::GameCore::GameEntity* FindByRuntimeID(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* list, ::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET))(list, runtimeID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateMazeSkillRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEMAZESKILLREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::RPG::Client::BattleResulAutoDecomposeInfo* GetBattleResulAutoDecomposeInfo()
		{
			return ((::RPG::Client::BattleResulAutoDecomposeInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLERESULAUTODECOMPOSEINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateBattleResultRewardList(::RPG::Client::BattleResultInfo* battleResult)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET))(battleResult);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateMultipleRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::System::Void CheckPendingDownLoadReplayToPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET))();
		}

		static ::System::Boolean IsGameCoreCodeExpire(::Class_1_B8B7AE2DAD90AA4E* pReplay)
		{
			return ((::System::Boolean(*)(::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET))(pReplay);
		}

		static ::System::Void TryPlayReplay(::Class_1_B8B7AE2DAD90AA4E* pReplay)
		{
			return ((::System::Void(*)(::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET))(pReplay);
		}

		static ::System::Boolean TryDownLoadReplay(::System::Int32 iTryCount, ::Class_1_B8B7AE2DAD90AA4E* pReplay)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET))(iTryCount, pReplay);
		}

		static ::System::Boolean IsEnvBuffExist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENVBUFFEXIST_OFFSET))();
		}

		static ::RPG::GameCore::StageType GetCurStageType()
		{
			return ((::RPG::GameCore::StageType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURSTAGETYPE_OFFSET))();
		}

		static ::System::Boolean ShouldShowWaveInfo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOULDSHOWWAVEINFO_OFFSET))();
		}

		static ::System::Boolean IsSpeicalUltraSkillType(::RPG::GameCore::SkillSPProgressType skillSPProgressType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillSPProgressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET))(skillSPProgressType);
		}

		static ::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET))(runtimeID);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllAvatarGlobalMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET))();
		}

		static ::System::Single GetSpeedUpRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET))();
		}

		static ::RPG::Client::BattleTargetStatus GetBattleTargetStatus(::RPG::GameCore::ParamType paramType, ::System::UInt32 curProgress, ::System::UInt32 targetProgress)
		{
			return ((::RPG::Client::BattleTargetStatus(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET))(paramType, curProgress, targetProgress);
		}

		static ::System::Boolean IsBattleTargetForward(::RPG::GameCore::ParamType paramType, ::System::UInt32 curProgress, ::System::UInt32 preProgress)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET))(paramType, curProgress, preProgress);
		}

		static ::System::UInt32 GetCurBattleSubTarget(::System::UInt32 battleTargetID, ::System::UInt32 curProgress)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET))(battleTargetID, curProgress);
		}

		static ::System::Boolean IsTargetStatusChange(::RPG::GameCore::ParamType paramType, ::System::UInt32 curProgress, ::System::UInt32 targetProgress)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET))(paramType, curProgress, targetProgress);
		}

		static ::System::Boolean IsFailProgress(::RPG::GameCore::ParamType paramType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET))(paramType);
		}

		static ::System::Boolean IsToastPause()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET))();
		}

		static ::System::Boolean IsHPChangeNeedShow(::RPG::GameCore::AbilityCurrentHPChange* changeEvt)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET))(changeEvt);
		}

		static ::System::Boolean IsShieldChangeNeedShow(::RPG::GameCore::AbilityCurrentShieldChange* changeEvt)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET))(changeEvt);
		}

		static ::System::Boolean _CanEntityShowDamageText(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET))(entity);
		}

		static ::System::Void OpenPauseDialog(::System::Boolean isExitBattleBtnDisable, ::RPG::Client::PauseDialogTabEnum initTabEnum)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::PauseDialogTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET))(isExitBattleBtnDisable, initTabEnum);
		}

		static ::System::Void LateOpenPauseDialog(::Class_1_50AEFB409ED29B92* param)
		{
			return ((::System::Void(*)(::Class_1_50AEFB409ED29B92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET))(param);
		}

		static ::System::Void SetBattlePause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET))(isPause);
		}

		static ::System::Single GetModelScale(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET))(entity);
		}

		static ::UnityEngine::RectTransform* GetUINode(::System::String* uniqueName)
		{
			return ((::UnityEngine::RectTransform*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET))(uniqueName);
		}

		static ::System::Boolean IsMonsterBoundsCulledByCamera(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET))(entity);
		}

		static ::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::EntityManager* mgr, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET))(mgr, teamTypeMask, entityTypeMask, aliveStateMask);
		}

		static ::System::Boolean IsEntityNeedShowInViewMode(::RPG::GameCore::GameEntity* gameEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET))(gameEntity);
		}

		static ::RPG::GameCore::GameEntityList* QueryServant(::RPG::GameCore::EntityManager* mgr)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET))(mgr);
		}

		static ::System::Int32 GetUltraUIOperationIndex(::RPG::GameCore::GameEntity* lightTeamEntity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET))(lightTeamEntity);
		}

		static ::System::String* get__LUA_BATTLE_TEAM_INFO_PAGE_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_TEAM_INFO_PAGE_NAME_OFFSET))();
		}

		static ::System::String* get__LUA_BATTLE_PAUSE_DIALOG_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_PAUSE_DIALOG_NAME_OFFSET))();
		}
	};
}
