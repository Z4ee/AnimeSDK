#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196E3300)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196E3340)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__ONCLICKMAINCITY_B__55_0_OFFSET UNITYSDK_OFFSET(0x196E3350)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController___c_TypeDefinitionIndex = 65930;

	class UIActivityBattleYCLPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityBattleYCLPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityBattleYCLPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLPageController___c_TypeDefinitionIndex)->GetStaticField(0x36930);
		}
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLPageController___c_TypeDefinitionIndex)->GetStaticField(0x36938);
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
