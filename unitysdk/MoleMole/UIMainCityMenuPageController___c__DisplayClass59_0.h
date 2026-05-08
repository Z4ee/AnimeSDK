#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_222A145CFB71510C;

#define MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150F45F0)
#define MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS59_0__ONOPENBATTLEPASS_B__0_OFFSET UNITYSDK_OFFSET(0x150F4600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenuPageController___c__DisplayClass59_0_TypeDefinitionIndex = 79213;

	class UIMainCityMenuPageController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::Class_2_222A145CFB71510C* battlePassModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpenBattlePass_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUPAGECONTROLLER___C__DISPLAYCLASS59_0__ONOPENBATTLEPASS_B__0_OFFSET))(this);
		}
	};
}
