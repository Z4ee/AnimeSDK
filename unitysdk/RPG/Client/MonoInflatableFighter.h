#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOINFLATABLEFIGHTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEAC40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInflatableFighter_TypeDefinitionIndex = 68648;

	class MonoInflatableFighter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MinPressure; // 0x18
		::System::Single MaxPressure; // 0x1C
		::System::Single DischargeRate; // 0x20
		::System::Single DischargeRateAcceleration; // 0x24
		::System::Single LowCut_Enter; // 0x28
		::System::Single LowCut_Exit; // 0x2C
		::System::Single HighCut_Enter; // 0x30
		::System::Single HighCut_Exit; // 0x34
		::System::Single OverInflateVulnerableTime; // 0x38
		::System::Single StartPressure; // 0x3C
		::System::Int32 MaxHP; // 0x40
		::System::Boolean FreezeOscillateWhenOver; // 0x44
		::System::Single DefaultFrequency; // 0x48
		::System::Single AttackFrequency; // 0x4C
		::System::Single ChargeAmount; // 0x50
		::System::Single FrequencyMin; // 0x54
		::System::Single FrequencyMax; // 0x58
		::UnityEngine::AnimationCurve* PressureTo01; // 0x60
		::System::Single FreqSmoothTau; // 0x68
		::System::Single AttackStart; // 0x6C
		::System::Single AttackEnd; // 0x70
		::System::Single DamageStart; // 0x74
		::System::Single DamageEnd; // 0x78
		::System::Single ActiveTime; // 0x7C
		::System::Single Cooldown; // 0x80
		::System::Single SelfDeflateOnStart; // 0x84
		::System::Single AttackerPressureGainOnEvade; // 0x88
		::System::String* DodgeStateName; // 0x90
		::System::Single DodgeCrossFadeTime; // 0x98
		::System::Int32 DodgeLayerIndex; // 0x9C
		::System::Single StartLatchSeconds; // 0xA0
		::System::String* DizzyStateName; // 0xA8
		::System::Single DizzyCrossFadeTime; // 0xB0
		::System::Int32 DizzyLayerIndex; // 0xB4
		::System::String* BaseStateName; // 0xB8
		::System::Int32 BaseLayerIndex; // 0xC0
		::System::Single PhaseOffset; // 0xC4
		::System::Boolean ForceAnimatorSpeedZero; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* FistColliders; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* BodyColliders; // 0xD8
		::System::Int32 DamagePerHit; // 0xE0
		::System::Single SelfDeflateAmount; // 0xE4
		::System::String* HitVfxPrefabPath; // 0xE8
		::System::Single VfxScale; // 0xF0
		::System::String* CameraShakeName; // 0xF8
		::System::Single CriticalRate; // 0x100
		::System::Single CriticalDamageMultiplier; // 0x104
		::System::Int32 CriticalGuaranteeMaxMissCount; // 0x108
		::System::String* CriticalVfxPrefabPath; // 0x110
		::System::Single CriticalVfxScale; // 0x118
		::System::String* CriticalCameraShakeName; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINFLATABLEFIGHTER__CTOR_OFFSET))(this);
		}
	};
}
