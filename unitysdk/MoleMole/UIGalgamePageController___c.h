#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16798610)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__65_0_OFFSET UNITYSDK_OFFSET(0x16798660)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16798650)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c_TypeDefinitionIndex = 54889;

	class UIGalgamePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__65_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A210);
		}
		static ::MoleMole::UIGalgamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGalgamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckMaincityBGM_b__65_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__65_0_OFFSET))(this);
		}
	};
}
