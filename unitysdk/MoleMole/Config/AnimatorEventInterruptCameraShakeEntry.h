#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTCAMERASHAKEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17D3A7F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTCAMERASHAKEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3A870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptCameraShakeEntry_TypeDefinitionIndex = 57210;

	class AnimatorEventInterruptCameraShakeEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraShakeKey; // 0x58
		::System::Boolean IsGlobal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTCAMERASHAKEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTCAMERASHAKEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
