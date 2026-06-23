#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E84AA0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__ONLOCKINBATTLEBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x16E84AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass85_0_TypeDefinitionIndex = 79050;

	class UILineupSelectPageController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController* __4__this; // 0x10
		::System::Boolean isLock; // 0x18
		::System::Int32 index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLockInBattleButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS85_0__ONLOCKINBATTLEBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
