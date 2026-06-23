#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/MoleMole/EtherEyesHintInfoType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace MoleMole::Config { class EtherEyesOutlineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGETHEREYES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A344D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEtherEyes_TypeDefinitionIndex = 60049;

	class ConfigEtherEyes : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Cameras::OverShoulderCameraConfig* CameraConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>* OverrideOverShoulderCameraTagDict; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* EnableEtherEyesAnimatorTagList; // 0x68
		::System::Int32 EtherEyesSkillUnlockID; // 0x70
		::System::Single VOHighlightRange; // 0x74
		::System::Single VOInteractRange; // 0x78
		::System::Single VOInteractZoneScreenRadiusRatio; // 0x7C
		::UnityEngine::LayerMask FindObjectOverlapTriggerLayerMask; // 0x80
		::System::Single EtherEyesSkillActiveCDTime; // 0x84
		::System::Single EtherEyesInteractCDTime; // 0x88
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>* ObjectTypeDefaultConfigDict; // 0x90
		::System::Boolean DisableUIBreakCoreNum; // 0x98
		::System::Boolean DisableInteractCDShow; // 0x99
		::Foundation::AssetPath SkillBtnIconPath; // 0xA0
		::Foundation::AssetPath SkillBtnActiveIconPath; // 0xB0
		::System::String* NoHighlightModeMaterialPath; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>* HintInfoKeyDict; // 0xC8
		::System::Single HintInfoFindInteractFinishTime; // 0xD0
		::System::String* InteractPointNameKey; // 0xD8
		::System::Single FixRotSpeedPerS; // 0xE0
		::System::String* meshParticlePatternName; // 0xE8
		::System::String* meshNormalParticlePatternName; // 0xF0
		::System::Collections::Generic::List_1<::System::String*>* PathMatPath; // 0xF8
		::System::Single PathVisibleRange; // 0x100
		::System::String* EtherEyeSurfaceMatPath; // 0x108
		::System::String* InteractableMatPath; // 0x110
		::System::String* InteractableSpecialMatPath; // 0x118
		::System::Single InteractableDefaultVisible; // 0x120
		::System::Single InteractableDefaultFresnel; // 0x124
		::System::Single InteractableOpenFadeTime; // 0x128
		::System::String* InteractableOpenFadeCurveKey; // 0x130
		::System::Single InteractableCloseFadeTime; // 0x138
		::System::String* InteractableCloseFadeCurveKey; // 0x140
		::System::Single InteractableTriggerFadeTime; // 0x148
		::System::String* InteractableTriggerFadeCurveKey; // 0x150
		::System::Single OverlayFadeTime; // 0x158
		::System::String* OverlayFadeCurveKey; // 0x160
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>* EtheEyesObjectSizeConfigDict; // 0x168
		::MoleMole::Config::EtherEyesOutlineConfig* OutlineConfig; // 0x170
		::System::String* PathWireCurveKey; // 0x178
		::System::Collections::Generic::List_1<::System::String*>* WireOuterMatPath; // 0x180
		::System::Single movableOutlineThickness; // 0x188
		::System::String* movableMAKey; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES__CTOR_OFFSET))(this);
		}
	};
}
