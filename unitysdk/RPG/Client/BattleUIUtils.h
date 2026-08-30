#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_50AEFB409ED29B92;
class Class_1_8654F1DF226F6DE3_2;
class Class_1_DDDB57AA67C3A9EA;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleTargetConfigRow; }
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

#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET UNITYSDK_OFFSET(0x1BD72A00)
#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x1BD72910)
#define RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET UNITYSDK_OFFSET(0x1BD74090)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1BD73850)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMAZESKILLREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x1BD734B0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x1BD73FB0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0x1BD6A910)
#define RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BD73130)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1BD71C90)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1BD71F50)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDATA_OFFSET UNITYSDK_OFFSET(0x1BD71DF0)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1BD71B40)
#define RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0x1BD759A0)
#define RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1BD72250)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLERESULAUTODECOMPOSEINFO_OFFSET UNITYSDK_OFFSET(0x1BD73780)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETICONTYPE_OFFSET UNITYSDK_OFFSET(0x1BD75C90)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1BD75BD0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET UNITYSDK_OFFSET(0x1BD75DF0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURRENTURNACTIONENTITY_OFFSET UNITYSDK_OFFSET(0x1BD719E0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURSTAGETYPE_OFFSET UNITYSDK_OFFSET(0x1BD75300)
#define RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BD75710)
#define RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0x1BD72F20)
#define RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET UNITYSDK_OFFSET(0x1BD778B0)
#define RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET UNITYSDK_OFFSET(0x1BD72420)
#define RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0x1BD75AC0)
#define RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET UNITYSDK_OFFSET(0x1BD77A20)
#define RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1BD78500)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_PAUSE_DIALOG_NAME_OFFSET UNITYSDK_OFFSET(0x1BD718A0)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_TEAM_INFO_PAGE_NAME_OFFSET UNITYSDK_OFFSET(0x1BD775E0)
#define RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET UNITYSDK_OFFSET(0x1BD72600)
#define RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x1BD75D60)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET UNITYSDK_OFFSET(0x1BD70C30)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1BD77F60)
#define RPG_CLIENT_BATTLEUIUTILS_ISENVBUFFEXIST_OFFSET UNITYSDK_OFFSET(0x1BD74D60)
#define RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BD762B0)
#define RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET UNITYSDK_OFFSET(0x1BD74840)
#define RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1BD764F0)
#define RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET UNITYSDK_OFFSET(0x1BD77B90)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1BD76BA0)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1BD70D10)
#define RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1BD756D0)
#define RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BD76250)
#define RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET UNITYSDK_OFFSET(0x1BD76300)
#define RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD70D70)
#define RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET UNITYSDK_OFFSET(0x1BD71580)
#define RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET UNITYSDK_OFFSET(0x1BD72BD0)
#define RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BD76FB0)
#define RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BD76E30)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0x1BD72F80)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1BD72E60)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1BD72DA0)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYACTIVEAVATARPANELENTITIES_OFFSET UNITYSDK_OFFSET(0x1BD780D0)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0x1BD77D90)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET UNITYSDK_OFFSET(0x1BD78060)
#define RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1BD776D0)
#define RPG_CLIENT_BATTLEUIUTILS_SHOULDSHOWWAVEINFO_OFFSET UNITYSDK_OFFSET(0x1BD754B0)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1BD71130)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1BD71030)
#define RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET UNITYSDK_OFFSET(0x1BD74900)
#define RPG_CLIENT_BATTLEUIUTILS_TRYGETSTAGEINVASIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1BD75840)
#define RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET UNITYSDK_OFFSET(0x1BD742A0)
#define RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x1BD78340)
#define RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x1BD76770)
#define RPG_CLIENT_BATTLEUIUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD785D0)
#define RPG_CLIENT_BATTLEUIUTILS__ENTITYHASSHIELD_OFFSET UNITYSDK_OFFSET(0x1BD767F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils_TypeDefinitionIndex = 72005;

	class BattleUIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_8654F1DF226F6DE3_2*>** StaticGet_PendingReplayDownloadLock()
		{
			return (::System::Collections::Generic::List_1<::Class_1_8654F1DF226F6DE3_2*>**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0xEF90);
		}
		static ::System::Boolean* StaticGet_LockDownLoadReplayFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0x47C0);
		}
		static ::System::UInt32* StaticGet_s_AvatarExpVirtualItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils_TypeDefinitionIndex)->GetStaticField(0x47C4);
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

		static ::System::Boolean IsEntityHaveShieldBuff(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET))(a1);
		}

		static ::System::Boolean IsShieldModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET))(a1);
		}

		static ::System::Boolean IsUIOperationEnable(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET))(a1);
		}

		static ::System::Boolean ShowTeamDetailDialog(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET))(a1);
		}

		static ::System::Boolean ShowTeamDetailDialog_1(::RPG::Client::BattleViewModeInitData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BattleViewModeInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET))(a1);
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

		static ::RPG::GameCore::AttackDamageType GetActiveSkillDamageType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType GetAttachPreshowSkillDamageType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetSkillTipOffset(::RPG::Client::UISkillIndex a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET))(a1);
		}

		static ::System::Boolean IsViewModeEnable(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsActionBarCanScroll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET))();
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel(::Class_1_DDDB57AA67C3A9EA* a1)
		{
			return ((::System::Boolean(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET))(a1);
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET))();
		}

		static ::System::Boolean IsWaitOrder()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET))();
		}

		static ::System::Void PlayAnimationWithTimeScale(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET))(a1, a2);
		}

		static ::System::Void PlayAnimationWithSimulationSpeed(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single GetMetronomeTime(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET))(a1);
		}

		static ::System::Void PlayAnimationFromMetronomeTime(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* FindByRuntimeID(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET))(a1, a2);
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

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateBattleResultRewardList(::RPG::Client::BattleResultInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateMultipleRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::System::Void CheckPendingDownLoadReplayToPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET))();
		}

		static ::System::Boolean IsGameCoreCodeExpire(::Class_1_8654F1DF226F6DE3_2* a1)
		{
			return ((::System::Boolean(*)(::Class_1_8654F1DF226F6DE3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET))(a1);
		}

		static ::System::Void TryPlayReplay(::Class_1_8654F1DF226F6DE3_2* a1)
		{
			return ((::System::Void(*)(::Class_1_8654F1DF226F6DE3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET))(a1);
		}

		static ::System::Boolean TryDownLoadReplay(::System::Int32 a1, ::Class_1_8654F1DF226F6DE3_2* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_1_8654F1DF226F6DE3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET))(a1, a2);
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

		static ::System::Boolean IsSpeicalUltraSkillType(::RPG::GameCore::SkillSPProgressType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillSPProgressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Boolean TryGetStageInvasionStatus(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageInvasionMonsterUIData& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageInvasionMonsterUIData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYGETSTAGEINVASIONSTATUS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllAvatarGlobalMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET))();
		}

		static ::System::Single GetSpeedUpRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET))();
		}

		static ::RPG::Client::BattleTargetStatus GetBattleTargetStatus(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::BattleTargetStatus(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::BattleTargetIconType GetBattleTargetIconType(::RPG::GameCore::BattleTargetConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::BattleTargetIconType(*)(::RPG::GameCore::BattleTargetConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETICONTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBattleTargetForward(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetCurBattleSubTarget(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTargetStatusChange(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsFailProgress(::RPG::GameCore::ParamType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET))(a1);
		}

		static ::System::Boolean IsToastPause()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET))();
		}

		static ::System::Boolean IsHPChangeNeedShow(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET))(a1);
		}

		static ::System::Boolean IsShieldChangeNeedShow(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET))(a1);
		}

		static ::System::Boolean _CanEntityShowDamageText(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET))(a1);
		}

		static ::System::Boolean _EntityHasShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__ENTITYHASSHIELD_OFFSET))(a1);
		}

		static ::System::Void OpenPauseDialog(::System::Boolean a1, ::RPG::Client::PauseDialogTabEnum a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::PauseDialogTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void LateOpenPauseDialog(::Class_1_50AEFB409ED29B92* a1)
		{
			return ((::System::Void(*)(::Class_1_50AEFB409ED29B92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET))(a1);
		}

		static ::System::Void SetBattlePause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET))(a1);
		}

		static ::System::Single GetModelScale(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET))(a1);
		}

		static ::UnityEngine::RectTransform* GetUINode(::System::String* a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET))(a1);
		}

		static ::System::Boolean IsMonsterBoundsCulledByCamera(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsEntityNeedShowInViewMode(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntityList* QueryServant(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET))(a1);
		}

		static ::System::Void QueryActiveAvatarPanelEntities(::RPG::GameCore::EntityManager* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYACTIVEAVATARPANELENTITIES_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CanEntityShowAvatarPanel(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWAVATARPANEL_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetUltraUIOperationIndex(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET))(a1);
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
