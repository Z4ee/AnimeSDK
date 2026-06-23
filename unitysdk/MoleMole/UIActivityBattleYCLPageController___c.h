#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E6380)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E63C0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__ONCLICKMAINCITY_B__55_0_OFFSET UNITYSDK_OFFSET(0x1A1E63D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController___c_TypeDefinitionIndex = 68274;

	class UIActivityBattleYCLPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLPageController___c_TypeDefinitionIndex)->GetStaticField(0x34430);
		}
		static ::MoleMole::UIActivityBattleYCLPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityBattleYCLPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLPageController___c_TypeDefinitionIndex)->GetStaticField(0x34438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMainCity_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__ONCLICKMAINCITY_B__55_0_OFFSET))(this);
		}
	};
}
