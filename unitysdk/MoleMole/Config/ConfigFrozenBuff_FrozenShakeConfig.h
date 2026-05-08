#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGFROZENBUFF_FROZENSHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1102B470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFrozenBuff_FrozenShakeConfig_TypeDefinitionIndex = 47008;

	class ConfigFrozenBuff_FrozenShakeConfig : public ::System::Object
	{
	public:
		::System::String* ShakeEffect; // 0x10
		::UnityEngine::AnimationCurve* ShakeCurve; // 0x18
		::System::String* ShakeEffectAttachPoint; // 0x20
		::System::Single ShakeCD; // 0x28
		::System::Single MinShakeRadius; // 0x2C
		::System::Single ShakeProtectAngle; // 0x30
		::System::Single ShakeTime; // 0x34
		::System::Single ShakeFrequency; // 0x38
		::System::Single MaxShakeRadius; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFROZENBUFF_FROZENSHAKECONFIG__CTOR_OFFSET))(this);
		}
	};
}
