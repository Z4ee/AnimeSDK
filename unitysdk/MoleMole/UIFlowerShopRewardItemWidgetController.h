#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_1092;
class Class_2_923BB6EA0D9B637B;
class Class_2_A3D97EDF9C99B3C3_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19385FB0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONGETREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x193866F0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19386170)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONTAKECOMMONREWARDEVENT_OFFSET UNITYSDK_OFFSET(0x193867C0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193860F0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19385D50)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19385F40)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x19386230)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19386810)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19386820)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x193868B0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19386950)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193869E0)
#define MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19386A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopRewardItemWidgetController_TypeDefinitionIndex = 57639;

	class UIFlowerShopRewardItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A3D97EDF9C99B3C3_4* _view; // 0x2F0
		::Class_2_923BB6EA0D9B637B* _model; // 0x2F8
		::Class_2_208CC9941471731A_1092* _tableInfo; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGetRewardButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONGETREWARDBUTTON_OFFSET))(this);
		}

		::System::Void OnTakeCommonRewardEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_ONTAKECOMMONREWARDEVENT_OFFSET))(this, obj);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPREWARDITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
