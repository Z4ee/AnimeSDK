#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13ECEC90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECED10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSetSelfAttackTargetEntry_TypeDefinitionIndex = 70174;

	class AnimatorEventSetSelfAttackTargetEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TargetCustomKey; // 0x58
		::System::String* SourceCustomKey; // 0x60
		::System::Boolean OnlySetOnNull; // 0x68
		::System::Boolean IgnoreSetAttackTargetCD; // 0x69
		::System::Boolean ForceOverride; // 0x6A
		::MoleMole::Config::AbilityTargetting SourceType; // 0x6C
		::MoleMole::Config::AbilityTargetting TargetType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
