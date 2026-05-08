#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSKILLSTARTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x141DF6B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSKILLSTARTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x141DF740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSkillStartEntry_TypeDefinitionIndex = 54668;

	class AnimatorEventSkillStartEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* StartedSkillName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSKILLSTARTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSKILLSTARTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
