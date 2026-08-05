#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1737C1E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS57_0__TRYCUTRETURNAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x1737C1F0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass57_0_TypeDefinitionIndex = 57118;

	class HackControllableSubsystem___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MoleMole::HackControllableSubsystem* __4__this; // 0x10
		::System::Boolean needExitCamera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryCutReturnAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS57_0__TRYCUTRETURNAVATAR_B__0_OFFSET))(this);
		}
	};
}
