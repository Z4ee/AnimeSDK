#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DEBCF596D13A3389;
class Class_3_E7D29F43FB80184D;
class FiveDimRenderingPanelRuntime;
namespace RPG::Client::TeamTowers { class TeamTowersGameBossViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersGamePlayerViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersGameStarsViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ADDVIEWTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xE1AFDD0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_EXIT_OFFSET UNITYSDK_OFFSET(0xE1AFAC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETBOSSBRICKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE1B02D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETINCONTROLINPUTVALUE_OFFSET UNITYSDK_OFFSET(0xE1B0430)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETWORLDWIDTH_OFFSET UNITYSDK_OFFSET(0xE1AED10)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_BOSSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B0900)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xE1B0940)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xE1B0C20)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_INVERSEROTATEDIRECTION_OFFSET UNITYSDK_OFFSET(0xE1B0A60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0xE1B09A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0xE1AFD60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0xE1B0B90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0xE1B0AF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SELFPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B08C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SHOWUICONTROLBTNS_OFFSET UNITYSDK_OFFSET(0xE1B0A10)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xE1AFF20)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B0920)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_TEAMMATEPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B08E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISSILVERWOLFSTAGE_OFFSET UNITYSDK_OFFSET(0xE1B0750)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0xE1AF940)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONDOWNINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xE1AF3F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMEPREPAREANIMFINISHED_OFFSET UNITYSDK_OFFSET(0xE1AEB40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMESTOP_OFFSET UNITYSDK_OFFSET(0xE1AE7A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONLEFTINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xE1AF050)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONRIGHTINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xE1AF220)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONROTATEINPUT_OFFSET UNITYSDK_OFFSET(0xE1AEE80)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONTUTORIALBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xE1AF5C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONUI3DDISPOSE_OFFSET UNITYSDK_OFFSET(0xE1AFF80)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_OPENSETTINGSDIALOG_OFFSET UNITYSDK_OFFSET(0xE1AF830)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PLAYBOSSFADEANIM_OFFSET UNITYSDK_OFFSET(0xE1B06A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_POSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xE1B0120)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PREVIEWPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0xE1B0630)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET3DVIEWROOT_OFFSET UNITYSDK_OFFSET(0xE1AE7F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETBGMSTATENAME_OFFSET UNITYSDK_OFFSET(0xE1B01B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEDGELINEROOT_OFFSET UNITYSDK_OFFSET(0xE1AEC60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0xE1AEBF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0xE1AEB90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_BOSSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B0910)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_SELFPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B08D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B0930)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_TEAMMATEPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B08F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SHOULDSHOWSETTINGSBTN_OFFSET UNITYSDK_OFFSET(0xE1AF8F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_TRYPAUSEGAME_OFFSET UNITYSDK_OFFSET(0xE1AFE70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AE670)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__INITRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0xE1AE920)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameViewModel_TypeDefinitionIndex = 78592;

	class TeamTowersGameViewModel : public ::System::Object
	{
	public:
		::Class_3_E7D29F43FB80184D* _OwnerGame; // 0x10
		::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel* _StarsViewModel_k__BackingField; // 0x18
		::RPG::Client::TeamTowers::TeamTowersGameBossViewModel* _BossViewModel_k__BackingField; // 0x20
		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* _SelfPlayerViewModel_k__BackingField; // 0x28
		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* _TeammatePlayerViewModel_k__BackingField; // 0x30
		::Class_1_DEBCF596D13A3389* _GameService; // 0x38
		::System::String* _BGMStateName; // 0x40

		::System::Void _ctor(::Class_3_E7D29F43FB80184D* a1, ::Class_1_DEBCF596D13A3389* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*, ::Class_1_DEBCF596D13A3389*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnGameStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMESTOP_OFFSET))(this);
		}

		::System::Void Set3DViewRoot(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET3DVIEWROOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnGamePrepareAnimFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMEPREPAREANIMFINISHED_OFFSET))(this);
		}

		::System::Void SetRobot3DRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETROBOT3DROOT_OFFSET))(this, a1);
		}

		::System::Void SetEffectRoot(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEFFECTROOT_OFFSET))(this, a1, a2);
		}

		::System::Void SetEdgeLineRoot(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEDGELINEROOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetWorldWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETWORLDWIDTH_OFFSET))(this);
		}

		::System::Void OnRotateInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONROTATEINPUT_OFFSET))(this);
		}

		::System::Void OnLeftInputChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONLEFTINPUTCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnRightInputChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONRIGHTINPUTCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnDownInputChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONDOWNINPUTCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnTutorialBlockStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONTUTORIALBLOCKSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void OpenSettingsDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_OPENSETTINGSDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldShowSettingsBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SHOULDSHOWSETTINGSBTN_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_EXIT_OFFSET))(this);
		}

		::System::Void AddViewTickCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ADDVIEWTICKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void TryPauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_TRYPAUSEGAME_OFFSET))(this, a1);
		}

		::System::Boolean IsTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISTUTORIALSTAGE_OFFSET))(this);
		}

		::System::Void OnUI3DDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONUI3DDISPOSE_OFFSET))(this);
		}

		::System::Void PostAudioEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_POSTAUDIOEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetBGMStateName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETBGMSTATENAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetBossBrickTargetPosition(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETBOSSBRICKTARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Single GetIncontrolInputValue(::InControl::InputControlType a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETINCONTROLINPUTVALUE_OFFSET))(this, a1);
		}

		::System::Void PreviewPlayerDamage(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PREVIEWPLAYERDAMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayBossFadeAnim(::System::Boolean a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PLAYBOSSFADEANIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsSilverWolfStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISSILVERWOLFSTAGE_OFFSET))(this);
		}

		::System::Void _InitRenderingPanel(::FiveDimRenderingPanelRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__INITRENDERINGPANEL_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* get_SelfPlayerViewModel()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SELFPLAYERVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SelfPlayerViewModel(::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_SELFPLAYERVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* get_TeammatePlayerViewModel()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_TEAMMATEPLAYERVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_TeammatePlayerViewModel(::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_TEAMMATEPLAYERVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersGameBossViewModel* get_BossViewModel()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersGameBossViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_BOSSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_BossViewModel(::RPG::Client::TeamTowers::TeamTowersGameBossViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersGameBossViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_BOSSVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel* get_StarsViewModel()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STARSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_StarsViewModel(::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_STARSVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STAGEID_OFFSET))(this);
		}

		::RPG::GameCore::TeamTowersLevelGameMode get_GameMode()
		{
			return ((::RPG::GameCore::TeamTowersLevelGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsGaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISGAMING_OFFSET))(this);
		}

		::System::Boolean get_IsPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISPVP_OFFSET))(this);
		}

		::System::Boolean get_ShowUIControlBtns()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SHOWUICONTROLBTNS_OFFSET))(this);
		}

		::System::Boolean get_InverseRotateDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_INVERSEROTATEDIRECTION_OFFSET))(this);
		}

		::System::Boolean get_MobileUseBtnRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_MOBILEUSEBTNROTATE_OFFSET))(this);
		}

		::System::Boolean get_KeyBoardUseWRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_KEYBOARDUSEWROTATE_OFFSET))(this);
		}

		::System::UInt64 get_GameTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMETIMESTAMPMS_OFFSET))(this);
		}
	};
}
