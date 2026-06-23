#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSTOPBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x19280B00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSTOPBLURSHADOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19280B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventStopBlurShadowEntry_TypeDefinitionIndex = 78576;

	class AnimatorEventStopBlurShadowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSTOPBLURSHADOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSTOPBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
