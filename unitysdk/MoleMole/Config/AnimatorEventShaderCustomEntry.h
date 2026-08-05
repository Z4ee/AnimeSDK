#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSHADERCUSTOMENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x116E3270)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSHADERCUSTOMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x116E32F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShaderCustomEntry_TypeDefinitionIndex = 83375;

	class AnimatorEventShaderCustomEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Key; // 0x58
		::MoleMole::Config::ShaderCustomType CustomType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHADERCUSTOMENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHADERCUSTOMENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
