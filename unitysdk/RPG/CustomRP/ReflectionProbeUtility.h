#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x16AD3580)
#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETNULLGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x16AD35E0)
#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD3610)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionProbeUtility_TypeDefinitionIndex = 29196;

	class ReflectionProbeUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void SetGlobalProbe(::UnityEngine::Texture* probe, ::UnityEngine::Vector4 probeHDR, ::UnityEngine::Texture* ramp, ::System::Single rampIntensity, ::System::Single probeRampBlend, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETGLOBALPROBE_OFFSET))(probe, probeHDR, ramp, rampIntensity, probeRampBlend, index);
		}

		static ::System::Void SetNullGlobalProbe(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETNULLGLOBALPROBE_OFFSET))(index);
		}
	};
}
