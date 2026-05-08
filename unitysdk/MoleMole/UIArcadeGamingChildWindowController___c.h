#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F3BD50)
#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F3BD90)
#define MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__40_1_OFFSET UNITYSDK_OFFSET(0x12F3BDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeGamingChildWindowController___c_TypeDefinitionIndex = 72424;

	class UIArcadeGamingChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__40_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeGamingChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C960);
		}
		static ::MoleMole::UIArcadeGamingChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeGamingChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeGamingChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectBtnClicked_b__40_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEGAMINGCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__40_1_OFFSET))(this);
		}
	};
}
