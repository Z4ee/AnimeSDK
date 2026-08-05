#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_8FC1A7735F246865;
namespace MoleMole { class UIBossChallengePageController; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1970D150)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__REFRESHSHOPBTNSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1970D160)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__REFRESHSHOPBTNSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x1970D810)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c__DisplayClass60_0_TypeDefinitionIndex = 49471;

	class UIBossChallengePageController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::Class_2_8FC1A7735F246865* shopModel; // 0x10
		::MoleMole::UIBossChallengePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshShopBtnState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__REFRESHSHOPBTNSTATE_B__0_OFFSET))(this);
		}

		::System::Void _RefreshShopBtnState_b__1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS60_0__REFRESHSHOPBTNSTATE_B__1_OFFSET))(this, error);
		}
	};
}
