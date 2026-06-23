#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigHack_HackObjectTipKeyEntry; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGHACK__CTOR_OFFSET UNITYSDK_OFFSET(0x158A8970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHack_TypeDefinitionIndex = 75739;

	class ConfigHack : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 HackSystemUnlockID; // 0x58
		::System::Single MajorAxisLength; // 0x5C
		::System::Single MinorAxisLength; // 0x60
		::System::Single InteractDistance; // 0x64
		::System::Single InteractEffectDistanceOffset; // 0x68
		::UnityEngine::LayerMask BlockColliderLayerMask; // 0x6C
		::System::Collections::Generic::HashSet_1<::System::String*>* IgnoreBlockColliderTags; // 0x70
		::System::Int32 MaxIndicatorCount; // 0x78
		::System::Int32 MaxIndicatorCountInSafetyMode; // 0x7C
		::System::Int32 MaxControllableIndicatorCount; // 0x80
		::System::Int32 ValidCameraAngle; // 0x84
		::System::Single HackScreenCenterX; // 0x88
		::System::Single HackScreenCenterY; // 0x8C
		::System::Single HackPriorityCenterX; // 0x90
		::System::Single HackPriorityCenterY; // 0x94
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HackObjectType, ::MoleMole::Config::ConfigHack_HackObjectTipKeyEntry*>* HackInteractPointTipsKeyDic; // 0x98
		::Foundation::AssetPath HackInteractButtonActiveIconPath; // 0xA0
		::Foundation::AssetPath HackInteractButtonIconPath; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HackObjectTrait*>* AvatarHackTraitMap; // 0xC0
		::System::Boolean EnableNPCSpacing; // 0xC8
		::System::Boolean DisableInteractPointTipsOnFocusInCameraHack; // 0xC9
		::System::Single CameraHackMajorAxisLength; // 0xCC
		::System::Single CameraHackMinorAxisLength; // 0xD0
		::System::Single CameraHackScreenCenterX; // 0xD4
		::System::Single CameraHackScreenCenterY; // 0xD8
		::System::Single CameraHackPriorityCenterX; // 0xDC
		::System::Single CameraHackPriorityCenterY; // 0xE0
		::System::String* cameraHackEnterSoundActionKey; // 0xE8
		::System::String* cameraHackExitSoundActionKey; // 0xF0
		::System::String* cameraMoveSpeedRtpcName; // 0xF8
		::UnityEngine::Color AvatarOccludedOverlayColor; // 0x100
		::System::Single AvatarOccludedOverlayIntensity; // 0x110
		::UnityEngine::Texture2D* AvatarOccludedOverlayBaseTexture; // 0x118
		::System::Single AvatarOccludedOverlayBaseTextureIntensity; // 0x120
		::UnityEngine::Vector2 AvatarOccludedOverlayBaseTextureTiling; // 0x124
		::UnityEngine::Color AvatarOccludedOverlayBaseColorA; // 0x12C
		::UnityEngine::Color AvatarOccludedOverlayBaseColorB; // 0x13C
		::System::Single AvatarOccludedOverlayBaseScrollSpeed; // 0x14C
		::System::Single AvatarOccludedOcclusionDepthEpsilon; // 0x150
		::UnityEngine::Gradient* OutlineColorGradient; // 0x158
		::System::Single OutlineColorIntensity; // 0x160
		::System::Single OutlineAnimLifetime; // 0x164
		::System::Boolean OccludedByDepth; // 0x168
		::System::Boolean OccludedByCharacters; // 0x169
		::System::Boolean UseLODGroup; // 0x16A
		::System::Single outlineThickness; // 0x16C
		::System::String* HighlightMaterialPath; // 0x170
		::UnityEngine::Color OverlayColor; // 0x178
		::System::Single MinOpacity; // 0x188
		::System::Single MaxOpacity; // 0x18C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK__CTOR_OFFSET))(this);
		}
	};
}
