#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12C5B6D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5B750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBangbooAidSkillEndEntry_TypeDefinitionIndex = 48148;

	class AnimatorEventBangbooAidSkillEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
