#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C868A5F010AE909D;
class Class_2_FBB8E5C056021DB6_1;
namespace MoleMole { class UICommentMainPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EC7850)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x14EC7960)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EC7520)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EC78E0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EC72C0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER_SETPARENTPAGE_OFFSET UNITYSDK_OFFSET(0x14EC7B60)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC7BB0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x14EC7C60)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EC7DA0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EC7E30)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EC7ED0)
#define MOLEMOLE_UICOMMENTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EC7F60)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentLevelWidgetController_TypeDefinitionIndex = 56056;

	class UICommentLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FBB8E5C056021DB6_1* _view; // 0x2B8
		::MoleMole::UICommentMainPageController* _pageController; // 0x2C0
		::Class_2_C868A5F010AE909D* _model; // 0x2C8
		::System::Collections::Generic::List_1<::System::Int32>* _generalLevelIDList; // 0x2D0

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
