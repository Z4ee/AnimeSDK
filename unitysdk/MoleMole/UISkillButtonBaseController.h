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
class Class_3_3B42BC0680587011;
class Class_3_B8F2A25A5ADF5CEE;
class Class_3_B9D5951434CC70FD;
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

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CACHEENTITYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17B89E80)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CALCDSTATE_OFFSET UNITYSDK_OFFSET(0x17B8DCB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNHOLDPARAMS_OFFSET UNITYSDK_OFFSET(0x17B8D1D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNINPUT_OFFSET UNITYSDK_OFFSET(0x17B907B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLICKHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x17B90320)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOBRANCHSKILLBTNREFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8E330)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOREFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8E570)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETCDRECOVERFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x17B90220)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETSPECIALFEEDBACKANIMATIONCLIPPATH_OFFSET UNITYSDK_OFFSET(0x17B91BE0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETUIHIDEITEMTAG_OFFSET UNITYSDK_OFFSET(0x17B8AFF0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET UNITYSDK_OFFSET(0x17B89950)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x17B91C30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x17B89930)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET UNITYSDK_OFFSET(0x17B89960)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNINDEX_OFFSET UNITYSDK_OFFSET(0x17B899D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNTYPE_OFFSET UNITYSDK_OFFSET(0x17B89A30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17B89970)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17B89940)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x17B89A90)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITDRAGINPUTSUPPORT_OFFSET UNITYSDK_OFFSET(0x17B8C440)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET UNITYSDK_OFFSET(0x17B8A360)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNVIEW_OFFSET UNITYSDK_OFFSET(0x17B8B2D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x17B8A500)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x17B91330)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x17B90C20)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONSHOWUI_OFFSET UNITYSDK_OFFSET(0x17B90F70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSTREAMINGPAGEBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x17B90860)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x17B8C210)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B8D6F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONCLICKCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17B906F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B8C340)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17B8B8B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWNCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17B90730)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x17B8BF10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x17B8C050)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUPCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17B90770)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x17B8C0D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x17B8D280)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONSKILLBUTTONACTIVESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17B8AD50)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWNFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x17B90460)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x17B904F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x17B905D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x17B90660)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUPFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x17B90550)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUP_OFFSET UNITYSDK_OFFSET(0x17B8C2F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B8B310)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B8A200)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B8AA10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_OVERWRITELAYOUTADAPTORWITH_OFFSET UNITYSDK_OFFSET(0x17B91620)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REBINDSKILLINFO_OFFSET UNITYSDK_OFFSET(0x17B8C3C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHBRANCHSKILLBTNNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8F7B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8DDF0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCOUNTCDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8E660)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHFORCECDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8F1C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHINPUTDEVICE_OFFSET UNITYSDK_OFFSET(0x17B8B7D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8EC20)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSILENCECDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8EC90)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBTNNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x17B8FC30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x17B91440)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x17B91380)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x17B8C7B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0x17B8D0E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REGISTERBUTTONENABLECHANGE_OFFSET UNITYSDK_OFFSET(0x17B8A150)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SENDEVTSKILLBTNOPERATE_OFFSET UNITYSDK_OFFSET(0x17B8E080)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETRANDOMSKILLBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x17B8CEE0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETSKILLBUTTONCDSTATE_OFFSET UNITYSDK_OFFSET(0x17B90070)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x17B89AA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x17B8B850)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x17B8D760)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TRYRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x17B89E30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_USESKILL_OFFSET UNITYSDK_OFFSET(0x17B903A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B91C40)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_0_OFFSET UNITYSDK_OFFSET(0x17B92020)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__52_1_OFFSET UNITYSDK_OFFSET(0x17B92190)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_0_OFFSET UNITYSDK_OFFSET(0x17B91CC0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_1_OFFSET UNITYSDK_OFFSET(0x17B91DE0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_2_OFFSET UNITYSDK_OFFSET(0x17B91E90)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_3_OFFSET UNITYSDK_OFFSET(0x17B91F70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__40_4_OFFSET UNITYSDK_OFFSET(0x17B91FF0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17B923E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B92330)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B92340)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B92350)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_TypeDefinitionIndex = 83323;

	class UISkillButtonBaseController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Single clickLightTime; // 0x318
		::System::String* _ButtonSkillName_k__BackingField; // 0x320
		::MoleMole::LogicButtonInputType _KeyButtonCode_k__BackingField; // 0x328
		::MoleMole::Battle::Entity* _btnOwnerEntity; // 0x330
		::Class_2_1A39E1B51756BF41* _btnIcon; // 0x338
		::UnityEngine::UI::Image* _trigger; // 0x340
		::Class_2_B4378B46E0020E85* _button; // 0x348
		::System::Action_1<::System::Boolean>* _onButtonEnableChange; // 0x350
		::UnityEngine::UI::Text* _cdText; // 0x358
		::Class_2_1A39E1B51756BF41* _ringImg; // 0x360
		::Class_2_1A39E1B51756BF41* _silenceRecoverMaskImg; // 0x368
		::Class_2_1A39E1B51756BF41* _forceRecoverMaskImg; // 0x370
		::UnityEngine::UI::Text* _epCntText; // 0x378
		::UnityEngine::GameObject* _skillNumPanel; // 0x380
		::UnityEngine::Transform* _skillLoopLight; // 0x388
		::UnityEngine::Transform* _skillLight; // 0x390
		::UnityEngine::Transform* _endMaskTrans; // 0x398
		::UnityEngine::Animator* _skillBtnAnimator; // 0x3A0
		::UnityEngine::Animator* _skillBtnAnimatorForSpecialFeedback; // 0x3A8
		::Class_1_BBBB2C2BE00F33C3* _skillInfo; // 0x3B0
		::UnityEngine::RectTransform* _keyPanel; // 0x3B8
		::System::String* _uiHideItemTag; // 0x3C0
		::System::Boolean isStayNoneCDView; // 0x3C8
		::System::Boolean _isAwaked; // 0x3C9
		::Class_3_3B42BC0680587011* _inputComponent; // 0x3D0
		::Class_3_B9D5951434CC70FD* _skillComponent; // 0x3D8
		::Class_3_B8F2A25A5ADF5CEE* _dataComponent; // 0x3E0
		::System::Boolean _isHoldTriggered; // 0x3E8
		::System::Boolean _buttonHoldBegin; // 0x3E9
		::System::Single _holdTime; // 0x3EC
		::System::Single _totalHoldTime; // 0x3F0
		::System::Single HOLD_TIME_THRESHOLD; // 0x3F4
		::System::Boolean _buttonClickTrigger; // 0x3F8
		::System::Boolean _buttonHoldRelease; // 0x3F9
		::MoleMole::UISkillButtonBaseController_BtnCDState _cdState; // 0x3FC
		::System::Boolean _isCDStateNeedReset; // 0x400
		::System::Boolean _isInSkillButtonCDState; // 0x401
		::System::Boolean isEquipSkill; // 0x402
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl; // 0x408
		::MoleMole::ButtonPressType _buttonPressType; // 0x410
		::System::Boolean _isKeyPressing; // 0x414
		::System::Boolean _isTouchButtonDown; // 0x415
		::System::Boolean _isToggleCurFrame; // 0x416
		::System::Boolean _isTouchButtonDownCurFrame; // 0x417
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x418
		::UnityEngine::AnimatorOverrideController* _animatorOverrideController; // 0x420
		::Class_1_FEB95EB7BCDEE1B8* _dragInputSupport; // 0x428

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
