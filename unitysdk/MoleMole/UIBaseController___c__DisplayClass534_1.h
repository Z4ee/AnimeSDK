#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController___c__DisplayClass534_0; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED0840)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_1__PLAYSTARTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x16ED0850)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass534_1_TypeDefinitionIndex = 70941;

	class UIBaseController___c__DisplayClass534_1 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController___c__DisplayClass534_0* CS___8__locals1; // 0x10
		::System::String* fadeInAnimName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStartAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS534_1__PLAYSTARTANIM_B__0_OFFSET))(this);
		}
	};
}
