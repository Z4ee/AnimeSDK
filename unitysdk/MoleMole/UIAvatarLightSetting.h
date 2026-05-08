#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 52352;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x10
		::UnityEngine::Cubemap* ReflectionCube; // 0x28
		::System::Boolean EnableHairShadowOffset; // 0x30
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x34
		::UnityEngine::Vector3 LightRotOffset; // 0x44
		::System::Single ReflectionCubeRotation; // 0x50
		::System::Single LightIntensity; // 0x54
		::UnityEngine::Vector3 PositionOffset; // 0x58
		::System::Single CommonYRot; // 0x64
		::UnityEngine::Color LightColor; // 0x68
		::UnityEngine::Vector2 hairShadowLightDir; // 0x78
		::UnityEngine::Vector2 HairShadowOffset; // 0x80
		::UnityEngine::Color GIColor; // 0x88
		::System::Single Range; // 0x98
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x9C
		::System::Boolean EnableLightAvatarPart; // 0xA8
		::System::Boolean unlockLightX; // 0xA9
		::System::Boolean PointLight; // 0xAA
		::System::Boolean OverrideHairShadowLightDir; // 0xAB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
