#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFE9B880)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFE9B900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRemoveMaterialPropertyModifierEntry_TypeDefinitionIndex = 67648;

	class AnimatorEventRemoveMaterialPropertyModifierEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::Boolean EndWithoutFadeOut; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
