#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_79F6D62CE30E3F8E_48;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOITEMUSE_OFFSET UNITYSDK_OFFSET(0x14EEB750)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOPOWERACTION_OFFSET UNITYSDK_OFFSET(0x14EEB7C0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOPURCHASE_OFFSET UNITYSDK_OFFSET(0x14EEB680)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14EE9120)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14EE9110)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_INITNUMINFOCONTENT_OFFSET UNITYSDK_OFFSET(0x14EEB120)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONCLICKSETTOMAX_OFFSET UNITYSDK_OFFSET(0x14EEBC20)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EE9460)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x14EEC0F0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x14EEC1E0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x14EEBEF0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTFIELDDESELECT_OFFSET UNITYSDK_OFFSET(0x14EEBD50)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x14EEBD10)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x14EEB550)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x14EEBE80)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EEBCA0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EE9130)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EE94F0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14EE9730)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETCONSOLEINFOBTN_OFFSET UNITYSDK_OFFSET(0x14EEADB0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETDETAILSICONBTN_OFFSET UNITYSDK_OFFSET(0x14EEAA60)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEAFA0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETMAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0x14EEAF40)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETSLIDERGREY_OFFSET UNITYSDK_OFFSET(0x14EEB030)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETSPECIALBTNTEXT_OFFSET UNITYSDK_OFFSET(0x14EEA870)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETTITLEINFOBTN_OFFSET UNITYSDK_OFFSET(0x14EEAC20)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWSPECIAL02BTNTIP_OFFSET UNITYSDK_OFFSET(0x14EEA9B0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWSPECIALBTNPANEL_OFFSET UNITYSDK_OFFSET(0x14EEA5E0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWUSEBTN_OFFSET UNITYSDK_OFFSET(0x14EEA570)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EEC3F0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0x14EEC400)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_1_OFFSET UNITYSDK_OFFSET(0x14EEC680)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_2_OFFSET UNITYSDK_OFFSET(0x14EEC720)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EEC780)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x14EEC810)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x14EEC8A0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EEC930)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EEC940)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EEC950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController_TypeDefinitionIndex = 58118;

	class UIGeneralItemUsePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_48* _view; // 0x310
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x318
		::System::Int32 _maxUseCount; // 0x320
		::System::Boolean _showInputField; // 0x324
		::System::Int32 _expectedInitCount; // 0x328
		::System::UInt32 useCount; // 0x32C
		::UnityEngine::UI::Image* _sliderHandleImage; // 0x330
		::System::Action_1<::System::Int32>* useAction; // 0x338
		::System::Boolean isTextChanging; // 0x340
		::System::String* _titleText; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowUseBtn(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWUSEBTN_OFFSET))(this, show);
		}

		::System::Void ShowSpecialBtnPanel(::System::Boolean showBtn01, ::System::Boolean btn01Interactable, ::System::Boolean showBtn02, ::System::Boolean btn02Interactable, ::System::Action_1<::System::Int32>* onClickBtn01, ::System::Action* onClickBtn02)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWSPECIALBTNPANEL_OFFSET))(this, showBtn01, btn01Interactable, showBtn02, btn02Interactable, onClickBtn01, onClickBtn02);
		}

		::System::Void SetSpecialBtnText(::System::String* btn01TextKey, ::System::String* btn02TextKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETSPECIALBTNTEXT_OFFSET))(this, btn01TextKey, btn02TextKey);
		}

		::System::Void ShowSpecial02BtnTip(::System::Boolean show, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SHOWSPECIAL02BTNTIP_OFFSET))(this, show, key);
		}

		::System::Void SetDetailsIconBtn(::System::Boolean enable, ::System::Boolean showIcon, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETDETAILSICONBTN_OFFSET))(this, enable, showIcon, onClick);
		}

		::System::Void SetTitleInfoBtn(::System::Boolean show, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETTITLEINFOBTN_OFFSET))(this, show, onClick);
		}

		::System::Void SetConsoleInfoBtn(::System::Boolean show, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETCONSOLEINFOBTN_OFFSET))(this, show, onClick);
		}

		::System::Void SetMaxUseCount(::System::Int32 maxUseCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETMAXUSECOUNT_OFFSET))(this, maxUseCount);
		}

		::System::Void SetItemCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETITEMCOUNT_OFFSET))(this, count);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void DoPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOPURCHASE_OFFSET))(this);
		}

		::System::Void DoItemUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOITEMUSE_OFFSET))(this);
		}

		::System::Void DoPowerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_DOPOWERACTION_OFFSET))(this);
		}

		::System::Void SetSliderGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_SETSLIDERGREY_OFFSET))(this, isGrey);
		}

		::System::Void OnClickSetToMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONCLICKSETTOMAX_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitNumInfoContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_INITNUMINFOCONTENT_OFFSET))(this);
		}

		::System::Void OnInputFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTFIELDSELECT_OFFSET))(this);
		}

		::System::Void OnInputFieldDeselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTFIELDDESELECT_OFFSET))(this);
		}

		::System::Char OnTextValidateInput(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::Void OnInputChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONINPUTCHANGED_OFFSET))(this, input);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void _RefreshView_b__17_0(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_0_OFFSET))(this, f);
		}

		::System::Void _RefreshView_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__17_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER__REFRESHVIEW_B__17_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
