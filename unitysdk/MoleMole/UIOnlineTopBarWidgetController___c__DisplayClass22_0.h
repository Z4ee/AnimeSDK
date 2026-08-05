#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16739700)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHRATIO_B__0_OFFSET UNITYSDK_OFFSET(0x16739710)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnlineTopBarWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 53167;

	class UIOnlineTopBarWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Single ratio; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshRatio_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHRATIO_B__0_OFFSET))(this);
		}
	};
}
