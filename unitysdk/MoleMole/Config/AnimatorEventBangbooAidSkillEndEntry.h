#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1145B260)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBANGBOOAIDSKILLENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B2E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBangbooAidSkillEndEntry_TypeDefinitionIndex = 46846;

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
