#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_18;
namespace MoleMole { class UITowerDefenseLevelPageController; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16550260)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS30_0__ONTOWERDEFENSELEVELUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x16550270)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass30_0_TypeDefinitionIndex = 82786;

	class UITowerDefenseLevelPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x10
		::Class_1_7807B2B04302CD7B_18* towerData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTowerDefenseLevelUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS30_0__ONTOWERDEFENSELEVELUPDATE_B__0_OFFSET))(this);
		}
	};
}
