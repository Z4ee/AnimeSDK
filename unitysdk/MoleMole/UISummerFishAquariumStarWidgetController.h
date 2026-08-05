#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_94C9713A8E4B253E_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EEE230)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EEE2C0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EEDFB0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EEE1C0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x10EEE340)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEE450)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EEE530)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EEE5C0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EEE650)
#define MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EEE6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumStarWidgetController_TypeDefinitionIndex = 76839;

	class UISummerFishAquariumStarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_94C9713A8E4B253E_2* _view; // 0x2C0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _starList; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::UInt32 starNum, ::System::Boolean isSpecial)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, starNum, isSpecial);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMSTARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
