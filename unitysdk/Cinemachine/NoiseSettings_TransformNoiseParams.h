#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/NoiseSettings_NoiseParams.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_NOISESETTINGS_TRANSFORMNOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x2BD1490)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_TransformNoiseParams_TypeDefinitionIndex = 36904;

	struct alignas(4) NoiseSettings_TransformNoiseParams
	{
		::Cinemachine::NoiseSettings_NoiseParams X; // 0x10
		::Cinemachine::NoiseSettings_NoiseParams Y; // 0x1C
		::Cinemachine::NoiseSettings_NoiseParams Z; // 0x28

		/*
		::UnityEngine::Vector3 GetValueAt(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_TRANSFORMNOISEPARAMS_GETVALUEAT_OFFSET))(this, a1, a2);
		}
		*/
	};
}
