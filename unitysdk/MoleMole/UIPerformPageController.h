#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_EEB6F2355690A1CC.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_65;
class Class_2_79AE422BA06F6D26_65;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIMainStoryChapter3DModelController; }
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER_CACHEGROUPSALPHA_OFFSET UNITYSDK_OFFSET(0x18443380)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_DOSKIP_OFFSET UNITYSDK_OFFSET(0x18447040)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x18446890)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18443170)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0x18443200)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x18443180)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x18443190)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x18449F60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_PERFORMTYPE_OFFSET UNITYSDK_OFFSET(0x184437D0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x184431A0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18443160)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_INITSKIPBTNSETTING_OFFSET UNITYSDK_OFFSET(0x18444670)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ISALLOWINPUTPASSBYACTION_OFFSET UNITYSDK_OFFSET(0x18443210)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_LOADTIMELINEINITWORLDPOS_OFFSET UNITYSDK_OFFSET(0x18448810)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x18447270)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET UNITYSDK_OFFSET(0x18449720)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18443290)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONPLAYCGEND_OFFSET UNITYSDK_OFFSET(0x18448120)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONREALSTARTPERFORM_OFFSET UNITYSDK_OFFSET(0x18447F10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184437F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSTRIGGER_OFFSET UNITYSDK_OFFSET(0x18446FA0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSUP_OFFSET UNITYSDK_OFFSET(0x18446FF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18448E80)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18445A60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18443320)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184468E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCAMERASHOT_OFFSET UNITYSDK_OFFSET(0x18444BF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCHAPTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x18445580)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x184499E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x18449C10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYTIMELINECUTSCENE_OFFSET UNITYSDK_OFFSET(0x18445710)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x18444EB0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x184466A0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_PRESTARTPERFORM_OFFSET UNITYSDK_OFFSET(0x18447650)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_RECOVERTIMELINEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x18448D00)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_RESETGROUPSALPHA_OFFSET UNITYSDK_OFFSET(0x18446DA0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDENDCOMMTOSERVER_OFFSET UNITYSDK_OFFSET(0x18449440)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDSTARTCOMMTOSERVER_OFFSET UNITYSDK_OFFSET(0x184458E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETFULLSCREENCONNECTCUTSCENE_OFFSET UNITYSDK_OFFSET(0x18449800)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x18444B70)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETONSKIPACTION_OFFSET UNITYSDK_OFFSET(0x184497B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETPRESSSKIPBTNTIME_OFFSET UNITYSDK_OFFSET(0x18446CD0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SETVIDEOACTIVE_OFFSET UNITYSDK_OFFSET(0x18447410)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x18449F70)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_PERFORMTYPE_OFFSET UNITYSDK_OFFSET(0x184437E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWBLACKMASK_OFFSET UNITYSDK_OFFSET(0x184436B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWSKIP_OFFSET UNITYSDK_OFFSET(0x184475B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWWHITEMASK_OFFSET UNITYSDK_OFFSET(0x18443740)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_SKIPFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x18449B50)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_STOPPERFORM_OFFSET UNITYSDK_OFFSET(0x18445D30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_TRIGGERCALLBACKSWHENSTARTFADEOUT_OFFSET UNITYSDK_OFFSET(0x184495B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYCLOSEPOPTIP_OFFSET UNITYSDK_OFFSET(0x184462E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYTRIGGERPLOTPLAYPERFORMJUMP_OFFSET UNITYSDK_OFFSET(0x184492E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATELONGPRESSSKIP_OFFSET UNITYSDK_OFFSET(0x18446A60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18446A10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CACHECLEAN_OFFSET UNITYSDK_OFFSET(0x184466F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1844A030)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18449F80)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__46_0_OFFSET UNITYSDK_OFFSET(0x1844A350)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__46_1_OFFSET UNITYSDK_OFFSET(0x1844A390)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONSKIP_B__49_0_OFFSET UNITYSDK_OFFSET(0x1844A3A0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_0_OFFSET UNITYSDK_OFFSET(0x1844A070)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_1_OFFSET UNITYSDK_OFFSET(0x1844A080)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_2_OFFSET UNITYSDK_OFFSET(0x1844A0F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYCHAPTERTIMELINE_B__39_0_OFFSET UNITYSDK_OFFSET(0x1844A160)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYFADEINANIMATION_B__59_0_OFFSET UNITYSDK_OFFSET(0x1844A3E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__40_1_OFFSET UNITYSDK_OFFSET(0x1844A170)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__40_2_OFFSET UNITYSDK_OFFSET(0x1844A180)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_G__INFORMTIMELINEMANAGERTOSTART_40_0_OFFSET UNITYSDK_OFFSET(0x18448B10)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__45_0_OFFSET UNITYSDK_OFFSET(0x1844A230)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__45_1_OFFSET UNITYSDK_OFFSET(0x1844A260)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER__SENDSTARTCOMMTOSERVER_B__106_0_OFFSET UNITYSDK_OFFSET(0x1844A410)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x1844A420)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ISALLOWINPUTPASSBYACTION_OFFSET UNITYSDK_OFFSET(0x1844A430)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1844A4E0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1844A570)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1844A580)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1844A640)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1844A650)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x1844A6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController_TypeDefinitionIndex = 45491;

	class UIPerformPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_FullScreenVideoBlackMaskFadeInLongVersion()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPerformPageController_TypeDefinitionIndex)->GetStaticField(0x33160);
		}
		// static const ::System::String* FullScreenVideoFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoFadeOut; // 0x0
		// static const ::System::String* GeneralBlackMaskFadeIn; // 0x0
		// static const ::System::String* GeneralBlackMaskFadeOut; // 0x0
		// static const ::System::String* FullScreenVideoBlackMaskFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoBlackMaskFadeOut; // 0x0
		// static const ::System::String* FullScreenVideoSpecialFadeIn; // 0x0
		// static const ::System::String* FullScreenVideoSpecialFadeOut; // 0x0
		// static const ::System::String* FullScreenVideo1SFadeOut; // 0x0
		::MoleMole::UIMainStoryChapter3DModelController* _chapter3DModelController; // 0x318
		::Enum_3_EEB6F2355690A1CC _PerformType_k__BackingField; // 0x320
		::System::Boolean _needSaveTimelineWorldPos; // 0x324
		::UnityEngine::Vector3 _initWorldPos; // 0x328
		::MoleMole::UIVideoWidgetController* _videoWidgetController; // 0x338
		::System::Boolean _isVideoPlaying; // 0x340
		::Class_2_79AE422BA06F6D26_65* _view; // 0x348
		::System::Int32 curPerformID; // 0x350
		::System::Int64 curPerformUID; // 0x358
		::System::Int32 plotPlayType; // 0x360
		::System::Boolean _isPlayEnd; // 0x364
		::System::Single _showSkipTime; // 0x368
		::System::Boolean isInitUrl; // 0x36C
		::System::String* fadeInAnimation; // 0x370
		::System::String* fadeOutAnimation; // 0x378
		::System::Boolean _NeedCache_k__BackingField; // 0x380
		::System::Boolean _connectCutScene; // 0x381
		::Class_1_43BD383C98B4C0C5_65* param; // 0x388
		::MoleMole::UIGeneralTipsPopWindowController* popTipCtr; // 0x390
		::System::Boolean _isIgnoreInput; // 0x398
		::System::Boolean _isAllowInputPass; // 0x399
		::Enum_3_0277FE49450CA4D5 _cursorHideState; // 0x39C
		::System::Action* _onSkip; // 0x3A0
		::System::Boolean _isLongPressingMenuBtn; // 0x3A8
		::System::Boolean _clickFromLongPress; // 0x3A9
		::System::Single _pressedTime; // 0x3AC
		::System::Single TOTAL_FILL_TIME; // 0x3B0
		::System::Boolean _skipBtnAllowClick; // 0x3B4
		::System::Boolean _isFakeSeamlessMode; // 0x3B5
		::Il2CppArray<::UnityEngine::CanvasGroup*>* _groups; // 0x3B8
		::Il2CppArray<::System::Single>* _groupsAlpha; // 0x3C0
		::UnityEngine::Vector2 _topFramePos; // 0x3C8
		::UnityEngine::Vector2 _bottomFramePos; // 0x3D0
		::UnityEngine::Vector2 _skipBtnPos; // 0x3D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::System::Boolean IsAllowInputPassByAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ISALLOWINPUTPASSBYACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ShowBlackMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWBLACKMASK_OFFSET))(this);
		}

		::System::Void ShowWhiteMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWWHITEMASK_OFFSET))(this);
		}

		::Enum_3_EEB6F2355690A1CC get_PerformType()
		{
			return ((::Enum_3_EEB6F2355690A1CC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_PERFORMTYPE_OFFSET))(this);
		}

		::System::Void set_PerformType(::Enum_3_EEB6F2355690A1CC value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_PERFORMTYPE_OFFSET))(this, value);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void TryClosePopTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYCLOSEPOPTIP_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_65* GetContext()
		{
			return ((::Class_1_43BD383C98B4C0C5_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GETCONTEXT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetIgnoreInput(::System::Boolean isIgnoreInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETIGNOREINPUT_OFFSET))(this, isIgnoreInput);
		}

		::System::Void InitSkipBtnSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_INITSKIPBTNSETTING_OFFSET))(this);
		}

		::System::Void CacheGroupsAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_CACHEGROUPSALPHA_OFFSET))(this);
		}

		::System::Void ResetGroupsAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_RESETGROUPSALPHA_OFFSET))(this);
		}

		::System::Void OnSkipBtnLongPressTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSTRIGGER_OFFSET))(this);
		}

		::System::Void OnSkipBtnLongPressUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIPBTNLONGPRESSUP_OFFSET))(this);
		}

		::System::Void UpdateLongPressSkip(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_UPDATELONGPRESSSKIP_OFFSET))(this, deltaTime);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Double SetPressSkipBtnTime(::System::Single time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETPRESSSKIPBTNTIME_OFFSET))(this, time);
		}

		::System::Void PlayCameraShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCAMERASHOT_OFFSET))(this);
		}

		::System::Void PlayChapterTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYCHAPTERTIMELINE_OFFSET))(this);
		}

		::System::Void PlayTimelineCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYTIMELINECUTSCENE_OFFSET))(this);
		}

		::System::Void LoadTimelineInitWorldPos(::UnityEngine::Vector3 targetPos, ::System::Action* onSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_LOADTIMELINEINITWORLDPOS_OFFSET))(this, targetPos, onSuccess);
		}

		::System::Void RecoverTimelineWorldPos(::System::Action* onSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_RECOVERTIMELINEWORLDPOS_OFFSET))(this, onSuccess);
		}

		::System::Void PlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYVIDEO_OFFSET))(this);
		}

		::System::Void OnRealStartPerform(::UnityEngine::Transform* rootTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONREALSTARTPERFORM_OFFSET))(this, rootTrans);
		}

		::System::Void PreStartPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PRESTARTPERFORM_OFFSET))(this);
		}

		::System::Void ShowSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SHOWSKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONSKIP_OFFSET))(this);
		}

		::System::Void DoSkip(::System::Boolean ignorePerformJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_DOSKIP_OFFSET))(this, ignorePerformJump);
		}

		::System::Void TryTriggerPlotPlayPerformJump(::System::Boolean ignorePerformJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_TRYTRIGGERPLOTPLAYPERFORMJUMP_OFFSET))(this, ignorePerformJump);
		}

		::System::Void StopPerform(::Enum_3_EEB6F2355690A1CC performType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_STOPPERFORM_OFFSET))(this, performType);
		}

		::System::Void OnPlayCGEnd(::Enum_3_EEB6F2355690A1CC performType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EEB6F2355690A1CC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONPLAYCGEND_OFFSET))(this, performType);
		}

		::System::Void TriggerCallbacksWhenStartFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_TRIGGERCALLBACKSWHENSTARTFADEOUT_OFFSET))(this);
		}

		::System::Void OnClosePerformPageFromOutside(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_ONCLOSEPERFORMPAGEFROMOUTSIDE_OFFSET))(this, args);
		}

		::System::Void SetOnSkipAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETONSKIPACTION_OFFSET))(this, action);
		}

		::System::Void SetFullScreenConnectCutScene(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETFULLSCREENCONNECTCUTSCENE_OFFSET))(this, callback);
		}

		::System::Void SetVideoActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SETVIDEOACTIVE_OFFSET))(this, active);
		}

		::System::Single PlayFadeInAnimation(::System::Boolean blackMask)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEINANIMATION_OFFSET))(this, blackMask);
		}

		::System::Void SkipFadeInAnimation(::System::Boolean blackMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SKIPFADEINANIMATION_OFFSET))(this, blackMask);
		}

		::System::Single PlayFadeOutAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void _CacheClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__CACHECLEAN_OFFSET))(this);
		}

		::System::Void SendStartCommToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDSTARTCOMMTOSERVER_OFFSET))(this);
		}

		::System::Void SendEndCommToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER_SENDENDCOMMTOSERVER_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__27_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__27_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_1_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__27_2(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONUIOPEN_B__27_2_OFFSET))(this, _);
		}

		::System::Void _PlayChapterTimeLine_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYCHAPTERTIMELINE_B__39_0_OFFSET))(this);
		}

		::System::Void _PlayTimelineCutScene_g__InformTimelineManagerToStart_40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_G__INFORMTIMELINEMANAGERTOSTART_40_0_OFFSET))(this);
		}

		::System::Void _PlayTimelineCutScene_b__40_1(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__40_1_OFFSET))(this, trans);
		}

		::System::Void _PlayTimelineCutScene_b__40_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYTIMELINECUTSCENE_B__40_2_OFFSET))(this);
		}

		::System::Void _PlayVideo_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__45_0_OFFSET))(this);
		}

		::System::Void _PlayVideo_b__45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYVIDEO_B__45_1_OFFSET))(this);
		}

		::System::Void _OnRealStartPerform_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__46_0_OFFSET))(this);
		}

		::System::Void _OnRealStartPerform_b__46_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONREALSTARTPERFORM_B__46_1_OFFSET))(this);
		}

		::System::Void _OnSkip_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__ONSKIP_B__49_0_OFFSET))(this);
		}

		::System::Void _PlayFadeInAnimation_b__59_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__PLAYFADEINANIMATION_B__59_0_OFFSET))(this);
		}

		::System::Void _SendStartCommToServer_b__106_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER__SENDSTARTCOMMTOSERVER_B__106_0_OFFSET))(this, uid);
		}

		::Enum_3_0277FE49450CA4D5 __base_get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean __base_IsAllowInputPassByAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ISALLOWINPUTPASSBYACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___BASE_POSTRELEASEUI_OFFSET))(this);
		}
	};
}
