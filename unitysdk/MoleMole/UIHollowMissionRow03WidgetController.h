#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C9DDE9730C6BE395_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x150CBDF0)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150CBEB0)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x150CBD20)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x150CBD80)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETREWARDACTIVE_OFFSET UNITYSDK_OFFSET(0x150CBF30)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETREWARDMES_OFFSET UNITYSDK_OFFSET(0x150CBFA0)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETTITLEANDDES_OFFSET UNITYSDK_OFFSET(0x150CC050)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x150CC520)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x150CC600)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150CC690)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x150CC720)
#define MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x150CC7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMissionRow03WidgetController_TypeDefinitionIndex = 54764;

	class UIHollowMissionRow03WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C9DDE9730C6BE395_2* _view; // 0x2B8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* cacheText; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetRewardActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETREWARDACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetRewardMes(::System::String* num, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETREWARDMES_OFFSET))(this, num, iconPath);
		}

		::System::Void SetTitleAndDes(::System::String* title, ::System::Collections::Generic::List_1<::System::String*>* desList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER_SETTITLEANDDES_OFFSET))(this, title, desList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONROW03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
