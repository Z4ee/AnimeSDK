#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17435910)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17435990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPerformNotifyEntry_TypeDefinitionIndex = 40882;

	class AnimatorEventPerformNotifyEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Params; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
