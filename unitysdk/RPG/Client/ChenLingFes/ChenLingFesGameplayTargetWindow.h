#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_207;
class Class_1_43BD383C98B4C0C5_214;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetDotControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB614440)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB613450)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONANIMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB614F00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB614340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6144C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB614C60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB613550)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONSWITCHTOWEEK_OFFSET UNITYSDK_OFFSET(0xB614CF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYGLOBALTOWEEKTRANSITION_OFFSET UNITYSDK_OFFSET(0xB614DE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0xB615FE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__REFRESHBYCURRENTPAGE_OFFSET UNITYSDK_OFFSET(0xB614B80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPGLOBALTITLE_OFFSET UNITYSDK_OFFSET(0xB6155A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPLEFTALIGNEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB616390)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0xB6162B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPSTATES_OFFSET UNITYSDK_OFFSET(0xB615190)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKITEM_OFFSET UNITYSDK_OFFSET(0xB615960)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKTITLE_OFFSET UNITYSDK_OFFSET(0xB615730)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SHOWCURWEEKITEMREFRESH_OFFSET UNITYSDK_OFFSET(0xB615D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB616590)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB616530)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetWindow_TypeDefinitionIndex = 73987;

	class ChenLingFesGameplayTargetWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		// static const ::System::String* _ToCurrentStageAnimStateName; // 0x0
		// static const ::System::String* _AnimEventChangeRootType; // 0x0
		// static const ::System::String* _AnimEventCurrent; // 0x0
		// static const ::System::String* _AnimEventProgressIncrease; // 0x0
		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemControl* _CurTargetItemControl; // 0x40
		::UnityEngine::UI::Button* _BtnContinue; // 0x48
		::UnityEngine::RectTransform* _ProgressNormal; // 0x50
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x58
		::UnityEngine::UI::Button* _BtnEmpty; // 0x60
		::UnityEngine::UI::Text* _TextWeekSubTitle; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemControl*>* _WeekItemControls; // 0x70
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x78
		::UnityEngine::UI::Text* _TextGlobalTitle; // 0x80
		::RPG::Client::UIStateCtrl* _StageModeStateCtrl; // 0x88
		::RPG::Client::UIValueChangeAnimation* _UIValueChangeAnimation; // 0x90
		::RPG::Client::UIStateCtrl* _ProgressStateCtrl; // 0x98
		::UnityEngine::Animation* _Anim; // 0xA0
		::UnityEngine::Transform* _NodeWeekSubTitleStar; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetDotControl*>* _WeekDotControls; // 0xB0
		::UnityEngine::RectTransform* _ProgressEndless; // 0xB8
		::UnityEngine::UI::Text* _TextWeekTitle; // 0xC0
		::RPG::Client::MonoAnimationTrigger* _AnimTrigger; // 0xC8
		::System::Boolean _IsWaitingSwitchAnimEvent; // 0xD0
		::System::Boolean _HasSwitchedToWeekInTransition; // 0xD1
		::System::Boolean _IsInSwitchTransition; // 0xD2

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Boolean _OnBackPressedCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBACKPRESSEDCALLBACK_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnClose(::Class_1_43BD383C98B4C0C5_207* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_207*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchToWeek(::Class_1_43BD383C98B4C0C5_214* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONSWITCHTOWEEK_OFFSET))(this, a1);
		}

		::System::Void _PlayGlobalToWeekTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYGLOBALTOWEEKTRANSITION_OFFSET))(this);
		}

		::System::Void _OnAnimCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONANIMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _RefreshByCurrentPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__REFRESHBYCURRENTPAGE_OFFSET))(this);
		}

		::System::Void _SetupStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPSTATES_OFFSET))(this);
		}

		::System::Void _SetupGlobalTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPGLOBALTITLE_OFFSET))(this);
		}

		::System::Void _SetupWeekTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKTITLE_OFFSET))(this);
		}

		::System::Void _SetupWeekItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKITEM_OFFSET))(this);
		}

		::System::Void _ShowCurWeekItemRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SHOWCURWEEKITEMREFRESH_OFFSET))(this);
		}

		::System::Void _SetupProgressBar(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPPROGRESSBAR_OFFSET))(this, a1);
		}

		::System::Void _PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYPROGRESSANIM_OFFSET))(this);
		}

		static ::System::Void _SetupLeftAlignedProgress(::UnityEngine::RectTransform* a1, ::System::Single a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPLEFTALIGNEDPROGRESS_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
