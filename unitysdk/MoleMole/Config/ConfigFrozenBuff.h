#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFrozenBuff_FrozenShakeConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGFROZENBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1744C8E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFrozenBuff_TypeDefinitionIndex = 47007;

	class ConfigFrozenBuff : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* SlowDownCurve; // 0x10
		::System::String* BrokenEffectAttachPoint; // 0x18
		::System::String* LargeBrokenEffectName; // 0x20
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* MiddleShakeConfig; // 0x28
		::System::String* AvatarBrokenEffect; // 0x30
		::UnityEngine::AnimationCurve* StruggleCurve; // 0x38
		::System::String* SmallBrokenEffectName; // 0x40
		::System::String* BrokenEffectName; // 0x48
		::System::String* BrokenSound; // 0x50
		::UnityEngine::AnimationCurve* AvatarSlowDownCurve; // 0x58
		::System::String* MiddleBrokenEffectName; // 0x60
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* SmallShakeConfig; // 0x68
		::System::String* AvatarEffectAttachPoint; // 0x70
		::System::String* FrozenHitSound; // 0x78
		::MoleMole::Config::ConfigFrozenBuff_FrozenShakeConfig* LargeShakeConfig; // 0x80
		::System::Single SlowDownTime; // 0x88
		::System::Single MaxStruggleRadius; // 0x8C
		::System::Single IceBreakDuration_Delta; // 0x90
		::System::Single IceBreakDuration_Ratio; // 0x94
		::System::Single AvatarStruggleCD; // 0x98
		::System::Single StruggleTime; // 0x9C
		::System::Single StruggleProtectAngle; // 0xA0
		::System::Single AvatarStruggleFrequency; // 0xA4
		::System::Single StruggleReduceTime; // 0xA8
		::System::Single MinStruggleRadius; // 0xAC
		::System::Single AvatarSlowDownTime; // 0xB0
		::System::Single FrozenProtectCD; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFROZENBUFF__CTOR_OFFSET))(this);
		}
	};
}
