#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1881FBB0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1881FBF0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1881FC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex = 64511;

	class UIGrandMarcelAdventurePlayerRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FD40);
		}
		static ::MoleMole::UIGrandMarcelAdventurePlayerRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelAdventurePlayerRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FD48);
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
