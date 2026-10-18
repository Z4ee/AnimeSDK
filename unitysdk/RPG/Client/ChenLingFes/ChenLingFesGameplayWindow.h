#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_1294FEF8E985635C;
class Class_1_3692E67E590B5BD6;
class Class_1_43BD383C98B4C0C5_244;
class Class_1_43BD383C98B4C0C5_245;
class Class_1_43BD383C98B4C0C5_254;
class Class_1_43BD383C98B4C0C5_255;
class Class_1_7550321EC955956C;
class Class_1_93F9CEFB0F5A5F64;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::ChenLingFes { class ChenLingFes3DBtnContainerControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayBuffPanelControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayDeleteControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayFeverControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayFunctionBtnControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayOperateItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayProgressInfoControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayRankInfoControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayScoreInfoControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplaySelectPanelControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemDetailControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesToastContainerControl; }
namespace RPG::UINavigation { class UINavigationShortcut; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAB1360)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CHECKANDPLAYSTARTBTNSWITCH_OFFSET UNITYSDK_OFFSET(0xCAB3800)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CHECKCANFOCUS_OFFSET UNITYSDK_OFFSET(0xCAB4740)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xCAAEDF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__GETVIRTUALCURSORSWITCHACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xCAB5100)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__INITZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xCAB19E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONADJUSTVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0xCAB3740)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCAB3FF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAAFDF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBTNVIRTUALCURSORSWITCH_OFFSET UNITYSDK_OFFSET(0xCAB48C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xCAB25D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xCAB23B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCAB2320)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCAB2D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCAB20B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONEXPANDVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0xCAB37A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONFLUSHTUTORIALTRIGGERCHECKMESSAGE_OFFSET UNITYSDK_OFFSET(0xCAB2C50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAAEEE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONITEMSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xCAB2920)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONMANUALENDDRAGMESSAGE_OFFSET UNITYSDK_OFFSET(0xCAB4860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONRESETUINAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xCAB4090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xCAB2A80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONSTARTVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0xCAB3620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONTICK_OFFSET UNITYSDK_OFFSET(0xCAB39C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONUPDATEJOYSTICKSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCAB43F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHBTNVIRTUALCURSORSWITCHHINT_OFFSET UNITYSDK_OFFSET(0xCAB3480)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHFUNCBTNCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0xCAB11C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHRETURNACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCAB4980)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHSTARTBTNVISIBLE_OFFSET UNITYSDK_OFFSET(0xCAB1890)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRSHFUNCBTNVISIBLE_OFFSET UNITYSDK_OFFSET(0xCAB16A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__RESETNAVIGATIONTOGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xCAB4340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__RESETSHORTCUTHINTORDER_OFFSET UNITYSDK_OFFSET(0xCAB3D20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SCHEDULERESETNAVIGATIONTOGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xCAB4280)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SETVIRTUALCURSORSWITCHSHORTCUTVISIBLE_OFFSET UNITYSDK_OFFSET(0xCAB5070)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SHOWITEMDETAIL_OFFSET UNITYSDK_OFFSET(0xCAB29E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0xCAB1410)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SYNCNAVIGATIONBYJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0xCAB4510)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFLUSHTUTORIALTRIGGERS_OFFSET UNITYSDK_OFFSET(0xCAB2D10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFOCUSOPERATEITEMNAVIGATION_OFFSET UNITYSDK_OFFSET(0xCAB2B00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFOCUSVIRTUALCURSORNAVIGATION_OFFSET UNITYSDK_OFFSET(0xCAB4580)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKCANCEL_B__7_0_OFFSET UNITYSDK_OFFSET(0xCAB5240)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKCANCEL_B__7_1_OFFSET UNITYSDK_OFFSET(0xCAB52C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKEXIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xCAB51F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___SCHEDULERESETNAVIGATIONTOGAMEPLAYPAGE_B__63_0_OFFSET UNITYSDK_OFFSET(0xCAB5300)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___TRYFOCUSVIRTUALCURSORNAVIGATION_B__69_0_OFFSET UNITYSDK_OFFSET(0xCAB5410)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayWindow_TypeDefinitionIndex = 81332;

	class ChenLingFesGameplayWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		// static const ::System::Int32 _OverrideShortCutHintOrder = 0x19; // 0x0
		// static const ::System::String* _ActionHintFakeMouse; // 0x0
		// static const ::System::String* _ActionHintFakeMouseClose; // 0x0
		::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelControl* _BuffPanelControl; // 0x48
		::UnityEngine::UI::Text* _TextAdjust; // 0x50
		::RPG::Client::AnimatorButton* _ExpandBtn; // 0x58
		::UnityEngine::UI::Button* _ExitBtn; // 0x60
		::UnityEngine::UI::Button* _ConfirmBtn; // 0x68
		::RPG::UINavigation::UINavigationZoneManager* _NavigationZoneManager; // 0x70
		::RPG::Client::ChenLingFes::ChenLingFes3DBtnContainerControl* _Btn3DContainerControl; // 0x78
		::UnityEngine::UI::Text* _TextAdjustRemainCount; // 0x80
		::Sofa::ShortCutHintControl* _ShortCutHintControl; // 0x88
		::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoControl* _ProgressInfoControl; // 0x90
		::UnityEngine::Transform* _NodeFuncPanel; // 0x98
		::UnityEngine::Transform* _NodeExpandTip; // 0xA0
		::UnityEngine::Animation* _AnimAdjustTip; // 0xA8
		::RPG::Client::ChenLingFes::ChenLingFesToastContainerControl* _ToastContainerControl; // 0xB0
		::UnityEngine::Animation* _StartBtnSwitch; // 0xB8
		::UnityEngine::Transform* _NodeExpandEffect; // 0xC0
		::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverControl* _FeverControl; // 0xC8
		::UnityEngine::Animation* _AnimExpandTip; // 0xD0
		::UnityEngine::UI::Button* _StartBtn; // 0xD8
		::UnityEngine::Transform* _NodeAdjustTip; // 0xE0
		::RPG::Client::VirtualCursor* _VirtualCursor; // 0xE8
		::UnityEngine::UI::Button* _BtnVirtualCursorSwitch; // 0xF0
		::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreInfoControl* _ScoreInfoControl; // 0xF8
		::Class_1_1294FEF8E985635C* _Messenger; // 0x100
		::UnityEngine::UI::Button* _CancelBtn; // 0x108
		::RPG::Client::ChenLingFes::ChenLingFesGameplayOperateItemControl* _OperateItemControl; // 0x110
		::UnityEngine::Transform* _NodeConfirmPanel; // 0x118
		::RPG::Client::ChenLingFes::ChenLingFesItemDetailControl* _ItemDetailControl; // 0x120
		::UnityEngine::UI::Button* _AdjustBtn; // 0x128
		::RPG::Client::ChenLingFes::ChenLingFesGameplayDeleteControl* _DeleteControl; // 0x130
		::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl* _SelectPanel; // 0x138
		::RPG::Client::ChenLingFes::ChenLingFesGameplayFunctionBtnControl* _FunctionBtnControl; // 0x140
		::RPG::Client::ChenLingFes::ChenLingFesGameplayRankInfoControl* _RankInfoControl; // 0x148
		::RPG::UINavigation::UINavigationShortcut* _ShortcutVirtualCursorSwitch; // 0x150
		::UnityEngine::UI::Text* _TextExpandRemainCount; // 0x158
		::UnityEngine::UI::Text* _TextExpand; // 0x160
		::RPG::Client::UIStateCtrl* _StateCtrlExpandTip; // 0x168
		::RPG::UINavigation::UINavigationZone* _NavigationZoneVirtualCursor; // 0x170
		::System::Boolean _PendingExpandTutorialTrigger; // 0x178
		::System::Boolean _PendingAdjustTutorialTrigger; // 0x179
		::System::Boolean _ResetNavigationToGameplayPageScheduled; // 0x17A
		::System::Boolean _PendingStartTutorialTrigger; // 0x17B
		::System::Boolean _ShowStartBtn; // 0x17C

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameplayViewModel* a1, ::Class_1_1294FEF8E985635C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayViewModel*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnCloseMessage(::Class_1_43BD383C98B4C0C5_245* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_245*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnClickExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLICKEXIT_OFFSET))(this);
		}

		::System::Void _OnClickCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONCLICKCANCEL_OFFSET))(this);
		}

		::System::Void _OnItemShowDetail(::Class_1_7550321EC955956C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7550321EC955956C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONITEMSHOWDETAIL_OFFSET))(this, a1);
		}

		::System::Void _OnSelectItem(::Class_1_3692E67E590B5BD6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3692E67E590B5BD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void _ShowItemDetail(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SHOWITEMDETAIL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFlushTutorialTriggerCheckMessage(::Class_1_43BD383C98B4C0C5_244* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_244*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONFLUSHTUTORIALTRIGGERCHECKMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefrshFuncBtnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRSHFUNCBTNVISIBLE_OFFSET))(this);
		}

		::System::Void _RefreshStartBtnVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHSTARTBTNVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _CheckAndPlayStartBtnSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CHECKANDPLAYSTARTBTNSWITCH_OFFSET))(this);
		}

		::System::Void _RefreshFuncBtnCountText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHFUNCBTNCOUNTTEXT_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnStartVisibilityChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONSTARTVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAdjustVisibilityChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONADJUSTVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnExpandVisibilityChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONEXPANDVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _TryFlushTutorialTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFLUSHTUTORIALTRIGGERS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void _InitZoneManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__INITZONEMANAGER_OFFSET))(this);
		}

		::System::Boolean _OnBackPressedCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBACKPRESSEDCALLBACK_OFFSET))(this);
		}

		::System::Void _OnResetUINavigationMessage(::Class_1_43BD383C98B4C0C5_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_254*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONRESETUINAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _ScheduleResetNavigationToGameplayPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SCHEDULERESETNAVIGATIONTOGAMEPLAYPAGE_OFFSET))(this);
		}

		::System::Void _ResetNavigationToGameplayPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__RESETNAVIGATIONTOGAMEPLAYPAGE_OFFSET))(this);
		}

		::System::Void _OnUpdateJoyStickStateMessage(::Class_1_93F9CEFB0F5A5F64* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_93F9CEFB0F5A5F64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONUPDATEJOYSTICKSTATEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SyncNavigationByJoyStickState(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SYNCNAVIGATIONBYJOYSTICKSTATE_OFFSET))(this, a1);
		}

		::System::Void _TryFocusOperateItemNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFOCUSOPERATEITEMNAVIGATION_OFFSET))(this);
		}

		::System::Boolean _CheckCanFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__CHECKCANFOCUS_OFFSET))(this);
		}

		::System::Void _TryFocusVirtualCursorNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__TRYFOCUSVIRTUALCURSORNAVIGATION_OFFSET))(this);
		}

		::System::Void _OnManualEndDragMessage(::Class_1_43BD383C98B4C0C5_255* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_255*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONMANUALENDDRAGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBtnVirtualCursorSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__ONBTNVIRTUALCURSORSWITCH_OFFSET))(this);
		}

		::System::Void _RefreshBtnVirtualCursorSwitchHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHBTNVIRTUALCURSORSWITCHHINT_OFFSET))(this);
		}

		::System::String* _GetVirtualCursorSwitchActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__GETVIRTUALCURSORSWITCHACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void _SetVirtualCursorSwitchShortcutVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__SETVIRTUALCURSORSWITCHSHORTCUTVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshReturnActionHints(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__REFRESHRETURNACTIONHINTS_OFFSET))(this, a1);
		}

		::System::Void _ResetShortCutHintOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW__RESETSHORTCUTHINTORDER_OFFSET))(this);
		}

		::System::Void __OnClickExit_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKEXIT_B__6_0_OFFSET))(this, a1);
		}

		::System::Void __OnClickCancel_b__7_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKCANCEL_B__7_0_OFFSET))(this, a1);
		}

		::System::Void __OnClickCancel_b__7_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___ONCLICKCANCEL_B__7_1_OFFSET))(this, a1);
		}

		::System::Void __ScheduleResetNavigationToGameplayPage_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___SCHEDULERESETNAVIGATIONTOGAMEPLAYPAGE_B__63_0_OFFSET))(this);
		}

		::System::Void __TryFocusVirtualCursorNavigation_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___TRYFOCUSVIRTUALCURSORNAVIGATION_B__69_0_OFFSET))(this);
		}
	};
}
