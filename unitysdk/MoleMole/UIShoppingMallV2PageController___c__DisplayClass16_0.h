#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16696050)
#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS16_0__PLAYBGFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x16696060)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallV2PageController___c__DisplayClass16_0_TypeDefinitionIndex = 40680;

	class UIShoppingMallV2PageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* cb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBGFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS16_0__PLAYBGFADEIN_B__0_OFFSET))(this);
		}
	};
}
