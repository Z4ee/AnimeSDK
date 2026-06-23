#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E6B1B73EBD006A98;
class Class_2_E6B1B73EBD006A98_Class_2_D72E10CE1BC97618_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x15E4AF80)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E4AE70)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E4AF00)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E4AC20)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E4AE00)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x15E4AFD0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4B2C0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E4B320)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E4B3B0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E4B440)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E4B4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkinRewardWidgetController_TypeDefinitionIndex = 55704;

	class UIActivitySkinRewardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E6B1B73EBD006A98* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_2_E6B1B73EBD006A98_Class_2_D72E10CE1BC97618_4*>* roleImageView; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_E6B1B73EBD006A98* GetView()
		{
			return ((::Class_2_E6B1B73EBD006A98*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetSkinRewardState(::System::Collections::Generic::List_1<::System::Int32>* skinList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET))(this, skinList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
