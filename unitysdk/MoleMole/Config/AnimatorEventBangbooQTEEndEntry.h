#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1484A9F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1484AA70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBangbooQTEEndEntry_TypeDefinitionIndex = 76060;

	class AnimatorEventBangbooQTEEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean isAssaultAid; // 0x58
		::System::Int32 overrideSwitchInIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
