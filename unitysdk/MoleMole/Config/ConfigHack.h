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

#define MOLEMOLE_CONFIG_CONFIGHACK__CTOR_OFFSET UNITYSDK_OFFSET(0x143759A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHack_TypeDefinitionIndex = 50932;

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
		::System::String* cameraMoveLimitSoundActionKey; // 0x100
		::UnityEngine::Color AvatarOccludedOverlayColor; // 0x108
		::System::Single AvatarOccludedOverlayIntensity; // 0x118
		::UnityEngine::Texture2D* AvatarOccludedOverlayBaseTexture; // 0x120
		::System::Single AvatarOccludedOverlayBaseTextureIntensity; // 0x128
		::UnityEngine::Vector2 AvatarOccludedOverlayBaseTextureTiling; // 0x12C
		::UnityEngine::Color AvatarOccludedOverlayBaseColorA; // 0x134
		::UnityEngine::Color AvatarOccludedOverlayBaseColorB; // 0x144
		::System::Single AvatarOccludedOverlayBaseScrollSpeed; // 0x154
		::System::Single AvatarOccludedOcclusionDepthEpsilon; // 0x158
		::UnityEngine::Gradient* OutlineColorGradient; // 0x160
		::System::Single OutlineColorIntensity; // 0x168
		::System::Single OutlineAnimLifetime; // 0x16C
		::System::Boolean OccludedByDepth; // 0x170
		::System::Boolean OccludedByCharacters; // 0x171
		::System::Boolean UseLODGroup; // 0x172
		::System::Single outlineThickness; // 0x174
		::System::String* HighlightMaterialPath; // 0x178
		::UnityEngine::Color OverlayColor; // 0x180
		::System::Single MinOpacity; // 0x190
		::System::Single MaxOpacity; // 0x194

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK__CTOR_OFFSET))(this);
		}
	};
}
