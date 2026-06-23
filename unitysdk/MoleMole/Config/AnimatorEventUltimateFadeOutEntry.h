#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTULTIMATEFADEOUTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17D3A9B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTULTIMATEFADEOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3AA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventUltimateFadeOutEntry_TypeDefinitionIndex = 72377;

	class AnimatorEventUltimateFadeOutEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTULTIMATEFADEOUTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTULTIMATEFADEOUTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
