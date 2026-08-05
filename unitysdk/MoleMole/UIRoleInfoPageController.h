#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_LeftLogic.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_RightLogic.h"
#include "unitysdk/MoleMole/UIRoleInfoPageController_UIRoleInfo_SubType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_2CCC5D7984CDCED4;
class Class_2_1824EF69C8E376A3;
class Class_2_C2B4B123B5A9B78A;
class Class_2_F9471F3BB5949932_2;
class UIControllerExtensionData;
namespace MoleMole { class MonoBPLevelAnimation; }
namespace MoleMole { class UIBPPageTopBtnWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIMindscapeWidgetController; }
namespace MoleMole { class UIRoleChangeWidgetController; }
namespace MoleMole { class UIRoleInfoDataContext; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace MoleMole { class UIRoleInfoPageController_AnimationFadeOutFadeInGroup; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_APPLYEQUIPFORCEFLAGS_OFFSET UNITYSDK_OFFSET(0x17598730)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKBASICBTN_OFFSET UNITYSDK_OFFSET(0x17598650)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0x175986C0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKSKILLBTN_OFFSET UNITYSDK_OFFSET(0x175988D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_CLOSESUBTYPE_OFFSET UNITYSDK_OFFSET(0x1759FA60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_FINISHCURRENTNEWBIEHANDLE_OFFSET UNITYSDK_OFFSET(0x1759DBC0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETAWAKENLEVELPICPATH_OFFSET UNITYSDK_OFFSET(0x1759D050)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETFADEOUTTIMEDETAIL_OFFSET UNITYSDK_OFFSET(0x1759B150)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x17599390)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_1_OFFSET UNITYSDK_OFFSET(0x17598600)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_OFFSET UNITYSDK_OFFSET(0x175A0420)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPECONTROL_OFFSET UNITYSDK_OFFSET(0x175A1A30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPESHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x1759AF10)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17597B60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_LASTCONTEXT_OFFSET UNITYSDK_OFFSET(0x17597B80)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_SWITCHINTERVAL_OFFSET UNITYSDK_OFFSET(0x1759A220)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TABBUTTONGROUP_OFFSET UNITYSDK_OFFSET(0x17597B70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x17597B00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17597AF0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_HIDEFORMODELCAMERAKITTOOL_OFFSET UNITYSDK_OFFSET(0x175A1580)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITANIMGROUP_OFFSET UNITYSDK_OFFSET(0x1759AD70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1759BC30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET UNITYSDK_OFFSET(0x175A1460)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0x175A1340)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x175A12E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x1759AB70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONAVATARCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x17599450)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x1759F6B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBASICBTN_OFFSET UNITYSDK_OFFSET(0x1759FE80)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKENTERAVATARAWAKE_OFFSET UNITYSDK_OFFSET(0x1759C7A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0x175A0B30)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKMAINBTN_OFFSET UNITYSDK_OFFSET(0x1759F670)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKSKILLBTN_OFFSET UNITYSDK_OFFSET(0x175A0580)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17597B90)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONEQUIPCHANGED_OFFSET UNITYSDK_OFFSET(0x1759D360)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1759B1A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHINTCLICKED_OFFSET UNITYSDK_OFFSET(0x1759D3B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x175A1210)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1759F4B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINTERNALPAGECHANGED_OFFSET UNITYSDK_OFFSET(0x1759D710)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1759D6C0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x175A1610)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLVBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1759E3D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1759E950)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x1759E5B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0x1759DAD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET UNITYSDK_OFFSET(0x1759D9E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17597C20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSTRATEGYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1759C800)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1759E190)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1759B8A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1759D0E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_PLAYFADEANIMDETAIL_OFFSET UNITYSDK_OFFSET(0x175991F0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x1759A3E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RECORDEQUIPTABHINTED_OFFSET UNITYSDK_OFFSET(0x17599FD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REDUCEMODELBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x1759AAC0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHAWAKENLEVELINFO_OFFSET UNITYSDK_OFFSET(0x1759CBE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET UNITYSDK_OFFSET(0x1759EA70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x1759A8B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHSKILLVIEW_OFFSET UNITYSDK_OFFSET(0x1759E710)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17598940)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1759A110)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARMODEL_OFFSET UNITYSDK_OFFSET(0x1759A320)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETCOUNTDOWNTIMER_OFFSET UNITYSDK_OFFSET(0x1759A960)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SAVESUBTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x175A0520)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGCOLORBYCURAVATAR_OFFSET UNITYSDK_OFFSET(0x1759E9B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGLINECOLOR_OFFSET UNITYSDK_OFFSET(0x1759ECE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x1759B020)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETLEFTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x1759EC50)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETROLEJUMPDATA_OFFSET UNITYSDK_OFFSET(0x175A1880)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETRTSHADOW_OFFSET UNITYSDK_OFFSET(0x175984E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETSELECTIONAVATAR_OFFSET UNITYSDK_OFFSET(0x1759A900)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATEINFOBTNTEXT_OFFSET UNITYSDK_OFFSET(0x175A10E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATESTRATEGYBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1759CA20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A1C00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175A1AC0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_0_OFFSET UNITYSDK_OFFSET(0x175A1C10)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_1_OFFSET UNITYSDK_OFFSET(0x175A1C50)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONCLICKBACKBTN_B__100_1_OFFSET UNITYSDK_OFFSET(0x175A2000)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONLVBTNCLICKHANDLE_B__89_0_OFFSET UNITYSDK_OFFSET(0x175A1D60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONUIINIT_B__73_0_OFFSET UNITYSDK_OFFSET(0x175A1C60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__PROCESSUIAVATAR_B__115_0_OFFSET UNITYSDK_OFFSET(0x175A2270)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER__SETBLOCKINPUT_B__107_0_OFFSET UNITYSDK_OFFSET(0x175A21A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x175A2330)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x175A2320)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175A2340)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x175A23D0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x175A2460)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x175A2490)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x175A2520)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175A2530)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175A2540)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175A2550)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_TypeDefinitionIndex = 72186;

	class UIRoleInfoPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_TAB_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController_TypeDefinitionIndex)->GetStaticField(0xCEE0);
		}
		// static const ::System::Int32 LAST_STEP_NEWBIE_ID = 0x96; // 0x0
		// static const ::System::String* _fadeInAnimName; // 0x0
		// static const ::System::String* _fadeOutAnimName; // 0x0
		// static const ::System::String* _fadeInAnimNameDetail; // 0x0
		// static const ::System::String* _fadeOutAnimNameDetail; // 0x0
		// static const ::System::String* LevelPicPrefixPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIBaseController*>* _roleSubType; // 0x318
		::Class_2_C2B4B123B5A9B78A* _roleUnit; // 0x320
		::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType _curSubType; // 0x328
		::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType _targetSubType; // 0x32C
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x330
		::System::String* _fromType; // 0x338
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x340
		::UnityEngine::Animation* _animation; // 0x348
		::System::Single _fadeOutTime; // 0x350
		::System::Single _fadeOutTimeDetail; // 0x354
		::System::Boolean _previewMode; // 0x358
		::System::Boolean _friendPreviewMode; // 0x359
		::System::Boolean _hideMainButton; // 0x35A
		::MoleMole::UIRoleInfoPageContext* _lastContext; // 0x360
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* allItems; // 0x368
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType, ::MoleMole::UIGeneralPopUpHintWidgetController*>* _popUpHintCtrlDict; // 0x370
		::MoleMole::UIRoleChangeWidgetController* _roleChangeWidget; // 0x378
		::MoleMole::UIMindscapeWidgetController* _mindscapeWidget; // 0x380
		::System::Boolean _internalPageOpen; // 0x388
		::MoleMole::UIRoleInfoPageController_LeftLogic m_leftLogic; // 0x38C
		::MoleMole::UIRoleInfoPageController_RightLogic m_rightLogic; // 0x390
		::System::Boolean _isLoadingRTModel; // 0x394
		::System::Single m_countDownTimer; // 0x398
		::System::Boolean m_modelBlockInput; // 0x39C
		::UIControllerExtensionData* m_ctrlData; // 0x3A0
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_allAnimGroup; // 0x3A8
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_infoAnimGroup; // 0x3B0
		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* m_modelAnimGroup; // 0x3B8
		::System::Boolean m_useNewSwitchLogic; // 0x3C0
		::System::Single m_resetAvatarDeley; // 0x3C4
		::System::Boolean m_avatarSettled; // 0x3C8
		::Foundation::Coroutine::CoroutineHandle resetAvatarHandle; // 0x3CC
		::Foundation::Coroutine::CoroutineHandle changeColorHandle; // 0x3D0
		::MoleMole::MonoBPLevelAnimation* m_colorAnim; // 0x3D8
		::System::Boolean m_hideSkillTabHint; // 0x3E0
		::Foundation::Coroutine::CoroutineHandle m_countDownCoroutine; // 0x3E4
		::Class_2_F9471F3BB5949932_2* _view; // 0x3E8
		::MoleMole::UIBPPageTopBtnWidgetController* _strategyBtnWidget; // 0x3F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButtonGroup* get_TabButtonGroup()
		{
			return ((::UnityEngine::UI::Extension::UITabButtonGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_TABBUTTONGROUP_OFFSET))(this);
		}

		::MoleMole::UIRoleInfoPageContext* get_LastContext()
		{
			return ((::MoleMole::UIRoleInfoPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_LASTCONTEXT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::String* GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_DBF2701137F18AA6 fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::Void SetRtShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETRTSHADOW_OFFSET))(this);
		}

		::System::Void OnAvatarChangeHandle(::Class_1_2CCC5D7984CDCED4* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CCC5D7984CDCED4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONAVATARCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetSelectionAvatar(::Class_2_1824EF69C8E376A3* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETSELECTIONAVATAR_OFFSET))(this, avatar);
		}

		::System::Void ResetCountDownTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETCOUNTDOWNTIMER_OFFSET))(this);
		}

		::System::Void ReduceModelBlockInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REDUCEMODELBLOCKINPUT_OFFSET))(this);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Void InitAnimGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITANIMGROUP_OFFSET))(this);
		}

		::System::Void ResetAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARINFO_OFFSET))(this);
		}

		::System::Void ResetAvatarModel(::System::Single setAvatarBlockInputLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RESETAVATARMODEL_OFFSET))(this, setAvatarBlockInputLen);
		}

		::System::Void PlayFadeAnimDetail(::System::Boolean isfadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_PLAYFADEANIMDETAIL_OFFSET))(this, isfadeIn);
		}

		::System::Single GetFadeOutTimeDetail()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETFADEOUTTIMEDETAIL_OFFSET))(this);
		}

		::System::Void AutoClickBasicBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKBASICBTN_OFFSET))(this);
		}

		::System::Void AutoClickSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKSKILLBTN_OFFSET))(this);
		}

		::System::Void AutoClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_AUTOCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void ApplyEquipForceFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_APPLYEQUIPFORCEFLAGS_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickEnterAvatarAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKENTERAVATARAWAKE_OFFSET))(this);
		}

		::System::Void OnStrategyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSTRATEGYBTNCLICKED_OFFSET))(this);
		}

		::System::Void UpdateStrategyBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATESTRATEGYBTNSTATE_OFFSET))(this);
		}

		::System::Void RefreshAwakenLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHAWAKENLEVELINFO_OFFSET))(this);
		}

		::System::String* GetAwakenLevelPicPath(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETAWAKENLEVELPICPATH_OFFSET))(this, level);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEquipChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONEQUIPCHANGED_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnInternalPageChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINTERNALPAGECHANGED_OFFSET))(this, args);
		}

		::System::Void OnShowPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void OnShowFriendPreviewModeHint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONSHOWFRIENDPREVIEWMODEHINT_OFFSET))(this, args);
		}

		::System::Void FinishCurrentNewbieHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_FINISHCURRENTNEWBIEHANDLE_OFFSET))(this, args);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnLvBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLVBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnMindscapeCloseOverHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEOVERHANDLE_OFFSET))(this);
		}

		::System::Void OnMindscapeCloseHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONMINDSCAPECLOSEHANDLE_OFFSET))(this);
		}

		::System::Void RefreshSkillView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHSKILLVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean needSetColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, needSetColor);
		}

		::System::Void SetBGColorByCurAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGCOLORBYCURAVATAR_OFFSET))(this);
		}

		::System::Void SetLeftLineColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETLEFTLINECOLOR_OFFSET))(this);
		}

		::System::Void SetBGLineColor(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBGLINECOLOR_OFFSET))(this, str);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnClickMainBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKMAINBTN_OFFSET))(this);
		}

		::System::Void OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void CloseSubType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_CLOSESUBTYPE_OFFSET))(this);
		}

		::System::Void RefreshRedPoint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHREDPOINT_OFFSET))(this, args);
		}

		::System::Void OnHintClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONHINTCLICKED_OFFSET))(this);
		}

		::System::Single get_SwitchInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GET_SWITCHINTERVAL_OFFSET))(this);
		}

		::System::Void SetBlockInput(::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETBLOCKINPUT_OFFSET))(this, length);
		}

		::System::Void OnClickBasicBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKBASICBTN_OFFSET))(this);
		}

		::System::Void OnClickSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKSKILLBTN_OFFSET))(this);
		}

		::System::Void OnClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void OnInfoBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONINFOBTNCLICKED_OFFSET))(this);
		}

		::System::Void UpdateInfoBtnText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_UPDATEINFOBTNTEXT_OFFSET))(this);
		}

		::System::Void RecordEquipTabHinted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_RECORDEQUIPTABHINTED_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::Class_2_1824EF69C8E376A3* avatarData, ::System::Int32 showTypeIndex, ::System::Boolean blockUntilLoadDone)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarData, showTypeIndex, blockUntilLoadDone);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Boolean IsHollowGameRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ISHOLLOWGAMEROOM_OFFSET))(this);
		}

		::System::Void HideForModelCameraKitTool(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_HIDEFORMODELCAMERAKITTOOL_OFFSET))(this, isActive);
		}

		::System::Void RefreshMainCityBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_REFRESHMAINCITYBTN_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::String* GetSubCtrlName(::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType subType)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_OFFSET))(this, subType);
		}

		static ::System::String* GetSubCtrlName_1(::MoleMole::UIBaseController* ctrl)
		{
			return ((::System::String*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBCTRLNAME_1_OFFSET))(ctrl);
		}

		::MoleMole::UIRoleInfoDataContext* GetSubTypeShowContext()
		{
			return ((::MoleMole::UIRoleInfoDataContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPESHOWCONTEXT_OFFSET))(this);
		}

		::System::Void SaveSubTypeIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SAVESUBTYPEINDEX_OFFSET))(this);
		}

		::System::Void SetRoleJumpData(::System::Int32 itemID, ::System::Int32 needCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_SETROLEJUMPDATA_OFFSET))(this, itemID, needCount);
		}

		::MoleMole::UIBaseController* GetSubTypeControl(::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType subType)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_UIRoleInfo_SubType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_GETSUBTYPECONTROL_OFFSET))(this, subType);
		}

		::System::Void _OnAvatarChangeHandle_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_0_OFFSET))(this);
		}

		::System::Void _OnAvatarChangeHandle_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONAVATARCHANGEHANDLE_B__44_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__73_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONUIINIT_B__73_0_OFFSET))(this);
		}

		::System::Void _OnLvBtnClickHandle_b__89_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONLVBTNCLICKHANDLE_B__89_0_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__100_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__ONCLICKBACKBTN_B__100_1_OFFSET))(this);
		}

		::System::Void _SetBlockInput_b__107_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__SETBLOCKINPUT_B__107_0_OFFSET))(this);
		}

		::System::Void _ProcessUIAvatar_b__115_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER__PROCESSUIAVATAR_B__115_0_OFFSET))(this);
		}

		::System::Boolean __base_get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_DBF2701137F18AA6 P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
