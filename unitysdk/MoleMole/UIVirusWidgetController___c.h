#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BDE3D0)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDE410)
#define MOLEMOLE_UIVIRUSWIDGETCONTROLLER___C__ONCLICKMAINCITY_B__41_0_OFFSET UNITYSDK_OFFSET(0x11BDE420)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusWidgetController___c_TypeDefinitionIndex = 79371;

	class UIVirusWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVirusWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43570);
		}
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVirusWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43578);
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
