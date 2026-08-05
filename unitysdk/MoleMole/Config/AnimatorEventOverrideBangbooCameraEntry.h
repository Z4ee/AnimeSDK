#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEBANGBOOCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1484B570)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEBANGBOOCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1484B5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideBangbooCameraEntry_TypeDefinitionIndex = 47824;

	class AnimatorEventOverrideBangbooCameraEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Key; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEBANGBOOCAMERAENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEBANGBOOCAMERAENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
