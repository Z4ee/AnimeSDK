#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFrozenBuff_FrozenShakeConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGFROZENBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17048B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFrozenBuff_TypeDefinitionIndex = 63085;

	class ConfigFrozenBuff : public ::System::Object
	{
	public:
		::System::String* MiddleBrokenEffectName; // 0x10
		::System::String* BrokenEffectAttachPoint; // 0x18
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* LargeShakeConfig; // 0x20
		::System::String* SmallBrokenEffectName; // 0x28
		::System::String* BrokenEffectName; // 0x30
		::UnityEngine::AnimationCurve* StruggleCurve; // 0x38
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* SmallShakeConfig; // 0x40
		::System::String* AvatarBrokenEffect; // 0x48
		::UnityEngine::AnimationCurve* SlowDownCurve; // 0x50
		::System::String* LargeBrokenEffectName; // 0x58
		::System::String* FrozenHitSound; // 0x60
		::System::String* BrokenSound; // 0x68
		::UnityEngine::AnimationCurve* AvatarSlowDownCurve; // 0x70
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* MiddleShakeConfig; // 0x78
		::System::String* AvatarEffectAttachPoint; // 0x80
		::System::Single StruggleProtectAngle; // 0x88
		::System::Single MinStruggleRadius; // 0x8C
		::System::Single AvatarStruggleFrequency; // 0x90
		::System::Single IceBreakDuration_Delta; // 0x94
		::System::Single FrozenProtectCD; // 0x98
		::System::Single SlowDownTime; // 0x9C
		::System::Single AvatarSlowDownTime; // 0xA0
		::System::Single AvatarStruggleCD; // 0xA4
		::System::Single IceBreakDuration_Ratio; // 0xA8
		::System::Single MaxStruggleRadius; // 0xAC
		::System::Single StruggleReduceTime; // 0xB0
		::System::Single StruggleTime; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFROZENBUFF__CTOR_OFFSET))(this);
		}
	};
}
