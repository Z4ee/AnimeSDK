#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/EffectParamEntityUsage.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_7349B1777BF91C92_OFFSET UNITYSDK_OFFSET(0x178C2110)
#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_88EDDCA23758DE4B_OFFSET UNITYSDK_OFFSET(0x178C2420)
#define RPG_GAMECORE_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x178C23B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffect_TypeDefinitionIndex = 18553;

	class TriggerEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsAttachToTargetEntity; // 0x20
		::System::Boolean IsAttachToTimeline; // 0x21
		::System::Boolean IsActiveLevelUpOverride; // 0x22
		::System::Boolean IsHideTargetEntityWhenLoading; // 0x23
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x28
		::System::Boolean AliveOnly; // 0x30
		::System::String* EffectPathKey; // 0x38
		::System::String* EffectPath; // 0x40
		::System::String* UniqueEffectName; // 0x48
		::System::String* AttachPoint; // 0x50
		::RPG::MVector3 PositionOffset; // 0x58
		::RPG::MVector3 RotationOffset; // 0x64
		::RPG::MVector3 Scale; // 0x70
		::RPG::GameCore::DynamicFloat* ParameterScale; // 0x80
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x88
		::System::Single Delay; // 0x8C
		::RPG::GameCore::DynamicFloat* DynamicDelay; // 0x90
		::System::Boolean IsNeedFadeIn; // 0x98
		::System::Boolean IsEnableReplay; // 0x99
		::System::Boolean ForceSimulateImmediately; // 0x9A
		::System::Boolean AddColliderHeightOffset; // 0x9B
		::RPG::GameCore::DynamicFloat* PositionOffsetRatio; // 0xA0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaX; // 0xA8
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaY; // 0xB0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaZ; // 0xB8
		::RPG::GameCore::DynamicFloat* DynamicPitch; // 0xC0
		::RPG::GameCore::DynamicFloat* DynamicYaw; // 0xC8
		::RPG::GameCore::DynamicFloat* DynamicRoll; // 0xD0
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0xD8
		::RPG::GameCore::TargetEvaluator* TowardTarget; // 0xE0
		::System::String* TowardAttachPoint; // 0xE8
		::System::Boolean TowardRotatePitchOnly; // 0xF0
		::System::Single TowardMaxPitchAngle; // 0xF4
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0xF8
		::System::Boolean IsAttachToCaster; // 0x100
		::System::Boolean ExecuteOnSkip; // 0x101
		::System::Single MinMutexTime; // 0x104
		::RPG::GameCore::EffectMutexType MinMutexType; // 0x108
		::System::UInt32 MaxMutexCount; // 0x10C
		::System::Boolean IgnoreFadeOutMutexError; // 0x110
		::System::Boolean SyncPropState; // 0x111
		::System::String* InitEffectState; // 0x118
		::System::Boolean FollowCasterTimeSlow; // 0x120
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x128
		::System::String* AudioSwitchGroup; // 0x130
		::System::String* AudioSwitchName; // 0x138
		::System::Boolean ForbidLod; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7349B1777BF91C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_7349B1777BF91C92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88EDDCA23758DE4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_88EDDCA23758DE4B_OFFSET))(a1, a2);
		}
	};
}
