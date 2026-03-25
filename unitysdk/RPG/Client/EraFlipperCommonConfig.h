#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace RPG::Client { class ProxyEffectProp; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_ERAFLIPPERCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9622810)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperCommonConfig_TypeDefinitionIndex = 48994;

	class EraFlipperCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PartialDevicePropIDList; // 0x18
		::System::String* EntityAttachPointName; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* StagePropIDList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ProxyEffectProp*>* ProxyEffectPropList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* FadeInOutPropList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* DynamicPropPropList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* StateListenerPropList; // 0x48
		::System::Single FadeInTime; // 0x50
		::System::Single FadeOutTime; // 0x54
		::System::String* NpcHideEffect; // 0x58
		::System::String* NpcShowEffect; // 0x60
		::System::String* NpcMonsterHideEffect; // 0x68
		::System::String* NpcMonsterShowEffect; // 0x70
		::System::String* HighLightEffect; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* MuteHighLightPropList; // 0x80
		::System::String* RotateRingAttachPointName; // 0x88
		::System::String* LightConeAttachPointName; // 0x90
		::System::Single RotateRingAngularSpeed; // 0x98
		::System::Single FollowStateSwitchBlendTime; // 0x9C
		::UnityEngine::AnimationCurve* RotateCurve; // 0xA0
		::System::Single LightTurnBlendTime; // 0xA8
		::System::Single LightVolumeTriggerExtendSize; // 0xAC
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* LightVolumePositionAudioEvents; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* LightVolumeExitAudioEvents; // 0xB8
		::System::Single BrightEdgeIntensity; // 0xC0
		::System::Single BrightEdgeTransitTime; // 0xC4
		::System::Single DarkEdgeIntensity; // 0xC8
		::System::Single DarkEdgeTransitTime; // 0xCC
		::UnityEngine::Vector4 EdgeNoiseTillingXYZ_Intensity; // 0xD0
		::UnityEngine::Texture2D* EdgeNoiseMap; // 0xE0
		::System::Single FollowSmoothTime; // 0xE8
		::System::Single FollowMaxSpeed; // 0xEC
		::System::Single AchievementBreakThroughEdgeDis; // 0xF0
		::System::String* FollowAttachEffectPointName; // 0xF8
		::System::String* FollowAttachEffect; // 0x100
		::System::Single FlipPerformDelayTime; // 0x108
		::System::Single RangeScaleSmoothTime; // 0x10C
		::System::Single RangeScaleMaxSpeed; // 0x110
		::System::Single RangeEdgeSmoothTime; // 0x114
		::System::Single RangeEdgeMaxSpeed; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERCOMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
