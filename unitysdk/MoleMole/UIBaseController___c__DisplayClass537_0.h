#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS537_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1869A280)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS537_0__PLAYFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1869A290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass537_0_TypeDefinitionIndex = 76175;

	class UIBaseController___c__DisplayClass537_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::String* fadeInAnimName; // 0x18
		::System::Single speed; // 0x20
		::System::Boolean playToEnd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS537_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeInAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS537_0__PLAYFADEINANIM_B__0_OFFSET))(this);
		}
	};
}
