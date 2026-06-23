#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/MoleMole/UIBaseController.h"
#include "unitysdk/MoleMole/UIWindowController_OnHideOperation.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_90BF61F65AED1726;
class Class_1_FA793AB1D49D0132;
class Class_1_FED7C03EAA90E7EB;
class Class_2_A9A857AD270B9CE1;
class Class_2_B1D6005AD96CFD0A;
class Class_5_4B10204F20C4D73A;
namespace MoleMole { class UIAspectRatioHandler; }
namespace MoleMole { class UIBase3DModelController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDialogStaticBlurWidgetController; }
namespace MoleMole { class UIMonoController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace MoleMole::Config { class UIBlurFlag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x156E3B10)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x156E3AB0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDMONOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E1870)
#define MOLEMOLE_UIWINDOWCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x156E37F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x156E5420)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x156E5510)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLEARPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156E0730)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E3330)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_1_OFFSET UNITYSDK_OFFSET(0x156E5A90)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E0CF0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x156B0D90)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x156E38F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156E0140)
#define MOLEMOLE_UIWINDOWCONTROLLER_DELAYHIDECOMPLETE_OFFSET UNITYSDK_OFFSET(0x156E4680)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x156E2350)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x156E3A10)
#define MOLEMOLE_UIWINDOWCONTROLLER_DISPOSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156DFFE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_DOHIDEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x156E21F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_EXECUTESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E4A20)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x156E2D30)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETASSETPROXY_OFFSET UNITYSDK_OFFSET(0x15691220)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x156DFFA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET UNITYSDK_OFFSET(0x156E49E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISCHILDWINDOW_OFFSET UNITYSDK_OFFSET(0x156E0FF0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPAGEWINDOW_OFFSET UNITYSDK_OFFSET(0x156E1040)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPOPUPWINDOW_OFFSET UNITYSDK_OFFSET(0x156E0FA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETPAGEWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x156E1090)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETTOPTIPSROOT_OFFSET UNITYSDK_OFFSET(0x156DFF60)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x156E1180)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x156E0A80)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BACKTYPE_OFFSET UNITYSDK_OFFSET(0x156E0930)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x156DFF40)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISMODALWINDOW_OFFSET UNITYSDK_OFFSET(0x156E0C40)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISROOTLAYER_OFFSET UNITYSDK_OFFSET(0x156E0970)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_JUMPTYPE_OFFSET UNITYSDK_OFFSET(0x156E0950)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x156E0C20)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SENDOPENPOPUPFORNEWBIE_OFFSET UNITYSDK_OFFSET(0x156E0CD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x156E0AA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x156DFF20)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x156E0CB0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERPOP_OFFSET UNITYSDK_OFFSET(0x156E0C30)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x156E0CE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_HANDLEUISTATICBLUR_OFFSET UNITYSDK_OFFSET(0x156E55B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E3B70)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E5D10)
#define MOLEMOLE_UIWINDOWCONTROLLER_INITWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x156E0D40)
#define MOLEMOLE_UIWINDOWCONTROLLER_INTERRUPTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156E0430)
#define MOLEMOLE_UIWINDOWCONTROLLER_ISSKIPFADEIN_OFFSET UNITYSDK_OFFSET(0x156E4700)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x156E53D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x156E54C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x156E3890)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x156E4750)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x156E4960)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156A9860)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x156C5FE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15697650)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15692FA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_OPENSTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E5680)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEBACK_OFFSET UNITYSDK_OFFSET(0x156E3BF0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEDELAYHIDE_OFFSET UNITYSDK_OFFSET(0x156E4040)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156E05E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSESCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x156E2790)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x156E3DD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x156E3F10)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPEN3DMODELCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E5E90)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPENCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156E30C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x156E1380)
#define MOLEMOLE_UIWINDOWCONTROLLER_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x156E3750)
#define MOLEMOLE_UIWINDOWCONTROLLER_REFRESHSCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x156E26E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_1_OFFSET UNITYSDK_OFFSET(0x156E3590)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_OFFSET UNITYSDK_OFFSET(0x156E3530)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x156E2040)
#define MOLEMOLE_UIWINDOWCONTROLLER_RESELECTPARENT_OFFSET UNITYSDK_OFFSET(0x156E2B10)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET UNITYSDK_OFFSET(0x156E11D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETONHIDEOPERATION_OFFSET UNITYSDK_OFFSET(0x156E08E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x156D3860)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x156E0A90)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x156DFF50)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x156DFF30)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x156E0CC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_STARTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x156E0290)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E4F30)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E41D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E4A90)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYHIDEBYPARENT_OFFSET UNITYSDK_OFFSET(0x156E3CE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYPLAYTOPPAGEOVERRIDEFADEIN_OFFSET UNITYSDK_OFFSET(0x156E1D90)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYSHOWBYPARENT_OFFSET UNITYSDK_OFFSET(0x156E3C70)
#define MOLEMOLE_UIWINDOWCONTROLLER_UICLOSE_OFFSET UNITYSDK_OFFSET(0x156E1A20)
#define MOLEMOLE_UIWINDOWCONTROLLER_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x156E1680)
#define MOLEMOLE_UIWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15697BE0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x156E61F0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x156E6130)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x156E65B0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x156E65C0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x156E6670)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x156E6730)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x156E6740)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x156E6290)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156E6140)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x156E61E0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156E6010)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156E60A0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x156E6330)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x156E6320)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x156E6520)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x156E6480)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x156E67D0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E6860)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E6870)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156E6880)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x156E63F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWindowController_TypeDefinitionIndex = 79808;

	class UIWindowController : public ::MoleMole::UIBaseController
	{
	public:
		::Class_5_4B10204F20C4D73A* _TopPump_k__BackingField; // 0x2A8
		::Class_5_4B10204F20C4D73A* _BottomPump_k__BackingField; // 0x2B0
		::System::Collections::Generic::List_1<::Class_5_4B10204F20C4D73A*>* _pumpList; // 0x2B8
		::MoleMole::UIWindowController_OnHideOperation _onHidePumpQueueOperation; // 0x2C0
		::MoleMole::UIAspectRatioHandler* _AspectRatioHandler_k__BackingField; // 0x2C8
		::Class_1_FED7C03EAA90E7EB* _uiWindowSetting; // 0x2D0
		::UnityEngine::Transform* realUIRoot; // 0x2D8
		::System::Boolean _TriggerNewbieOnShow_k__BackingField; // 0x2E0
		::System::Boolean PageFreezeAnimation; // 0x2E1
		::Class_1_90BF61F65AED1726* _childWindowProxy; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIMonoController*>* _listMonoController; // 0x2F0
		::System::Boolean _hideByParent; // 0x2F8
		::System::Action* closeAction; // 0x300
		::MoleMole::Config::UIBlurFlag* uiBlurFlag; // 0x308
		::MoleMole::UIGeneralDialogStaticBlurWidgetController* _blurDialogWidget; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_5_4B10204F20C4D73A* get_TopPump()
		{
			return ((::Class_5_4B10204F20C4D73A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TOPPUMP_OFFSET))(this);
		}

		::System::Void set_TopPump(::Class_5_4B10204F20C4D73A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_4B10204F20C4D73A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_TOPPUMP_OFFSET))(this, value);
		}

		::Class_5_4B10204F20C4D73A* get_BottomPump()
		{
			return ((::Class_5_4B10204F20C4D73A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_BOTTOMPUMP_OFFSET))(this);
		}

		::System::Void set_BottomPump(::Class_5_4B10204F20C4D73A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_4B10204F20C4D73A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_BOTTOMPUMP_OFFSET))(this, value);
		}

		::UnityEngine::Transform* GetTopTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETTOPTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void DisposePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DISPOSEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void CreatePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CREATEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void StartPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_STARTPUMPQUEUE_OFFSET))(this);
		}

		::System::Void InterruptPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_INTERRUPTPUMPQUEUE_OFFSET))(this);
		}

		::System::Void PausePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAUSEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void ClearPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLEARPUMPQUEUE_OFFSET))(this);
		}

		::System::Void SetOnHideOperation(::MoleMole::UIWindowController_OnHideOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController_OnHideOperation))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETONHIDEOPERATION_OFFSET))(this, operation);
		}

		::Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958 get_BackType()
		{
			return ((::Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_BACKTYPE_OFFSET))(this);
		}

		::Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4 get_JumpType()
		{
			return ((::Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_JUMPTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsRootLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ISROOTLAYER_OFFSET))(this);
		}

		::MoleMole::UIAspectRatioHandler* get_AspectRatioHandler()
		{
			return ((::MoleMole::UIAspectRatioHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ASPECTRATIOHANDLER_OFFSET))(this);
		}

		::System::Void set_AspectRatioHandler(::MoleMole::UIAspectRatioHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAspectRatioHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_ASPECTRATIOHANDLER_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_TriggerPop()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERPOP_OFFSET))(this);
		}

		::System::Boolean get_IsModalWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ISMODALWINDOW_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::System::Void set_TriggerNewbieOnShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_TRIGGERNEWBIEONSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_SendOpenPopUpForNewBie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_SENDOPENPOPUPFORNEWBIE_OFFSET))(this);
		}

		::System::Boolean get_TryOverrideTopPageFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_INITWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean GetIsPopupWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISPOPUPWINDOW_OFFSET))(this);
		}

		::System::Boolean GetIsChildWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISCHILDWINDOW_OFFSET))(this);
		}

		::System::Boolean GetIsPageWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISPAGEWINDOW_OFFSET))(this);
		}

		::Class_2_B1D6005AD96CFD0A* GetPageWindowSetting()
		{
			return ((::Class_2_B1D6005AD96CFD0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETPAGEWINDOWSETTING_OFFSET))(this);
		}

		::Class_1_FED7C03EAA90E7EB* GetWindowSetting()
		{
			return ((::Class_1_FED7C03EAA90E7EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetChildControllerParent(::MoleMole::UIBaseController* childController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET))(this, childController);
		}

		::System::Void PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void UpdateLayoutPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_UPDATELAYOUTPLATFORM_OFFSET))(this);
		}

		::System::Void AddMonoController(::MoleMole::UIMonoController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMonoController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDMONOCONTROLLER_OFFSET))(this, ctrl);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void UIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_UICLOSE_OFFSET))(this);
		}

		::System::Void TryPlayTopPageOverrideFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYPLAYTOPPAGEOVERRIDEFADEIN_OFFSET))(this);
		}

		::System::Void DoHideImmediate(::System::Boolean doOnHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DOHIDEIMMEDIATE_OFFSET))(this, doOnHide);
		}

		::Class_2_A9A857AD270B9CE1* GetAssetProxy()
		{
			return ((::Class_2_A9A857AD270B9CE1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETASSETPROXY_OFFSET))(this);
		}

		::System::Void DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void RefreshScreenLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REFRESHSCREENLAYOUT_OFFSET))(this);
		}

		::System::Void PauseScreenLayout(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAUSESCREENLAYOUT_OFFSET))(this, pause);
		}

		::System::Void ReSelectParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_RESELECTPARENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* GetAllChildren()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETALLCHILDREN_OFFSET))(this);
		}

		::System::Void PostOpenChildController(::MoleMole::UIWindowController* ctrl, ::UnityEngine::Transform* parent, ::MoleMole::UIControllerContextBase* uiControllerContext, ::Class_1_FA793AB1D49D0132* openParams, ::System::Int32 overrideCanvas)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTOPENCHILDCONTROLLER_OFFSET))(this, ctrl, parent, uiControllerContext, openParams, overrideCanvas);
		}

		::System::Void CloseChildController(::MoleMole::UIWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSECHILDCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void RemoveChildCtrl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_OFFSET))(this, widgetController);
		}

		::System::Void RemoveChildCtrl_1(::MoleMole::UIWindowController* child)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_1_OFFSET))(this, child);
		}

		::System::Void PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PREPARESHOW_OFFSET))(this);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Void OnChildPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONCHILDPREPAREHIDE_OFFSET))(this);
		}

		::System::Void CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CREATEPROXY_OFFSET))(this);
		}

		::System::Void DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DESTROYPROXY_OFFSET))(this);
		}

		::System::Void AddChildControl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_OFFSET))(this, widgetController);
		}

		::System::Void AddChildControl_1(::MoleMole::UIWindowController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_1_OFFSET))(this, widgetController);
		}

		::System::Void HideChildController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HIDECHILDCONTROLLER_OFFSET))(this);
		}

		::System::Void PageBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAGEBACK_OFFSET))(this);
		}

		::System::Void TryShowByParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYSHOWBYPARENT_OFFSET))(this);
		}

		::System::Void TryHideByParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYHIDEBYPARENT_OFFSET))(this);
		}

		::System::Void RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVEFROMPARENT_OFFSET))(this);
		}

		::System::Single PlayCloseAnim(::System::Action* callback, ::Enum_3_7A4252233BCEB3A9 nextPage, ::System::String* fadeOutAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::Enum_3_7A4252233BCEB3A9, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET))(this, callback, nextPage, fadeOutAnim);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void PageDelayHide(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAGEDELAYHIDE_OFFSET))(this, delay);
		}

		::System::Void DelayHideComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DELAYHIDECOMPLETE_OFFSET))(this);
		}

		::System::Boolean IsSkipFadeIn(::MoleMole::UIBaseController* fromCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ISSKIPFADEIN_OFFSET))(this, fromCtrl);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Single GetCustomHide3DTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET))(this);
		}

		::System::Void ExecuteSoundAction(::MoleMole::Config::BaseConfigSoundAction* soundAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseConfigSoundAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_EXECUTESOUNDACTION_OFFSET))(this, soundAction);
		}

		::System::Void TriggerOnHideSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDESOUNDACTION_OFFSET))(this);
		}

		::System::Void TriggerOnShowSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONSHOWSOUNDACTION_OFFSET))(this);
		}

		::System::Void TriggerOnHideBeforeAnimSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET))(this);
		}

		::System::Void OnBeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void BeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void OnBeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void BeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void HandleUIStaticBlur(::System::Int32 instancedID, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HANDLEUISTATICBLUR_OFFSET))(this, instancedID, isActive);
		}

		::System::Void OpenStaticBlurController(::System::Int32 instancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_OPENSTATICBLURCONTROLLER_OFFSET))(this, instancedID);
		}

		::System::Boolean CloseStaticBlurController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_OFFSET))(this);
		}

		::System::Boolean CloseStaticBlurController_1(::System::Int32 instancedID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_1_OFFSET))(this, instancedID);
		}

		::System::Void HideStaticBlurController(::System::Int32 instancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HIDESTATICBLURCONTROLLER_OFFSET))(this, instancedID);
		}

		::System::Void PostOpen3DModelChildController(::MoleMole::UIBase3DModelController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBase3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTOPEN3DMODELCHILDCONTROLLER_OFFSET))(this, ctrl);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}

		::System::Single __base_PlayCloseAnim(::System::Action* P0, ::Enum_3_7A4252233BCEB3A9 P1, ::System::String* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::Enum_3_7A4252233BCEB3A9, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_UpdateLayoutPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET))(this);
		}

		::System::Void __base_PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET))(this);
		}

		::System::Void __base_PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void __base_CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_CREATEPROXY_OFFSET))(this);
		}

		::System::Void __base_DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void __base_DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYPROXY_OFFSET))(this);
		}

		::System::Boolean __base_get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::System::Void __base_OnChildPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONCHILDPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET))(this);
		}

		::System::Void __base_TriggerOnHideBeforeAnimSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET))(this);
		}

		::System::Void __base_TriggerOnHideSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDESOUNDACTION_OFFSET))(this);
		}

		::System::Void __base_TriggerOnShowSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONSHOWSOUNDACTION_OFFSET))(this);
		}
	};
}
