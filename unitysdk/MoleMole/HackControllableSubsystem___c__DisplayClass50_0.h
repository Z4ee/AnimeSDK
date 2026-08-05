#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1737B700)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_B__2_OFFSET UNITYSDK_OFFSET(0x1737B810)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_G__COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1737B780)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_G__REMOVEADDITIONALPOSITION_0_OFFSET UNITYSDK_OFFSET(0x1737B710)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass50_0_TypeDefinitionIndex = 57112;

	class HackControllableSubsystem___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* onLoaded; // 0x10
		::System::Boolean removeWhenIdAssigned; // 0x18
		::System::Boolean completed; // 0x19
		::System::Int32 additionalId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_g__RemoveAdditionalPosition_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_G__REMOVEADDITIONALPOSITION_0_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_g__Complete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_G__COMPLETE_1_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__WAITEXITSTREAMINGLOADED_B__2_OFFSET))(this);
		}
	};
}
