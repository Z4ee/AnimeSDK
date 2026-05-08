#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOWPOPWINDOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFE9BA40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOWPOPWINDOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFE9BAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShowPopWindowEntry_TypeDefinitionIndex = 76448;

	class AnimatorEventShowPopWindowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 PopID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOWPOPWINDOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOWPOPWINDOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
