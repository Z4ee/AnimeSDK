#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15219700)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15219740)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__22_0_OFFSET UNITYSDK_OFFSET(0x15219750)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex = 82650;

	class UIAutoBattlePVPPlayerRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45050);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45058);
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
