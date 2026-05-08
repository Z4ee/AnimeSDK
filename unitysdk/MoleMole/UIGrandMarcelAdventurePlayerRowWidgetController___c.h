#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EE6C0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149EE700)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x149EE710)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex = 69043;

	class UIGrandMarcelAdventurePlayerRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CAF0);
		}
		static ::MoleMole::UIGrandMarcelAdventurePlayerRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelAdventurePlayerRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddFriendHandle_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__13_0_OFFSET))(this);
		}
	};
}
