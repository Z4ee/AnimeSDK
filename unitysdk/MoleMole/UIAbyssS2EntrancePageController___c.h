#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6DB350)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DB390)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET UNITYSDK_OFFSET(0x1B6DB4D0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET UNITYSDK_OFFSET(0x1B6DB3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c_TypeDefinitionIndex = 64827;

	class UIAbyssS2EntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A0D0);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A0D8);
		}
		static ::MoleMole::UIAbyssS2EntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTalentHandle_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET))(this);
		}
	};
}
