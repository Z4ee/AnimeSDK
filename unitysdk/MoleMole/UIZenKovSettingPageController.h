#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UISettingPageController.h"

class Class_2_79F6D62CE30E3F8E_129;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x191A1840)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191A1740)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191A1900)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191A1970)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x191A1980)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191A1A50)
#define MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191A1B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenKovSettingPageController_TypeDefinitionIndex = 85738;

	class UIZenKovSettingPageController : public ::MoleMole::UISettingPageController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_129* _view; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* __base_GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
