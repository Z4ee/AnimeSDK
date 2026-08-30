#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AstraFX/Fireworks/RibbonPatternChannel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define ASTRAFX_FIREWORKS_FIREWORKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15971C50)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int FireworkType_TypeDefinitionIndex = 49455;

	class FireworkType : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single intensity; // 0x18
		::System::Single particleSize; // 0x1C
		::System::Single particleSizeRandom; // 0x20
		::System::Int32 explosionParticleCount; // 0x24
		::System::Single explosionForce; // 0x28
		::System::Single explosionForceRandom; // 0x2C
		::System::Single sphereUniformity; // 0x30
		::System::Single particleLifetime; // 0x34
		::System::Single particleLifetimeRandom; // 0x38
		::System::Single hueShiftRange; // 0x3C
		::System::Single debrisHdrIntensity; // 0x40
		::UnityEngine::Gradient* particleColorOverLifetime; // 0x48
		::AstraFX::Fireworks::RibbonPatternChannel ribbonChannel; // 0x50
		::System::Single ribbonBaseWidth; // 0x54
		::System::Single ribbonTaperPower; // 0x58
		::UnityEngine::Vector2 ribbonPatternUVSpeed; // 0x5C
		::UnityEngine::Vector2 ribbonPatternUVScale; // 0x64
		::System::Single ribbonHdrIntensity; // 0x6C
		::System::Single ribbonLengthScale; // 0x70
		::UnityEngine::Gradient* ribbonColorOverLifetime; // 0x78
		::System::Single launchSpeed; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_FIREWORKTYPE__CTOR_OFFSET))(this);
		}
	};
}
