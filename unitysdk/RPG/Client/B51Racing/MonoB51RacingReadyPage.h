#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1306;
class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1413;
class Class_0_16E4307DCC419505_1414;
class Class_0_16E4307DCC419505_1418;
class Class_1_41DC55EACF71282F;
class Class_1_A67090E7C81489C5;
class Class_1_E2E6EA8FA1A071A6;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingReadyPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::Client::B51Racing { class MonoB51RacingReadyDriverPanel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONEXITCLICK_OFFSET UNITYSDK_OFFSET(0x1B6DEE50)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSKILLCHECKCLICK_OFFSET UNITYSDK_OFFSET(0x1B6DF130)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSWITCHAVATARCLICK_OFFSET UNITYSDK_OFFSET(0x1B6DF0D0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x1B6DF280)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONSTARTRACECLICK_OFFSET UNITYSDK_OFFSET(0x1B6DF020)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONTABSELECT_OFFSET UNITYSDK_OFFSET(0x1B6DF190)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6DD360)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ACQUIRESCENETOKEN_OFFSET UNITYSDK_OFFSET(0x1B6DCCB0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ADAPTCAMERAFOV_OFFSET UNITYSDK_OFFSET(0x1B6DF9B0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYSTATICTEXTIDS_OFFSET UNITYSDK_OFFSET(0x1B6DDB30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYTABSTATE_OFFSET UNITYSDK_OFFSET(0x1B6DDD60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6DFF00)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DFED0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6DD2C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCAMERASERVICE_OFFSET UNITYSDK_OFFSET(0x1B6DF8E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCARSERVICE_OFFSET UNITYSDK_OFFSET(0x1B6DFE00)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSCENESERVICE_OFFSET UNITYSDK_OFFSET(0x1B6DCBE0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1B6DEF20)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0x1B6DEFD0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6DCD50)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6DEBB0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONEXITCLICK_B__52_0_OFFSET UNITYSDK_OFFSET(0x1B6E00A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETRANKITEM_OFFSET UNITYSDK_OFFSET(0x1B6DF710)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETTARGETITEM_OFFSET UNITYSDK_OFFSET(0x1B6DF2F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6DC5B0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONSTARTENTERMATCHRAID_OFFSET UNITYSDK_OFFSET(0x1B6DF080)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1B6DFB30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHDRIVERPANEL_OFFSET UNITYSDK_OFFSET(0x1B6DDFB0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHMAPAREA_OFFSET UNITYSDK_OFFSET(0x1B6DE030)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHRANKLIST_OFFSET UNITYSDK_OFFSET(0x1B6DE8A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B6DEA50)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1B6DE6E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__RELEASETRANSIENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1B6DDAB0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPCAMERA_OFFSET UNITYSDK_OFFSET(0x1B6DD970)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPREADYPAGECONTENT_OFFSET UNITYSDK_OFFSET(0x1B6DD710)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__TRYINITDRIVERPANEL_OFFSET UNITYSDK_OFFSET(0x1B6DFB80)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingReadyPage_TypeDefinitionIndex = 80631;

	class MonoB51RacingReadyPage : public ::Sofa::BaseSofaControl
	{
	public:
		static ::RPG::Client::TextID* StaticGet_s_TextMap()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x153B0);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextMatchIndex()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x153C0);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextStartRace()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x153D0);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextScoreDetailBtn()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x153E0);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextRace()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x153F0);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextTarget()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x15400);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextTrackDescription()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x15410);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextMatchLap()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x15420);
		}
		static ::RPG::Client::TextID* StaticGet_s_TextScoreRank()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyPage_TypeDefinitionIndex)->GetStaticField(0x15430);
		}
		// static const ::System::Int32 TAB_INDEX_MAP = 0x0; // 0x0
		// static const ::System::Int32 TAB_INDEX_RANK = 0x1; // 0x0
		// static const ::System::Int32 LIST_ITEM_PREFAB_INDEX = 0x0; // 0x0
		// static const ::System::String* STATE_MAP; // 0x0
		// static const ::System::String* STATE_RANK; // 0x0
		// static const ::System::Single FOV_43; // 0x0
		// static const ::System::Single RATIO_169; // 0x0
		// static const ::System::Single RATIO_229; // 0x0
		// static const ::System::Single RATIO_43; // 0x0
		::RPG::Client::UIStateCtrl* _RightPanelStateCtrl; // 0x38
		::UnityEngine::Transform* _MapRoot; // 0x40
		::RPG::Client::LocalizedText* _MapTitle; // 0x48
		::RPG::Client::LocalizedText* _TrackName; // 0x50
		::RPG::Client::LocalizedText* _RoundNum; // 0x58
		::RPG::Client::LocalizedText* _RoundText; // 0x60
		::RPG::Client::LocalizedText* _MatchIndexTitle; // 0x68
		::RPG::Client::LocalizedText* _MapText; // 0x70
		::UnityEngine::UI::Image* _TrackImage; // 0x78
		::UnityEngine::Transform* _RankRoot; // 0x80
		::RPG::Client::StaticListView* _RankListView; // 0x88
		::RPG::Client::StaticListView* _TargetListView; // 0x90
		::RPG::Client::LocalizedText* _TargetTitle; // 0x98
		::RPG::Client::LocalizedText* _BtnGoText; // 0xA0
		::UnityEngine::Transform* _BtnGoDisable; // 0xA8
		::UnityEngine::Transform* _TopTabArea; // 0xB0
		::RPG::Client::LocalizedText* _Tab1TextSelected; // 0xB8
		::RPG::Client::LocalizedText* _Tab2TextSelected; // 0xC0
		::RPG::Client::AnimatorButton* _BtnExit; // 0xC8
		::RPG::Client::AnimatorButton* _BtnGo; // 0xD0
		::RPG::Client::AnimatorButton* _BtnGamepadSwitchAvatar; // 0xD8
		::RPG::Client::AnimatorButton* _BtnGamepadSkillCheck; // 0xE0
		::RPG::Client::UIFollow3DTarget* _SwitchAvatarFollowTarget; // 0xE8
		::RPG::Client::UIFollow3DTarget* _SkillCheckFollowTarget; // 0xF0
		::RPG::Client::B51Racing::MonoB51RacingReadyDriverPanel* _DriverPanel; // 0xF8
		::UnityEngine::GameObject* _BGContentPoint; // 0x100
		::UnityEngine::Transform* _CamFollowPoint; // 0x108
		::UnityEngine::Animation* _BGCarAnimation; // 0x110
		::UnityEngine::Transform* _BGCarRoot; // 0x118
		::System::Boolean _HasStartedEnteringMatchRaid; // 0x120
		::System::Boolean _targetListViewInitialized; // 0x121
		::System::Boolean _rankListViewInitialized; // 0x122
		::System::Collections::Generic::List_1<::Class_1_A67090E7C81489C5*>* _cachedTargets; // 0x128
		::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* _cachedRankEntries; // 0x130
		::Class_0_16E4307DCC419505_1413* _SceneToken; // 0x138
		::Class_1_E2E6EA8FA1A071A6* _ReadyPageCarAppearanceHelper; // 0x140
		::Class_0_16E4307DCC419505_1414* _CameraService; // 0x148
		::Class_0_16E4307DCC419505_1411* _SceneService; // 0x150
		::Class_0_16E4307DCC419505_1306* _CarService; // 0x158
		::System::Single _BaseFov169; // 0x160
		::Cinemachine::CinemachineVirtualCamera* _ReadyPageVCam; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONDESTROY_OFFSET))(this);
		}

		::System::Void OnExitClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONEXITCLICK_OFFSET))(this);
		}

		::System::Boolean _OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBACKPRESSED_OFFSET))(this);
		}

		::System::Void OnStartRaceClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONSTARTRACECLICK_OFFSET))(this);
		}

		::System::Void _OnStartEnterMatchRaid(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONSTARTENTERMATCHRAID_OFFSET))(this, a1);
		}

		::System::Void OnGamepadSwitchAvatarClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSWITCHAVATARCLICK_OFFSET))(this);
		}

		::System::Void OnGamepadSkillCheckClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSKILLCHECKCLICK_OFFSET))(this);
		}

		::System::Void OnTabSelect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONTABSELECT_OFFSET))(this, a1);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void _ApplyStaticTextIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYSTATICTEXTIDS_OFFSET))(this);
		}

		::System::Void _ApplyTabState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYTABSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshMapArea(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHMAPAREA_OFFSET))(this, a1);
		}

		::System::Void _RefreshTargetList(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHTARGETLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetTargetItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETTARGETITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshRankList(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHRANKLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetRankItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETRANKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshDriverPanel(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHDRIVERPANEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStartButton(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHSTARTBUTTON_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1418* _GetService()
		{
			return ((::Class_0_16E4307DCC419505_1418*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSERVICE_OFFSET))(this);
		}

		::System::Void _SetUpCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPCAMERA_OFFSET))(this);
		}

		::System::Void _AdaptCameraFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ADAPTCAMERAFOV_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void _SetUpReadyPageContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPREADYPAGECONTENT_OFFSET))(this);
		}

		::System::Void _TryInitDriverPanel(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__TRYINITDRIVERPANEL_OFFSET))(this, a1);
		}

		::System::Void _AcquireSceneToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ACQUIRESCENETOKEN_OFFSET))(this);
		}

		::System::Void _ReleaseTransientToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__RELEASETRANSIENTTOKEN_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1414* _GetCameraService()
		{
			return ((::Class_0_16E4307DCC419505_1414*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCAMERASERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1411* _GetSceneService()
		{
			return ((::Class_0_16E4307DCC419505_1411*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSCENESERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1306* _GetCarService()
		{
			return ((::Class_0_16E4307DCC419505_1306*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCARSERVICE_OFFSET))(this);
		}

		::System::Void _OnExitClick_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONEXITCLICK_B__52_0_OFFSET))(this);
		}
	};
}
