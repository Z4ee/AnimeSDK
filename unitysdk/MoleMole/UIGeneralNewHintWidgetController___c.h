#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E6670)
#define MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175E66B0)
#define MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__ENABLENEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x175E66C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewHintWidgetController___c_TypeDefinitionIndex = 70909;

	class UIGeneralNewHintWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralNewHintWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewHintWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewHintWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0F0);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewHintWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _EnableNew_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWHINTWIDGETCONTROLLER___C__ENABLENEW_B__13_0_OFFSET))(this);
		}
	};
}
