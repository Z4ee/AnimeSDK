#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCENTERDITHERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12C5B8A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCENTERDITHERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5B920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCenterDitherEntry_TypeDefinitionIndex = 60134;

	class AnimatorEventCenterDitherEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AttachPoint; // 0x58
		::System::Single CenterMinAlpha; // 0x60
		::System::Boolean UseOnAttachment; // 0x64
		::System::Boolean IsOpen; // 0x65
		::UnityEngine::Vector2 CenterDitherZW; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCENTERDITHERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCENTERDITHERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
