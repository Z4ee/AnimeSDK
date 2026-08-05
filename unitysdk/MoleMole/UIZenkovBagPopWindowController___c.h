#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140FECD0)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140FED10)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ONUIINIT_B__116_2_OFFSET UNITYSDK_OFFSET(0x140FED20)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ONUIINIT_B__116_3_OFFSET UNITYSDK_OFFSET(0x140FED30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c_TypeDefinitionIndex = 79229;

	class UIZenkovBagPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__116_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45380);
		}
		static ::MoleMole::UIZenkovBagPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovBagPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45388);
		}
		static ::System::Action** StaticGet___9__116_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__116_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ONUIINIT_B__116_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__116_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__ONUIINIT_B__116_3_OFFSET))(this);
		}
	};
}
