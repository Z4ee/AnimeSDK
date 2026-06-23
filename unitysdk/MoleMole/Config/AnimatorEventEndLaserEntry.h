#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENDLASERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13FF8590)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENDLASERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEndLaserEntry_TypeDefinitionIndex = 85158;

	class AnimatorEventEndLaserEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENDLASERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENDLASERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
