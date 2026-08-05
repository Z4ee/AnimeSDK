#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_UISECONDAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15F78D40)

namespace MoleMole
{
	inline static constexpr unsigned int UISecondAvatarLightSetting_TypeDefinitionIndex = 82728;

	class UISecondAvatarLightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 hairShadowLightDir; // 0x10
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x18
		::UnityEngine::Vector2 HairShadowOffset; // 0x28
		::System::Boolean EnableLightAvatarPart; // 0x30
		::System::Boolean EnableHairShadowOffset; // 0x31
		::System::Boolean OverrideHairShadowLightDir; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISECONDAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
