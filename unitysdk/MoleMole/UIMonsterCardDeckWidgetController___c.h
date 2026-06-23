#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA2BE0)
#define MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA2C20)
#define MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__ONCLICKDELITEM_B__26_1_OFFSET UNITYSDK_OFFSET(0x16DA2C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardDeckWidgetController___c_TypeDefinitionIndex = 86921;

	class UIMonsterCardDeckWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardDeckWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34840);
		}
		static ::MoleMole::UIMonsterCardDeckWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterCardDeckWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardDeckWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickDelItem_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDECKWIDGETCONTROLLER___C__ONCLICKDELITEM_B__26_1_OFFSET))(this);
		}
	};
}
