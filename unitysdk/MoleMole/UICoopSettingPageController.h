#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UISettingPageController.h"

class Class_2_79F6D62CE30E3F8E_72;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x172E35D0)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E34D0)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E3690)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E3700)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x172E3710)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E37E0)
#define MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E38B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopSettingPageController_TypeDefinitionIndex = 63979;

	class UICoopSettingPageController : public ::MoleMole::UISettingPageController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_72* _view; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* __base_GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPSETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
