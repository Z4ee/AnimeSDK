#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_486190703084CEB1.h"
#include "unitysdk/Enum_3_63AD998EF2DC353E.h"
#include "unitysdk/Enum_3_87B8941B71E58844.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_D2DB98B2EB62E318.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISkillButtonBaseController_BtnCDState.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_BBBB2C2BE00F33C3;
class Class_1_FEB95EB7BCDEE1B8;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_B9D5951434CC70FD;
class Class_3_BA709FB56ED5FAC4;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CACHEENTITYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x13E28590)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CALCDSTATE_OFFSET UNITYSDK_OFFSET(0x13E2C320)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNHOLDPARAMS_OFFSET UNITYSDK_OFFSET(0x13E2B840)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNINPUT_OFFSET UNITYSDK_OFFSET(0x13E2EC80)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLICKHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x13E2E7F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOBRANCHSKILLBTNREFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2C900)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOREFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2CB40)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETCDRECOVERFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x13E2E6F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETSPECIALFEEDBACKANIMATIONCLIPPATH_OFFSET UNITYSDK_OFFSET(0x13E300D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETUIHIDEITEMTAG_OFFSET UNITYSDK_OFFSET(0x13E296F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET UNITYSDK_OFFSET(0x13E28060)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x13E30120)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x13E28040)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET UNITYSDK_OFFSET(0x13E28070)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNINDEX_OFFSET UNITYSDK_OFFSET(0x13E280E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNTYPE_OFFSET UNITYSDK_OFFSET(0x13E28140)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x13E28080)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13E28050)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13E281A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITDRAGINPUTSUPPORT_OFFSET UNITYSDK_OFFSET(0x13E2AB50)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET UNITYSDK_OFFSET(0x13E28A70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNVIEW_OFFSET UNITYSDK_OFFSET(0x13E299D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x13E28C10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x13E2F810)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x13E2F0F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONSHOWUI_OFFSET UNITYSDK_OFFSET(0x13E2F450)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSTREAMINGPAGEBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x13E2ED30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x13E2A920)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x13E2BD60)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONCLICKCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E2EBC0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13E2AA50)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13E29FB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWNCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E2EC00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13E2A620)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x13E2A760)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUPCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E2EC40)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13E2A7E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x13E2B8F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONSKILLBUTTONACTIVESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13E29450)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWNFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x13E2E930)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13E2E9C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x13E2EAA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x13E2EB30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUPFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x13E2EA20)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13E2AA00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E29A10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E28910)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E29110)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_OVERWRITELAYOUTADAPTORWITH_OFFSET UNITYSDK_OFFSET(0x13E2FB00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REBINDSKILLINFO_OFFSET UNITYSDK_OFFSET(0x13E2AAD0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHBRANCHSKILLBTNNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2DC80)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2C460)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCOUNTCDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2CC30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHFORCECDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2D6E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHINPUTDEVICE_OFFSET UNITYSDK_OFFSET(0x13E29ED0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2D1A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSILENCECDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2D210)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBTNNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x13E2E100)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x13E2F920)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x13E2F860)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x13E2AEC0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0x13E2B750)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REGISTERBUTTONENABLECHANGE_OFFSET UNITYSDK_OFFSET(0x13E28860)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SENDEVTSKILLBTNOPERATE_OFFSET UNITYSDK_OFFSET(0x13E2C650)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETRANDOMSKILLBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x13E2B550)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETSKILLBUTTONCDSTATE_OFFSET UNITYSDK_OFFSET(0x13E2E540)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13E281B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x13E29F50)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x13E2BDD0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TRYRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x13E28540)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_USESKILL_OFFSET UNITYSDK_OFFSET(0x13E2E870)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13E30130)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_0_OFFSET UNITYSDK_OFFSET(0x13E30510)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_1_OFFSET UNITYSDK_OFFSET(0x13E30680)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_0_OFFSET UNITYSDK_OFFSET(0x13E301B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_1_OFFSET UNITYSDK_OFFSET(0x13E302D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_2_OFFSET UNITYSDK_OFFSET(0x13E30380)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_3_OFFSET UNITYSDK_OFFSET(0x13E30460)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_4_OFFSET UNITYSDK_OFFSET(0x13E304E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13E308D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E30820)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E30830)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E30840)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_TypeDefinitionIndex = 65479;

	class UISkillButtonBaseController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Single clickLightTime; // 0x310
		::System::String* _ButtonSkillName_k__BackingField; // 0x318
		::MoleMole::LogicButtonInputType _KeyButtonCode_k__BackingField; // 0x320
		::MoleMole::Battle::Entity* _btnOwnerEntity; // 0x328
		::Class_2_1A39E1B51756BF41* _btnIcon; // 0x330
		::UnityEngine::UI::Image* _trigger; // 0x338
		::Class_2_B4378B46E0020E85* _button; // 0x340
		::System::Action_1<::System::Boolean>* _onButtonEnableChange; // 0x348
		::UnityEngine::UI::Text* _cdText; // 0x350
		::Class_2_1A39E1B51756BF41* _ringImg; // 0x358
		::Class_2_1A39E1B51756BF41* _silenceRecoverMaskImg; // 0x360
		::Class_2_1A39E1B51756BF41* _forceRecoverMaskImg; // 0x368
		::UnityEngine::UI::Text* _epCntText; // 0x370
		::UnityEngine::GameObject* _skillNumPanel; // 0x378
		::UnityEngine::Transform* _skillLoopLight; // 0x380
		::UnityEngine::Transform* _skillLight; // 0x388
		::UnityEngine::Transform* _endMaskTrans; // 0x390
		::UnityEngine::Animator* _skillBtnAnimator; // 0x398
		::UnityEngine::Animator* _skillBtnAnimatorForSpecialFeedback; // 0x3A0
		::Class_1_BBBB2C2BE00F33C3* _skillInfo; // 0x3A8
		::UnityEngine::RectTransform* _keyPanel; // 0x3B0
		::System::String* _uiHideItemTag; // 0x3B8
		::System::Boolean isStayNoneCDView; // 0x3C0
		::System::Boolean _isAwaked; // 0x3C1
		::Class_3_BA709FB56ED5FAC4* _inputComponent; // 0x3C8
		::Class_3_B9D5951434CC70FD* _skillComponent; // 0x3D0
		::Class_3_3A3A95CA33F5CFBC* _dataComponent; // 0x3D8
		::System::Boolean _isHoldTriggered; // 0x3E0
		::System::Boolean _buttonHoldBegin; // 0x3E1
		::System::Single _holdTime; // 0x3E4
		::System::Single _totalHoldTime; // 0x3E8
		::System::Single HOLD_TIME_THRESHOLD; // 0x3EC
		::System::Boolean _buttonClickTrigger; // 0x3F0
		::System::Boolean _buttonHoldRelease; // 0x3F1
		::MoleMole::UISkillButtonBaseController_BtnCDState _cdState; // 0x3F4
		::System::Boolean _isCDStateNeedReset; // 0x3F8
		::System::Boolean _isInSkillButtonCDState; // 0x3F9
		::System::Boolean isEquipSkill; // 0x3FA
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl; // 0x400
		::MoleMole::ButtonPressType _buttonPressType; // 0x408
		::System::Boolean _isKeyPressing; // 0x40C
		::System::Boolean _isTouchButtonDown; // 0x40D
		::System::Boolean _isToggleCurFrame; // 0x40E
		::System::Boolean _isTouchButtonDownCurFrame; // 0x40F
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x410
		::UnityEngine::AnimatorOverrideController* _animatorOverrideController; // 0x418
		::Class_1_FEB95EB7BCDEE1B8* _dragInputSupport; // 0x420

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_HandleInputInEarlyUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_HANDLEINPUTINEARLYUPDATE_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::String* get_ButtonSkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_KeyButtonCode()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET))(this);
		}

		::MoleMole::Config::InputType get_SkillInputType()
		{
			return ((::MoleMole::Config::InputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLINPUTTYPE_OFFSET))(this);
		}

		::System::Int32 get_SkillBtnIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNINDEX_OFFSET))(this);
		}

		::Enum_3_D2DB98B2EB62E318 get_SkillBtnType()
		{
			return ((::Enum_3_D2DB98B2EB62E318(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNTYPE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* get__ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET__OWNERENTITY_OFFSET))(this);
		}

		::System::Void set__ownerEntity(::MoleMole::Battle::Entity* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SET__OWNERENTITY_OFFSET))(this, value);
		}

		::System::Void RegisterButtonEnableChange(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REGISTERBUTTONENABLECHANGE_OFFSET))(this, callback);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnSkillButtonActiveStateChanged(::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONSKILLBUTTONACTIVESTATECHANGED_OFFSET))(this, ignoreAnimation);
		}

		::System::Void InitSkillBtnView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNVIEW_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInputDevice(::Enum_3_63AD998EF2DC353E inputDeviceUsage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63AD998EF2DC353E))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHINPUTDEVICE_OFFSET))(this, inputDeviceUsage);
		}

		::System::Boolean ShouldSkillButtonHandleInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET))(this, inputAction);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void InitSkillButton(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBUTTON_OFFSET))(this, ownerEntity);
		}

		::System::Void RebindSKillInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REBINDSKILLINFO_OFFSET))(this);
		}

		::System::Void CacheEntityComponents(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CACHEENTITYCOMPONENTS_OFFSET))(this, ownerEntity);
		}

		::System::Void InitDragInputSupport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITDRAGINPUTSUPPORT_OFFSET))(this);
		}

		::System::String* GetUIHideItemTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETUIHIDEITEMTAG_OFFSET))(this);
		}

		::System::Void RefreshSkillButton(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTON_OFFSET))(this, ownerEntity);
		}

		::System::Void SetRandomSkillBtnActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETRANDOMSKILLBTNACTIVE_OFFSET))(this, isActive);
		}

		::System::Void RefreshSkillInfo(::Class_1_BBBB2C2BE00F33C3* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBBB2C2BE00F33C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLINFO_OFFSET))(this, skillInfo);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void RefreshCDView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCDVIEW_OFFSET))(this);
		}

		::System::Void DoBranchSkillBtnRefreshCdView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOBRANCHSKILLBTNREFRESHCDVIEW_OFFSET))(this);
		}

		::System::Void DoRefreshCdView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOREFRESHCDVIEW_OFFSET))(this);
		}

		::MoleMole::UISkillButtonBaseController_BtnCDState CalCDState(::Class_1_BBBB2C2BE00F33C3* skillInfo)
		{
			return ((::MoleMole::UISkillButtonBaseController_BtnCDState(*)(::PVOID, ::Class_1_BBBB2C2BE00F33C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CALCDSTATE_OFFSET))(this, skillInfo);
		}

		::System::Void RefreshNoneCDView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHNONECDVIEW_OFFSET))(this);
		}

		::System::Void RefreshSkillBtnNoneCDView(::Class_1_BBBB2C2BE00F33C3* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBBB2C2BE00F33C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBTNNONECDVIEW_OFFSET))(this, skillInfo);
		}

		::System::Void RefreshBranchSkillBtnNoneCDView(::Class_1_BBBB2C2BE00F33C3* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBBB2C2BE00F33C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHBRANCHSKILLBTNNONECDVIEW_OFFSET))(this, skillInfo);
		}

		::System::Void RefreshSilenceCDView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSILENCECDVIEW_OFFSET))(this);
		}

		::System::Void RefreshForceCDView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHFORCECDVIEW_OFFSET))(this);
		}

		::System::Single GetCdRecoverFillAmount(::Enum_3_486190703084CEB1 cdType)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_486190703084CEB1))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETCDRECOVERFILLAMOUNT_OFFSET))(this, cdType);
		}

		::System::Void RefreshCountCDView(::Class_1_BBBB2C2BE00F33C3* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBBB2C2BE00F33C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCOUNTCDVIEW_OFFSET))(this, skillInfo);
		}

		::System::Collections::IEnumerator* ClickHighLight()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLICKHIGHLIGHT_OFFSET))(this);
		}

		::System::Void UseSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_USESKILL_OFFSET))(this);
		}

		::System::Void OnTouchPointerDownFromButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWNFROMBUTTON_OFFSET))(this);
		}

		::System::Void OnTouchPointerUpFromButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUPFROMBUTTON_OFFSET))(this);
		}

		::System::Void OnTouchPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWN_OFFSET))(this);
		}

		::System::Void OnTouchPointerUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUP_OFFSET))(this);
		}

		::System::Void OnTouchPointerEnter(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERENTER_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerExit(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTEREXIT_OFFSET))(this, pointerEventData);
		}

		::System::Void OnClickCustomCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONCLICKCUSTOMCALLBACK_OFFSET))(this);
		}

		::System::Void OnPointerDownCustomCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWNCUSTOMCALLBACK_OFFSET))(this);
		}

		::System::Void OnPointerUpCustomCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUPCUSTOMCALLBACK_OFFSET))(this);
		}

		::System::Void OnPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWN_OFFSET))(this);
		}

		::System::Void OnPointerPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERPRESS_OFFSET))(this);
		}

		::System::Void OnPointerUp(::System::Boolean instantClear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUP_OFFSET))(this, instantClear);
		}

		::System::Void TryResetButton(::System::Boolean instantClear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TRYRESETBUTTON_OFFSET))(this, instantClear);
		}

		::System::Void SendEvtSkillBtnOperate(::Enum_3_87B8941B71E58844 skillBtnOperateType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_87B8941B71E58844))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SENDEVTSKILLBTNOPERATE_OFFSET))(this, skillBtnOperateType);
		}

		::System::Void ClearBtnInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNINPUT_OFFSET))(this);
		}

		::System::Void ClearBtnHoldParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNHOLDPARAMS_OFFSET))(this);
		}

		::System::Void InitSkillBtnSpecialFeedback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET))(this);
		}

		::System::Void SetSkillButtonCDState(::System::Boolean cdState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETSKILLBUTTONCDSTATE_OFFSET))(this, cdState);
		}

		::System::Boolean IsStreamingPageBlockInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSTREAMINGPAGEBLOCKINPUT_OFFSET))(this);
		}

		::System::Boolean IsSkillButtonInputEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONINPUTENABLED_OFFSET))(this);
		}

		::System::Boolean IsSkillButtonShowUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONSHOWUI_OFFSET))(this);
		}

		::System::Boolean IsSkillButtonHintEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONHINTENABLE_OFFSET))(this);
		}

		::System::Void RefreshSkillButtonView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONVIEW_OFFSET))(this);
		}

		::System::Void RefreshSkillButtonHintEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONHINTENABLE_OFFSET))(this);
		}

		::System::Void OverwriteLayoutAdaptorWith(::MoleMole::UIWindowController* other, ::MoleMole::AdaptorShowType showType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_OVERWRITELAYOUTADAPTORWITH_OFFSET))(this, other, showType);
		}

		::System::String* GetSpecialFeedbackAnimationClipPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETSPECIALFEEDBACKANIMATIONCLIPPATH_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__40_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__40_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_1_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__40_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__40_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_3_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__40_4(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_4_OFFSET))(this, args);
		}

		::System::Void _InitDragInputSupport_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_0_OFFSET))(this);
		}

		::System::Void _InitDragInputSupport_b__52_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_1_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}
	};
}
