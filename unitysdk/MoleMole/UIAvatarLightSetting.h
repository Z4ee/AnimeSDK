#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2FE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 48501;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x10
		::UnityEngine::Cubemap* ReflectionCube; // 0x28
		::UnityEngine::Vector3 PositionOffset; // 0x30
		::System::Boolean OverrideHairShadowLightDir; // 0x3C
		::System::Boolean unlockLightX; // 0x3D
		::UnityEngine::Color LightColor; // 0x40
		::UnityEngine::Vector2 hairShadowLightDir; // 0x50
		::System::Single ReflectionCubeRotation; // 0x58
		::UnityEngine::Vector3 LightRotOffset; // 0x5C
		::System::Single CommonYRot; // 0x68
		::System::Single LightIntensity; // 0x6C
		::UnityEngine::Color GIColor; // 0x70
		::System::Boolean EnableLightAvatarPart; // 0x80
		::System::Boolean EnableHairShadowOffset; // 0x81
		::System::Boolean PointLight; // 0x82
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x84
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x94
		::UnityEngine::Vector2 HairShadowOffset; // 0xA0
		::System::Single Range; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
