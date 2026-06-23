#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_14DBBC6D0D085982;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x178D5270)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x178D53A0)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178D52E0)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178D5460)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x178D54C0)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x178D5570)
#define MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178D5610)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateSwitchAvatarWidgetController_TypeDefinitionIndex = 86240;

	class UIPartnerDateSwitchAvatarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_14DBBC6D0D085982* get__viewModel()
		{
			return ((::Class_2_14DBBC6D0D085982*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void _OnUIInit_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESWITCHAVATARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
