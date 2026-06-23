#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C868A5F010AE909D;
class Class_2_FBB8E5C056021DB6_6;
namespace MoleMole { class UICommentMainPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175C0B20)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x175C0C30)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x175C07F0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175C0BB0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175C0590)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_SETPARENTPAGE_OFFSET UNITYSDK_OFFSET(0x175C0E30)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175C0E80)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x175C0F30)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175C1070)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x175C1100)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175C11A0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175C1230)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentLevelWidgetController_TypeDefinitionIndex = 71210;

	class UICommentLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FBB8E5C056021DB6_6* _view; // 0x2C0
		::MoleMole::UICommentMainPageController* _pageController; // 0x2C8
		::Class_2_C868A5F010AE909D* _model; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* _generalLevelIDList; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, index);
		}

		::System::Void SetParentPage(::MoleMole::UICommentMainPageController* pageController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICommentMainPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_SETPARENTPAGE_OFFSET))(this, pageController);
		}

		::System::Void _OnShow_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__ONSHOW_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
