#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152DBDA0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152DBDE0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__SHOWUIANNOUNCECONTEXT_B__21_0_OFFSET UNITYSDK_OFFSET(0x152DBDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnouncePopWindowController___c_TypeDefinitionIndex = 80655;

	class UIAnnouncePopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAnnouncePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAnnouncePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAnnouncePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47A90);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAnnouncePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUIAnnounceContext_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__SHOWUIANNOUNCECONTEXT_B__21_0_OFFSET))(this);
		}
	};
}
