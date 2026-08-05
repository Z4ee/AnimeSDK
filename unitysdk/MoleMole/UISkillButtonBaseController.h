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
#include "unitysdk/Struct_2_57B98928537D38DE_1.h"
#include "unitysdk/Struct_2_D4602BB15CF6D7C1.h"

class Class_1_BBBB2C2BE00F33C3;
class Class_1_FEB95EB7BCDEE1B8;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_B9D5951434CC70FD;
namespace MoleMole { class MonoUILayoutAdaptor; }
namespace MoleMole { class UIAdataporRectTransform; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_APPLYLAYOUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x16AAFF70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CACHEENTITYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x16AA8810)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CALCDSTATE_OFFSET UNITYSDK_OFFSET(0x16AAC360)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNHOLDPARAMS_OFFSET UNITYSDK_OFFSET(0x16AAB880)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_CLEARBTNINPUT_OFFSET UNITYSDK_OFFSET(0x16AADBF0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_DOREFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x16AAC9D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETCDRECOVERFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x16AAD6E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETSPECIALFEEDBACKANIMATIONCLIPPATH_OFFSET UNITYSDK_OFFSET(0x16AB0220)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETUIHIDEITEMTAG_OFFSET UNITYSDK_OFFSET(0x16AA9990)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET UNITYSDK_OFFSET(0x16AA82E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x16AB0270)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x16AA82C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET UNITYSDK_OFFSET(0x16AA82F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNINDEX_OFFSET UNITYSDK_OFFSET(0x16AA8360)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLBTNTYPE_OFFSET UNITYSDK_OFFSET(0x16AA83C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_SKILLINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x16AA8300)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16AA82D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16AA8420)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITDRAGINPUTSUPPORT_OFFSET UNITYSDK_OFFSET(0x16AAAE00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET UNITYSDK_OFFSET(0x16AA8D00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBTNVIEW_OFFSET UNITYSDK_OFFSET(0x16AA9C70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_INITSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x16AA8EA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x16AAE780)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x16AAE060)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSKILLBUTTONSHOWUI_OFFSET UNITYSDK_OFFSET(0x16AAE3C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ISSTREAMINGPAGEBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x16AADCA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x16AAABD0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x16AABDA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONCLICKCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x16AADB30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16AAAD00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16AAA250)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWNCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x16AADB70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x16AAA8D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x16AAAA10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUPCUSTOMCALLBACK_OFFSET UNITYSDK_OFFSET(0x16AADBB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x16AAAA90)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x16AAB930)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONSKILLBUTTONACTIVESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16AA96F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWNFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x16AAD8A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x16AAD930)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x16AADA10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x16AADAA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUPFROMBUTTON_OFFSET UNITYSDK_OFFSET(0x16AAD990)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONTOUCHPOINTERUP_OFFSET UNITYSDK_OFFSET(0x16AAACB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AA9CB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AA8BA0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AA93B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_OVERWRITELAYOUTADAPTORWITH_OFFSET UNITYSDK_OFFSET(0x16AAEA70)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_POPLAYOUTADAPTOROVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x16AAFA50)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_POPLAYOUTADAPTOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x16AAF9D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_PUSHLAYOUTADAPTOROVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x16AAF0D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_PUSHLAYOUTADAPTOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x16AAF040)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REBINDSKILLINFO_OFFSET UNITYSDK_OFFSET(0x16AAAD80)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCDVIEW_OFFSET UNITYSDK_OFFSET(0x16AAC4A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHCOUNTCDVIEW_OFFSET UNITYSDK_OFFSET(0x16AACAB0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHFORCECDVIEW_OFFSET UNITYSDK_OFFSET(0x16AAD160)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHINPUTDEVICE_OFFSET UNITYSDK_OFFSET(0x16AAA170)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x16AACE00)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSILENCECDVIEW_OFFSET UNITYSDK_OFFSET(0x16AACE60)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBTNNONECDVIEW_OFFSET UNITYSDK_OFFSET(0x16AAD4D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONHINTENABLE_OFFSET UNITYSDK_OFFSET(0x16AAE890)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x16AAE7D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x16AAB170)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0x16AAB790)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_REGISTERBUTTONENABLECHANGE_OFFSET UNITYSDK_OFFSET(0x16AA8AF0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SENDEVTSKILLBTNOPERATE_OFFSET UNITYSDK_OFFSET(0x16AAC720)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SETRANDOMSKILLBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x16AAB590)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SET__OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16AA8430)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x16AAA1F0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x16AABE10)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_TRYRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x16AA87C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_USESKILL_OFFSET UNITYSDK_OFFSET(0x16AAD7E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB0280)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__51_0_OFFSET UNITYSDK_OFFSET(0x16AB0670)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__51_1_OFFSET UNITYSDK_OFFSET(0x16AB07E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_0_OFFSET UNITYSDK_OFFSET(0x16AB0300)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_1_OFFSET UNITYSDK_OFFSET(0x16AB0430)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_2_OFFSET UNITYSDK_OFFSET(0x16AB04E0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_3_OFFSET UNITYSDK_OFFSET(0x16AB05C0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_4_OFFSET UNITYSDK_OFFSET(0x16AB0640)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16AB0A30)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AB0980)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AB0990)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AB09A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_TypeDefinitionIndex = 65491;

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
		::UnityEngine::Animator* _skillBtnAnimatorForSpecialFeedback; // 0x3A0
		::Class_1_BBBB2C2BE00F33C3* _skillInfo; // 0x3A8
		::UnityEngine::RectTransform* _keyPanel; // 0x3B0
		::System::String* _uiHideItemTag; // 0x3B8
		::System::Boolean isStayNoneCDView; // 0x3C0
		::System::Boolean _isAwaked; // 0x3C1
		::Class_3_3B42BC0680587011* _inputComponent; // 0x3C8
		::Class_3_B9D5951434CC70FD* _skillComponent; // 0x3D0
		::Class_3_707412604A129938* _dataComponent; // 0x3D8
		::System::Boolean _isHoldTriggered; // 0x3E0
		::System::Boolean _buttonHoldBegin; // 0x3E1
		::System::Single _holdTime; // 0x3E4
		::System::Single _totalHoldTime; // 0x3E8
		::System::Single HOLD_TIME_THRESHOLD; // 0x3EC
		::System::Boolean _buttonClickTrigger; // 0x3F0
		::System::Boolean _buttonHoldRelease; // 0x3F1
		::MoleMole::UISkillButtonBaseController_BtnCDState _cdState; // 0x3F4
		::System::Boolean _isCDStateNeedReset; // 0x3F8
		::System::Boolean isEquipSkill; // 0x3F9
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl; // 0x400
		::MoleMole::ButtonPressType _buttonPressType; // 0x408
		::System::Boolean _isKeyPressing; // 0x40C
		::System::Boolean _isTouchButtonDown; // 0x40D
		::System::Boolean _isToggleCurFrame; // 0x40E
		::System::Boolean _isTouchButtonDownCurFrame; // 0x40F
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x410
		::UnityEngine::AnimatorOverrideController* _animatorOverrideController; // 0x418
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::Struct_2_D4602BB15CF6D7C1>* _originalLayoutPositions; // 0x420
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::System::Collections::Generic::List_1<::Struct_2_57B98928537D38DE_1>*>* _layoutAdaptorOverrideStacks; // 0x428
		::Class_1_FEB95EB7BCDEE1B8* _dragInputSupport; // 0x430

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

		::System::Void PushLayoutAdaptorOverride(::System::String* tag, ::MoleMole::UIWindowController* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_PUSHLAYOUTADAPTOROVERRIDE_OFFSET))(this, tag, other);
		}

		::System::Void PopLayoutAdaptorOverride(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_POPLAYOUTADAPTOROVERRIDE_OFFSET))(this, tag);
		}

		::System::Void PushLayoutAdaptorOverride_1(::System::String* tag, ::MoleMole::UIWindowController* other, ::MoleMole::AdaptorShowType showType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIWindowController*, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_PUSHLAYOUTADAPTOROVERRIDE_1_OFFSET))(this, tag, other, showType);
		}

		::System::Void PopLayoutAdaptorOverride_1(::System::String* tag, ::MoleMole::AdaptorShowType showType, ::System::Boolean isSkipRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::AdaptorShowType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_POPLAYOUTADAPTOROVERRIDE_1_OFFSET))(this, tag, showType, isSkipRefresh);
		}

		::System::Void ApplyLayoutOverride(::MoleMole::MonoUILayoutAdaptor* adaptor, ::MoleMole::AdaptorShowType showType, ::MoleMole::UIAdataporRectTransform* rect, ::Struct_2_D4602BB15CF6D7C1 targetSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*, ::MoleMole::AdaptorShowType, ::MoleMole::UIAdataporRectTransform*, ::Struct_2_D4602BB15CF6D7C1))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_APPLYLAYOUTOVERRIDE_OFFSET))(this, adaptor, showType, rect, targetSnapshot);
		}

		::System::String* GetSpecialFeedbackAnimationClipPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GETSPECIALFEEDBACKANIMATIONCLIPPATH_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__39_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__39_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_1_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__39_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__39_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_3_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__39_4(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__ONUIOPEN_B__39_4_OFFSET))(this, args);
		}

		::System::Void _InitDragInputSupport_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__51_0_OFFSET))(this);
		}

		::System::Void _InitDragInputSupport_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__INITDRAGINPUTSUPPORT_B__51_1_OFFSET))(this);
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
