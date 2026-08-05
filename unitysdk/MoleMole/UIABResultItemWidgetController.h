#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_8469E7523673A92C_6;
namespace MoleMole { class UIABResultItemWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D86730)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11D86840)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D867C0)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D866D0)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11D86970)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x11D86A90)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D86B20)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D86B30)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11D86BC0)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D86C60)
#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D86CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABResultItemWidgetController_TypeDefinitionIndex = 47590;

	class UIABResultItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_8469E7523673A92C_6* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIABResultItemWidgetController_Context* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABResultItemWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, ctx);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
