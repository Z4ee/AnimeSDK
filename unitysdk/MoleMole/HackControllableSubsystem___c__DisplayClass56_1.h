#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackControllableSubsystem___c__DisplayClass56_0; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1737BFF0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__6_OFFSET UNITYSDK_OFFSET(0x1737C120)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__7_OFFSET UNITYSDK_OFFSET(0x1737C130)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__8_OFFSET UNITYSDK_OFFSET(0x1737C1D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__TRYFINISHFORCEDBLACKFADE_5_OFFSET UNITYSDK_OFFSET(0x1737C000)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass56_1_TypeDefinitionIndex = 57111;

	class HackControllableSubsystem___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::MoleMole::HackControllableSubsystem___c__DisplayClass56_0* CS___8__locals1; // 0x10
		::System::Boolean finished; // 0x18
		::System::Boolean cameraReady; // 0x19
		::System::Boolean streamingReady; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__TryFinishForcedBlackFade_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__TRYFINISHFORCEDBLACKFADE_5_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__6_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__7_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__8_OFFSET))(this);
		}
	};
}
