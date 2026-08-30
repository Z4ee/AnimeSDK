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
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_6139492390D0D569_OFFSET UNITYSDK_OFFSET(0x1D5F52A0)
#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_88EDDCA23758DE4B_OFFSET UNITYSDK_OFFSET(0x1D5F2F10)
#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_AC8FD35DD4E611A3_OFFSET UNITYSDK_OFFSET(0x1D5F5730)
#define RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_E982F6472A5B7A86_OFFSET UNITYSDK_OFFSET(0x1D5F2BC0)
#define RPG_GAMECORE_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffect_TypeDefinitionIndex = 20031;

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
		::RPG::GameCore::OverrideMonoEffectConfig* OverrideMonoEffectConfig; // 0xA0
		::System::Boolean AddColliderHeightOffset; // 0xA8
		::RPG::GameCore::DynamicFloat* PositionOffsetRatio; // 0xB0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaX; // 0xB8
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaY; // 0xC0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaZ; // 0xC8
		::RPG::GameCore::DynamicFloat* DynamicPitch; // 0xD0
		::RPG::GameCore::DynamicFloat* DynamicYaw; // 0xD8
		::RPG::GameCore::DynamicFloat* DynamicRoll; // 0xE0
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0xE8
		::RPG::GameCore::TargetEvaluator* TowardTarget; // 0xF0
		::System::String* TowardAttachPoint; // 0xF8
		::System::Boolean TowardRotatePitchOnly; // 0x100
		::System::Single TowardMaxPitchAngle; // 0x104
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0x108
		::System::Boolean IsAttachToCaster; // 0x110
		::System::Boolean ExecuteOnSkip; // 0x111
		::System::Single MinMutexTime; // 0x114
		::RPG::GameCore::EffectMutexType MinMutexType; // 0x118
		::System::UInt32 MaxMutexCount; // 0x11C
		::System::Boolean IgnoreFadeOutMutexError; // 0x120
		::System::Boolean SyncPropState; // 0x121
		::System::String* InitEffectState; // 0x128
		::System::Boolean FollowCasterTimeSlow; // 0x130
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x138
		::System::String* AudioSwitchGroup; // 0x140
		::System::String* AudioSwitchName; // 0x148
		::System::Boolean ForbidLod; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E982F6472A5B7A86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_E982F6472A5B7A86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88EDDCA23758DE4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_88EDDCA23758DE4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6139492390D0D569(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_6139492390D0D569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC8FD35DD4E611A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_METHOD_3_AC8FD35DD4E611A3_OFFSET))(a1, a2);
		}
	};
}
