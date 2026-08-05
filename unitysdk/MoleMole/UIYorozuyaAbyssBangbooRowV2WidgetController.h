#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_72679ED639CF4AB4_3;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E4D2C0)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E4D3D0)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E4D350)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E4D260)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4D5B0)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E4D5C0)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E4D650)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E4D6F0)
#define MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E4D780)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssBangbooRowV2WidgetController_TypeDefinitionIndex = 63499;

	class UIYorozuyaAbyssBangbooRowV2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_72679ED639CF4AB4_3* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSBANGBOOROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
