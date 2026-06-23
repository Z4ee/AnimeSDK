#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EFB600)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB640)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__ONPRECHECKSWITCHAVATAR_B__28_0_OFFSET UNITYSDK_OFFSET(0x15EFB650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRolePageController___c_TypeDefinitionIndex = 79448;

	class UIMainCitySwitchRolePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCitySwitchRolePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCitySwitchRolePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRolePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CB80);
		}
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRolePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPreCheckSwitchAvatar_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__ONPRECHECKSWITCHAVATAR_B__28_0_OFFSET))(this);
		}
	};
}
