#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UIModelBgSetting; }

#define MOLEMOLE_AVATARSHOWSETTING_GETSKINOVERRIDESETTING_OFFSET UNITYSDK_OFFSET(0x12AF5540)
#define MOLEMOLE_AVATARSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF5490)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting_TypeDefinitionIndex = 65455;

	class AvatarShowSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarSetting* AvatarSetting; // 0x10
		::MoleMole::UIAvatarCameraSetting* AvatarCameraSetting; // 0x18
		::MoleMole::UIAvatarLightSetting* AvatarLightSetting; // 0x20
		::MoleMole::AnimatorRandomIntConfig* AnimatorRandomIntConfigs; // 0x28
		::MoleMole::UIAvatarCameraAnimationSetting* AvatarCameraAnimSetting; // 0x30
		::MoleMole::UIModelBgSetting* ModelBgSetting; // 0x38
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x40
		::MoleMole::SecondaryCharacterShowSetting* SecondaryCharacterShowSetting; // 0x48
		::MoleMole::SkinOverrideShowSettingConfigs* SkinOverrideShowSettingConfigs; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::AvatarShowSetting* GetSkinOverrideSetting(::System::UInt32 skinID)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_GETSKINOVERRIDESETTING_OFFSET))(this, skinID);
		}
	};
}
