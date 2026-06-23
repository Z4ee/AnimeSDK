#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12702FD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12703050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDebugEntry_TypeDefinitionIndex = 70183;

	class AnimatorEventDebugEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* message; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
