#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_161;
class Class_2_C868A5F010AE909D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICommentInfoGoodsRowWidgetController; }
namespace MoleMole { class UICommentMainPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISwitchPageListWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_CLOSEGOODWIDGET_OFFSET UNITYSDK_OFFSET(0x17F6A100)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x17F692F0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x17F69510)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x17F6A820)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKSTORE_OFFSET UNITYSDK_OFFSET(0x17F6ADD0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKUSER_OFFSET UNITYSDK_OFFSET(0x17F6AB10)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F691D0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONSENDRESULTSUCCESS_OFFSET UNITYSDK_OFFSET(0x17F6B090)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F69260)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F68E00)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYREFRESHANIMATION_OFFSET UNITYSDK_OFFSET(0x17F6AA90)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYRESULTANIMATION_OFFSET UNITYSDK_OFFSET(0x17F6B1D0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHRESULTVIEW_OFFSET UNITYSDK_OFFSET(0x17F6A280)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHSECTIONVIEW_OFFSET UNITYSDK_OFFSET(0x17F69730)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_SETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0x17F6B250)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6B810)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKSTORE_B__20_0_OFFSET UNITYSDK_OFFSET(0x17F6BB90)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKUSER_B__19_0_OFFSET UNITYSDK_OFFSET(0x17F6BAC0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONSENDRESULTSUCCESS_B__21_0_OFFSET UNITYSDK_OFFSET(0x17F6BC60)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x17F6B8F0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x17F6B9D0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F6C0B0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F6C140)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F6C1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentInfoWidgetController_TypeDefinitionIndex = 77832;

	class UICommentInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_161* _view; // 0x2C0
		::MoleMole::UICommentMainPageController* _pageController; // 0x2C8
		::Class_2_C868A5F010AE909D* _model; // 0x2D0
		::System::Int32 _generalLevelID; // 0x2D8
		::System::Int32 _sectionID; // 0x2DC
		::System::Boolean _isFinishMode; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UICommentInfoGoodsRowWidgetController*>* _goodRowCtrlList; // 0x2E8
		::MoleMole::UISwitchPageListWidgetController* _pageListWidgetController; // 0x2F0
		::System::Int64 _startTime; // 0x2F8
		::System::Int64 _endTime; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void HandleGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void RefreshSectionView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHSECTIONVIEW_OFFSET))(this);
		}

		::System::Void RefreshResultView(::System::Boolean withAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHRESULTVIEW_OFFSET))(this, withAnimation);
		}

		::System::Void CloseGoodWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_CLOSEGOODWIDGET_OFFSET))(this);
		}

		::System::Void OnClickNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKNEXT_OFFSET))(this);
		}

		::System::Void OnClickUser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKUSER_OFFSET))(this);
		}

		::System::Void OnClickStore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKSTORE_OFFSET))(this);
		}

		::System::Void OnSendResultSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONSENDRESULTSUCCESS_OFFSET))(this);
		}

		::System::Void PlayResultAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYRESULTANIMATION_OFFSET))(this);
		}

		::System::Void PlayRefreshAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYREFRESHANIMATION_OFFSET))(this);
		}

		::System::Void SetGeneralLevelID(::System::Int32 generalLevelID, ::MoleMole::UICommentMainPageController* pageController)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UICommentMainPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_SETGENERALLEVELID_OFFSET))(this, generalLevelID, pageController);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_1_OFFSET))(this);
		}

		::System::Void _OnClickUser_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKUSER_B__19_0_OFFSET))(this);
		}

		::System::Void _OnClickStore_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKSTORE_B__20_0_OFFSET))(this);
		}

		::System::Void _OnSendResultSuccess_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONSENDRESULTSUCCESS_B__21_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
