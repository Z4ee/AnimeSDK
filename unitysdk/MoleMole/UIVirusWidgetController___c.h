#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE855DC0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE855E00)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__ONCLICKMAINCITY_B__41_0_OFFSET UNITYSDK_OFFSET(0xE855E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusWidgetController___c_TypeDefinitionIndex = 71939;

	class UIVirusWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40AD0);
		}
		static ::MoleMole::UIVirusWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMainCity_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__ONCLICKMAINCITY_B__41_0_OFFSET))(this);
		}
	};
}
