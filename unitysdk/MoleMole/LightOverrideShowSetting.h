#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarLightSetting; }

#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15134D30)

namespace MoleMole
{
	inline static constexpr unsigned int LightOverrideShowSetting_TypeDefinitionIndex = 59666;

	class LightOverrideShowSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightSetting* AvatarLightSetting; // 0x10
		::System::Boolean IsApplyOverride; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
