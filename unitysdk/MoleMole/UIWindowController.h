#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
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

#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1276C300)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1276C2A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDMONOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276A2C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1276BFE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1276DC30)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1276DD20)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLEARPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12769190)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276BB20)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_1_OFFSET UNITYSDK_OFFSET(0x1276E2A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x12769740)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x127470C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1276C0E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12768BA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_DELAYHIDECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1276CE70)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x1276AB30)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1276C200)
#define MOLEMOLE_UIWINDOWCONTROLLER_DISPOSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12768A40)
#define MOLEMOLE_UIWINDOWCONTROLLER_DOHIDEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1276A980)
#define MOLEMOLE_UIWINDOWCONTROLLER_EXECUTESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276D210)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1276B510)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETASSETPROXY_OFFSET UNITYSDK_OFFSET(0x1276AAE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x12768A00)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET UNITYSDK_OFFSET(0x1276D1D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISCHILDWINDOW_OFFSET UNITYSDK_OFFSET(0x12769A40)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPAGEWINDOW_OFFSET UNITYSDK_OFFSET(0x12769A90)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPOPUPWINDOW_OFFSET UNITYSDK_OFFSET(0x127699F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETPAGEWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12769AE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETTOPTIPSROOT_OFFSET UNITYSDK_OFFSET(0x127689C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12769BD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x127694E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BACKTYPE_OFFSET UNITYSDK_OFFSET(0x12769390)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x127689A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISMODALWINDOW_OFFSET UNITYSDK_OFFSET(0x127696A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISROOTLAYER_OFFSET UNITYSDK_OFFSET(0x127693D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_JUMPTYPE_OFFSET UNITYSDK_OFFSET(0x127693B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x12769680)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SENDOPENPOPUPFORNEWBIE_OFFSET UNITYSDK_OFFSET(0x12769730)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x12769500)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x12768980)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x12769710)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERPOP_OFFSET UNITYSDK_OFFSET(0x12769690)
#define MOLEMOLE_UIWINDOWCONTROLLER_HANDLEUISTATICBLUR_OFFSET UNITYSDK_OFFSET(0x1276DDC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276C360)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276E520)
#define MOLEMOLE_UIWINDOWCONTROLLER_INITWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12769790)
#define MOLEMOLE_UIWINDOWCONTROLLER_INTERRUPTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12768E90)
#define MOLEMOLE_UIWINDOWCONTROLLER_ISSKIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1276CEF0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1276DBE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1276DCD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1276C080)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x1276CF40)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1276D150)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1274E6C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1274E520)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1273D9F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12742E70)
#define MOLEMOLE_UIWINDOWCONTROLLER_OPENSTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276DE90)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEBACK_OFFSET UNITYSDK_OFFSET(0x1276C3E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEDELAYHIDE_OFFSET UNITYSDK_OFFSET(0x1276C830)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12769040)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSESCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x1276AF70)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x1276C5C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1276C700)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPEN3DMODELCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276E6A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPENCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1276B8B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x12769DD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x1276BF40)
#define MOLEMOLE_UIWINDOWCONTROLLER_REFRESHSCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x1276AEC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_1_OFFSET UNITYSDK_OFFSET(0x1276BD80)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_OFFSET UNITYSDK_OFFSET(0x1276BD20)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x1276A7D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_RESELECTPARENT_OFFSET UNITYSDK_OFFSET(0x1276B2F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET UNITYSDK_OFFSET(0x12769C20)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETONHIDEOPERATION_OFFSET UNITYSDK_OFFSET(0x12769340)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1275C2E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x127694F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x127689B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x12768990)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x12769720)
#define MOLEMOLE_UIWINDOWCONTROLLER_STARTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x12768CF0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276D730)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276C9C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276D280)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYHIDEBYPARENT_OFFSET UNITYSDK_OFFSET(0x1276C4D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYSHOWBYPARENT_OFFSET UNITYSDK_OFFSET(0x1276C460)
#define MOLEMOLE_UIWINDOWCONTROLLER_UICLOSE_OFFSET UNITYSDK_OFFSET(0x1276A470)
#define MOLEMOLE_UIWINDOWCONTROLLER_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1276A0D0)
#define MOLEMOLE_UIWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12747AE0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1276EA00)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1276E940)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1276EDC0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x1276EDD0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1276EE80)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1276EF40)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1276EF50)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1276ECA0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1276E950)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1276E9F0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1276E820)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1276E8B0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x1276EAA0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1276EBF0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x1276ED30)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x1276EC00)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x1276EFE0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276F070)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276F080)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1276F090)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1276EB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIWindowController_TypeDefinitionIndex = 67909;

	class UIWindowController : public ::MoleMole::UIBaseController
	{
	public:
		::Class_5_4B10204F20C4D73A* _TopPump_k__BackingField; // 0x2A0
		::Class_5_4B10204F20C4D73A* _BottomPump_k__BackingField; // 0x2A8
		::System::Collections::Generic::List_1<::Class_5_4B10204F20C4D73A*>* _pumpList; // 0x2B0
		::MoleMole::UIWindowController_OnHideOperation _onHidePumpQueueOperation; // 0x2B8
		::MoleMole::UIAspectRatioHandler* _AspectRatioHandler_k__BackingField; // 0x2C0
		::Class_1_FED7C03EAA90E7EB* _uiWindowSetting; // 0x2C8
		::UnityEngine::Transform* realUIRoot; // 0x2D0
		::System::Boolean _TriggerNewbieOnShow_k__BackingField; // 0x2D8
		::System::Boolean PageFreezeAnimation; // 0x2D9
		::Class_1_90BF61F65AED1726* _childWindowProxy; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIMonoController*>* _listMonoController; // 0x2E8
		::System::Boolean _hideByParent; // 0x2F0
		::System::Action* closeAction; // 0x2F8
		::MoleMole::Config::UIBlurFlag* uiBlurFlag; // 0x300
		::MoleMole::UIGeneralDialogStaticBlurWidgetController* _blurDialogWidget; // 0x308

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

		::System::Single PlayCloseAnim(::System::Action* callback, ::Enum_3_81A3942BCC6E42B5 nextPage, ::System::String* fadeOutAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::Enum_3_81A3942BCC6E42B5, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET))(this, callback, nextPage, fadeOutAnim);
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

		::System::Single __base_PlayCloseAnim(::System::Action* P0, ::Enum_3_81A3942BCC6E42B5 P1, ::System::String* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::Enum_3_81A3942BCC6E42B5, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_UpdateLayoutPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}

		::System::Void __base_PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
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
