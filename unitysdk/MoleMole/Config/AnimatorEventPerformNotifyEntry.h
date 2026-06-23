#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x170319D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPERFORMNOTIFYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17031A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPerformNotifyEntry_TypeDefinitionIndex = 77900;

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
