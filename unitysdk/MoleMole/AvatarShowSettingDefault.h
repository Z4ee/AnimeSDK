#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSettingDefault; }
namespace MoleMole { class UIModelBgSetting; }

#define MOLEMOLE_AVATARSHOWSETTINGDEFAULT_PARSEDEFAULT_OFFSET UNITYSDK_OFFSET(0x14831B70)
#define MOLEMOLE_AVATARSHOWSETTINGDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x14831AC0)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSettingDefault_TypeDefinitionIndex = 47146;

	class AvatarShowSettingDefault : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarSettingDefault* AvatarSetting; // 0x10
		::MoleMole::UIAvatarCameraSetting* AvatarCameraSetting; // 0x18
		::MoleMole::UIAvatarLightSetting* AvatarLightSetting; // 0x20
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x28
		::MoleMole::UIModelBgSetting* ModelBgSetting; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTINGDEFAULT__CTOR_OFFSET))(this);
		}

		::MoleMole::AvatarShowSetting* ParseDefault()
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTINGDEFAULT_PARSEDEFAULT_OFFSET))(this);
		}
	};
}
