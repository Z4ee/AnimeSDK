#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E32BA0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E32BE0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET UNITYSDK_OFFSET(0x17E32D20)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET UNITYSDK_OFFSET(0x17E32BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c_TypeDefinitionIndex = 75397;

	class UIAbyssS2EntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x34CB0);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x34CB8);
		}
		static ::MoleMole::UIAbyssS2EntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x34CC0);
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
