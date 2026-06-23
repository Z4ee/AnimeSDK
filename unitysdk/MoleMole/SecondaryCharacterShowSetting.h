#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SecondaryCharacterType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarSetting; }

#define MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x11651260)

namespace MoleMole
{
	inline static constexpr unsigned int SecondaryCharacterShowSetting_TypeDefinitionIndex = 42909;

	class SecondaryCharacterShowSetting : public ::System::Object
	{
	public:
		::MoleMole::AnimatorRandomIntConfig* AnimatorRandomIntConfigs; // 0x10
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x18
		::MoleMole::UIAvatarSetting* AvatarSetting; // 0x20
		::MoleMole::SecondaryCharacterType CharacterType; // 0x28
		::System::UInt32 TemplateID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
