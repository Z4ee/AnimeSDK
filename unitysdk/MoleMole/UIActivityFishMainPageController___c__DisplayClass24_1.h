#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1699D6295DC3F818_1;

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1893C860)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHFINALREWARD_B__2_OFFSET UNITYSDK_OFFSET(0x1893C870)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController___c__DisplayClass24_1_TypeDefinitionIndex = 61346;

	class UIActivityFishMainPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* item; // 0x10
		::Class_3_1699D6295DC3F818_1* reward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshFinalReward_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHFINALREWARD_B__2_OFFSET))(this);
		}
	};
}
