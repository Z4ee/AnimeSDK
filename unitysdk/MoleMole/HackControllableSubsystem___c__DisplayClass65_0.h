#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1AD50)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__0_OFFSET UNITYSDK_OFFSET(0x19B1AD60)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__1_OFFSET UNITYSDK_OFFSET(0x19B1AE40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__2_OFFSET UNITYSDK_OFFSET(0x19B1AE60)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass65_0_TypeDefinitionIndex = 57117;

	class HackControllableSubsystem___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MoleMole::HackControllableSubsystem* __4__this; // 0x10
		::Foundation::ViewObject::ViewObjectHandle currentViewObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowActiveExitSecondSure_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__0_OFFSET))(this);
		}

		::System::Void _ShowActiveExitSecondSure_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__1_OFFSET))(this);
		}

		::System::Void _ShowActiveExitSecondSure_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS65_0__SHOWACTIVEEXITSECONDSURE_B__2_OFFSET))(this);
		}
	};
}
