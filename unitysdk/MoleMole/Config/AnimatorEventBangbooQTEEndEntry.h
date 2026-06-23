#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1927F460)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOQTEENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1927F4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBangbooQTEEndEntry_TypeDefinitionIndex = 65444;

	class AnimatorEventBangbooQTEEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 overrideSwitchInIndex; // 0x58
		::System::Boolean isAssaultAid; // 0x5C

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
