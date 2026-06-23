#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_1_9B5953640339AD7B;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x161FE940)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG_NOISEPOINT_OFFSET UNITYSDK_OFFSET(0x161FE770)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x161FEB80)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int PerlinNoiseConfig_TypeDefinitionIndex = 60926;

	class PerlinNoiseConfig : public ::System::Object
	{
	public:
		// static const ::System::Int32 RandomPrecision = 0x186A0; // 0x0
		::System::Boolean Enable; // 0x10
		::System::Boolean EnableStrengthRandom; // 0x11
		::System::Boolean EnableFrequenceRandom; // 0x12
		::UnityEngine::Vector3 NoiseStrength; // 0x14
		::UnityEngine::Vector3 NoiseStrengthExt; // 0x20
		::System::Int32 Frequence; // 0x2C
		::System::Int32 FrequenceExt; // 0x30
		::System::Boolean EnableDynamicByTime; // 0x34
		::System::Single TimeScale; // 0x38
		::System::Boolean EnableBlendCurve; // 0x3C
		::UnityEngine::AnimationCurve* NoiseBlendCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 NoisePoint(::UnityEngine::Vector3 inValue, ::UnityEngine::Vector3 overrideStrength, ::System::Int32 overriderFrequence, ::System::Single time, ::System::Single globalTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG_NOISEPOINT_OFFSET))(this, inValue, overrideStrength, overriderFrequence, time, globalTime);
		}

		::Class_1_9B5953640339AD7B* CreateInstance(::Class_1_2DDAC2F6C97EB8AD* randomGenerator)
		{
			return ((::Class_1_9B5953640339AD7B*(*)(::PVOID, ::Class_1_2DDAC2F6C97EB8AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PERLINNOISECONFIG_CREATEINSTANCE_OFFSET))(this, randomGenerator);
		}
	};
}
