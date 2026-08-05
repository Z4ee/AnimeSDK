#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleAttachedEffect.h"
#include "unitysdk/MoleMole/Vehicle/VehicleScreenEffect.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleVisualConfig_TypeDefinitionIndex = 50730;

	struct alignas(8) VehicleVisualConfig
	{
		::System::Single preInputTime; // 0x10
		::System::Single wheelieChance; // 0x14
		::System::Single steerAnimationChangeRatio; // 0x18
		::UnityEngine::AnimationCurve* steerAnimationMappingCurve; // 0x20
		::Il2CppArray<::System::String*>* vehicleDodgeStates; // 0x28
		::Il2CppArray<::System::String*>* vehicleHitStates; // 0x30
		::System::String* dodgeZoneTag; // 0x38
		::System::Single visualSideSlipDegreeMax; // 0x40
		::System::Single visualDriftSideSlipDegreeMax; // 0x44
		::MoleMole::Vehicle::VehicleAttachedEffect slopeEffect; // 0x48
		::System::String* HitEffectSmallNormal; // 0x60
		::System::String* HitEffectSmallMetal; // 0x68
		::System::String* HitEffectSmallFire; // 0x70
		::System::String* HitEffectLargeNormal; // 0x78
		::System::String* HitEffectLargeMetal; // 0x80
		::System::String* HitEffectLargeFire; // 0x88
		::System::String* HitEffectAttachPoint; // 0x90
		::Il2CppArray<::MoleMole::Vehicle::VehicleScreenEffect>* screenEffects; // 0x98
		::System::String* headIconPath; // 0xA0
		::System::String* RTPCLeftWall; // 0xA8
		::System::String* RTPCRightWall; // 0xB0
		::System::Single SoundObjectTriggerDistance; // 0xB8
		::System::String* LargePassBySound; // 0xC0
		::System::String* SmallPassBySound; // 0xC8
	};
}
