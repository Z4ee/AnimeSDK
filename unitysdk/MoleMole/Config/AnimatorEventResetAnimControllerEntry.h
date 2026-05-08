#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRESETANIMCONTROLLERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x159DAD70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRESETANIMCONTROLLERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x159DADF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventResetAnimControllerEntry_TypeDefinitionIndex = 42566;

	class AnimatorEventResetAnimControllerEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRESETANIMCONTROLLERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRESETANIMCONTROLLERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
