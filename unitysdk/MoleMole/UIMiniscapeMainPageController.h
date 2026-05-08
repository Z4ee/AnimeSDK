#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_60638234271CCDB8_8;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_DOPLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x151EC820)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x151E95C0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x151EB880)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITENTRYBTNS_OFFSET UNITYSDK_OFFSET(0x151EB050)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITGAMEPADCUSTOMLIST_OFFSET UNITYSDK_OFFSET(0x151E9160)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x151E96B0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_NEEDPLAYLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x151E9E60)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151E95D0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x151E9C80)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x151EAFE0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x151EA360)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151E9BC0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151E9660)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151E9B50)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0x151EBB60)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_OPENMISSIONPAGE_OFFSET UNITYSDK_OFFSET(0x151EBD20)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_PLAYLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0x151EA150)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x151EA3C0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETACTIVITYAVATARREWARDBTNS_OFFSET UNITYSDK_OFFSET(0x151EB500)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETLEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x151EBE70)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x151EC2A0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151ECB50)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITANDPLAYVIDEO_B__19_0_OFFSET UNITYSDK_OFFSET(0x151ED320)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x151ECBE0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_2_OFFSET UNITYSDK_OFFSET(0x151ECC40)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_3_OFFSET UNITYSDK_OFFSET(0x151ECDE0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__REFRESHVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x151ED0A0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151ED340)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x151ED3D0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x151ED3E0)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x151ED470)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151ED480)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151ED490)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151ED4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController_TypeDefinitionIndex = 39372;

	class UIMiniscapeMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BackVideoUrl; // 0x0
		::Class_2_60638234271CCDB8_8* _view; // 0x310
		::Class_1_E9529ED64113E4E9* _videoPlayerHelper; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _entryBtns; // 0x320
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _rewardBtn01; // 0x328
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _rewardBtn02; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitGamepadCustomList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITGAMEPADCUSTOMLIST_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OpenInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_OPENINFO_OFFSET))(this);
		}

		::System::Void OpenMissionPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_OPENMISSIONPAGE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, init);
		}

		::System::Void SetProgress(::System::Single progressValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETPROGRESS_OFFSET))(this, progressValue);
		}

		::System::Void SetActivityAvatarRewardBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETACTIVITYAVATARREWARDBTNS_OFFSET))(this);
		}

		::System::Void InitAndPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITANDPLAYVIDEO_OFFSET))(this);
		}

		::System::Void PlayLevelUpgrade(::System::Int32 prvLevel, ::System::Int32 curLevel, ::System::Int32 curExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_PLAYLEVELUPGRADE_OFFSET))(this, prvLevel, curLevel, curExp);
		}

		::System::Void SetLevelAndExp(::System::Int32 level, ::System::Int32 nextLevel, ::System::Int32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_SETLEVELANDEXP_OFFSET))(this, level, nextLevel, exp);
		}

		::System::Void DoPlayProgressAnim(::System::Single prvProgress, ::System::Single curProgress, ::System::Single duration, ::System::Action_1<::System::Single>* onSetProgress, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Single>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_DOPLAYPROGRESSANIM_OFFSET))(this, prvProgress, curProgress, duration, onSetProgress, onFinish);
		}

		::System::Boolean NeedPlayLevelUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_NEEDPLAYLEVELUPGRADE_OFFSET))(this);
		}

		::System::Void InitEntryBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER_INITENTRYBTNS_OFFSET))(this);
		}

		::System::Void _InitView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_0_OFFSET))(this);
		}

		::System::Void _InitView_b__11_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_2_OFFSET))(this, args);
		}

		::System::Void _InitView_b__11_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITVIEW_B__11_3_OFFSET))(this, args);
		}

		::System::Void _RefreshView_b__14_0(::System::Boolean isCanBuy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__REFRESHVIEW_B__14_0_OFFSET))(this, isCanBuy);
		}

		::System::Void _InitAndPlayVideo_b__19_0(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER__INITANDPLAYVIDEO_B__19_0_OFFSET))(this, helper);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
