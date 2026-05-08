#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E54310)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E54350)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__22_0_OFFSET UNITYSDK_OFFSET(0x14E54360)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex = 72388;

	class UIAutoBattlePVPPlayerRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41F00);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddFriendHandle_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__22_0_OFFSET))(this);
		}
	};
}
