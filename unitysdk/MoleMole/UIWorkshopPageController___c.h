#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__BACKTOMAIN_B__6_0_OFFSET UNITYSDK_OFFSET(0xE48D240)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE48D1F0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE48D230)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopPageController___c_TypeDefinitionIndex = 56523;

	class UIWorkshopPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkshopPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkshopPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopPageController___c_TypeDefinitionIndex)->GetStaticField(0x382C0);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopPageController___c_TypeDefinitionIndex)->GetStaticField(0x382C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BackToMain_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___C__BACKTOMAIN_B__6_0_OFFSET))(this);
		}
	};
}
