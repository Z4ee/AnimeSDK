#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D76F0)
#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174D7730)
#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__ONSHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0x174D7740)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex = 70875;

	class UIMainCitySidebarPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4A030);
		}
		static ::MoleMole::UIMainCitySidebarPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCitySidebarPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4A038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__ONSHOW_B__6_0_OFFSET))(this);
		}
	};
}
