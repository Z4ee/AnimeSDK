#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_BA6B385B5E3FB764_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E29D0)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x149E2B70)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x149E2AE0)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x149E2C60)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E2A60)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E2880)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_REFRESHTABDATA_OFFSET UNITYSDK_OFFSET(0x149E2D60)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149E3030)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E3040)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x149E30D0)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x149E3160)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x149E31F0)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E3290)
#define MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E3320)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNumTabBtn2WidgetController_TypeDefinitionIndex = 72696;

	class UIGeneralNumTabBtn2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_BA6B385B5E3FB764_1* _view; // 0x2E8
		::MoleMole::UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData* m_data; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTabData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER_REFRESHTABDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNUMTABBTN2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
