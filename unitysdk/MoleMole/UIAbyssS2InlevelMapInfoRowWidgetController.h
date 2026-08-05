#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_7BEEB90214042948_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1892DD60)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1892DDF0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1892DC90)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1892DCF0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1892DE70)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1892E040)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1892DF70)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1892E150)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1892E1B0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1892E240)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1892E2D0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1892E360)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapInfoRowWidgetController_TypeDefinitionIndex = 61544;

	class UIAbyssS2InlevelMapInfoRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_13* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* configUISpritePath, ::System::String* configAreaName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, configUISpritePath, configAreaName);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void SetColor_1(::System::String* configIconColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER_SETCOLOR_1_OFFSET))(this, configIconColor);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
