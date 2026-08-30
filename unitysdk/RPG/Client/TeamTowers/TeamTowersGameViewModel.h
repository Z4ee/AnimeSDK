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

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ADDVIEWTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3AD6A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_EXIT_OFFSET UNITYSDK_OFFSET(0x1A3AD390)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETBOSSBRICKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3ADBA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETINCONTROLINPUTVALUE_OFFSET UNITYSDK_OFFSET(0x1A3ADD00)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GETWORLDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A3AC5F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_BOSSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x1A3AE210)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_GAMETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1A3AE4F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_INVERSEROTATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A3AE330)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0x1A3AE270)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x1A3AD630)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0x1A3AE460)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0x1A3AE3C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SELFPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE190)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_SHOWUICONTROLBTNS_OFFSET UNITYSDK_OFFSET(0x1A3AE2E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A3AD7F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_GET_TEAMMATEPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISSILVERWOLFSTAGE_OFFSET UNITYSDK_OFFSET(0x1A3AE020)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ISTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x1A3AD210)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONDOWNINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A3ACCC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMEPREPAREANIMFINISHED_OFFSET UNITYSDK_OFFSET(0x1A3AC430)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONGAMESTOP_OFFSET UNITYSDK_OFFSET(0x1A3AC090)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONLEFTINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A3AC920)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONRIGHTINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A3ACAF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONROTATEINPUT_OFFSET UNITYSDK_OFFSET(0x1A3AC750)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONTUTORIALBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A3ACE90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_ONUI3DDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3AD850)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_OPENSETTINGSDIALOG_OFFSET UNITYSDK_OFFSET(0x1A3AD100)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PLAYBOSSFADEANIM_OFFSET UNITYSDK_OFFSET(0x1A3ADF70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_POSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x1A3AD9F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_PREVIEWPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1A3ADF00)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET3DVIEWROOT_OFFSET UNITYSDK_OFFSET(0x1A3AC0E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETBGMSTATENAME_OFFSET UNITYSDK_OFFSET(0x1A3ADA80)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEDGELINEROOT_OFFSET UNITYSDK_OFFSET(0x1A3AC550)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1A3AC4E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SETROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0x1A3AC480)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_BOSSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_SELFPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE200)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SET_TEAMMATEPLAYERVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A3AE1C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_SHOULDSHOWSETTINGSBTN_OFFSET UNITYSDK_OFFSET(0x1A3AD1C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL_TRYPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1A3AD740)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3ABF60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEVIEWMODEL__INITRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x1A3AC210)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameViewModel_TypeDefinitionIndex = 78591;

	class TeamTowersGameViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TeamTowers::TeamTowersGameBossViewModel* _BossViewModel_k__BackingField; // 0x10
		::Class_3_E7D29F43FB80184D* _OwnerGame; // 0x18
		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* _SelfPlayerViewModel_k__BackingField; // 0x20
		::Class_1_DEBCF596D13A3389* _GameService; // 0x28
		::System::String* _BGMStateName; // 0x30
		::RPG::Client::TeamTowers::TeamTowersGameStarsViewModel* _StarsViewModel_k__BackingField; // 0x38
		::RPG::Client::TeamTowers::TeamTowersGamePlayerViewModel* _TeammatePlayerViewModel_k__BackingField; // 0x40

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
