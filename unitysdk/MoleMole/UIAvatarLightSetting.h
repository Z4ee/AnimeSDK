#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x175F10F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 86873;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x10
		::UnityEngine::Cubemap* ReflectionCube; // 0x28
		::UnityEngine::Vector3 PositionOffset; // 0x30
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x3C
		::UnityEngine::Vector2 HairShadowOffset; // 0x4C
		::System::Single Range; // 0x54
		::UnityEngine::Vector2 hairShadowLightDir; // 0x58
		::System::Single ReflectionCubeRotation; // 0x60
		::System::Boolean EnableHairShadowOffset; // 0x64
		::System::Boolean unlockLightX; // 0x65
		::System::Boolean OverrideHairShadowLightDir; // 0x66
		::System::Boolean PointLight; // 0x67
		::System::Boolean EnableLightAvatarPart; // 0x68
		::UnityEngine::Vector3 LightRotOffset; // 0x6C
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x78
		::UnityEngine::Color LightColor; // 0x84
		::System::Single LightIntensity; // 0x94
		::System::Single CommonYRot; // 0x98
		::UnityEngine::Color GIColor; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
