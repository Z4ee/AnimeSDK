#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E10260)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E102A0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__ONMAINBTNCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0x17E102B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventPageController___c_TypeDefinitionIndex = 57886;

	class UIAbyssS2EventPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EEE0);
		}
		static ::MoleMole::UIAbyssS2EventPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EventPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EEE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClick_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__ONMAINBTNCLICK_B__8_0_OFFSET))(this);
		}
	};
}
