#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_61;
class Class_2_C868A5F010AE909D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICommentInfoGoodsRowWidgetController; }
namespace MoleMole { class UICommentMainPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISwitchPageListWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_CLOSEGOODWIDGET_OFFSET UNITYSDK_OFFSET(0x192BC540)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x192BB740)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_HANDLEGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x192BB960)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x192BCC50)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKSTORE_OFFSET UNITYSDK_OFFSET(0x192BD200)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCLICKUSER_OFFSET UNITYSDK_OFFSET(0x192BCF40)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192BB620)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONSENDRESULTSUCCESS_OFFSET UNITYSDK_OFFSET(0x192BD4C0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192BB6B0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192BB250)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYREFRESHANIMATION_OFFSET UNITYSDK_OFFSET(0x192BCEC0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_PLAYRESULTANIMATION_OFFSET UNITYSDK_OFFSET(0x192BD600)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHRESULTVIEW_OFFSET UNITYSDK_OFFSET(0x192BC6C0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_REFRESHSECTIONVIEW_OFFSET UNITYSDK_OFFSET(0x192BBB80)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER_SETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0x192BD680)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192BDC40)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKSTORE_B__20_0_OFFSET UNITYSDK_OFFSET(0x192BDFC0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONCLICKUSER_B__19_0_OFFSET UNITYSDK_OFFSET(0x192BDEF0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONSENDRESULTSUCCESS_B__21_0_OFFSET UNITYSDK_OFFSET(0x192BE090)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x192BDD20)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x192BDE10)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192BE4F0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192BE580)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192BE610)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentInfoWidgetController_TypeDefinitionIndex = 88818;

	class UICommentInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_61* _view; // 0x2C0
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
