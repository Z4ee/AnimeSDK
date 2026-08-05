#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEAVATARLAYOUTCAMERABLENDOUTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1145B990)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEAVATARLAYOUTCAMERABLENDOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1145BA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideAvatarLayoutCameraBlendOutEntry_TypeDefinitionIndex = 52328;

	class AnimatorEventOverrideAvatarLayoutCameraBlendOutEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* OverrideCurveKey; // 0x58
		::System::Single OverrideTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEAVATARLAYOUTCAMERABLENDOUTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEAVATARLAYOUTCAMERABLENDOUTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
