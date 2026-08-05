#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController___c__DisplayClass68_0; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABAE10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_1__GACHA_B__1_OFFSET UNITYSDK_OFFSET(0x19ABAE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass68_1_TypeDefinitionIndex = 84835;

	class UIGachaPageController___c__DisplayClass68_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController___c__DisplayClass68_0* CS___8__locals1; // 0x10
		::System::Nullable_1<::Enum_3_0A3761FE34514D6C_45> newType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_1__CTOR_OFFSET))(this);
		}

		::System::Void _Gacha_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_1__GACHA_B__1_OFFSET))(this);
		}
	};
}
