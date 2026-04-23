#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_DAMPER_DAMP_1_OFFSET UNITYSDK_OFFSET(0x12BAC2C0)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_2_OFFSET UNITYSDK_OFFSET(0x12BAC470)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x12BAC250)
#define CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET UNITYSDK_OFFSET(0x12BAC1F0)
#define CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET UNITYSDK_OFFSET(0x12BAC220)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int Damper_TypeDefinitionIndex = 36655;

	class Damper : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single kNegligibleResidual; // 0x0
		// static const ::System::Single kLogNegligibleResidual; // 0x0

		static ::System::Single DecayConstant(::System::Single time, ::System::Single residual)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET))(time, residual);
		}

		static ::System::Single DecayedRemainder(::System::Single initial, ::System::Single decayConstant, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET))(initial, decayConstant, deltaTime);
		}

		static ::System::Single Damp(::System::Single initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET))(initial, dampTime, deltaTime);
		}

		static ::UnityEngine::Vector3 Damp_1(::UnityEngine::Vector3 initial, ::UnityEngine::Vector3 dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_1_OFFSET))(initial, dampTime, deltaTime);
		}

		static ::UnityEngine::Vector3 Damp_2(::UnityEngine::Vector3 initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_2_OFFSET))(initial, dampTime, deltaTime);
		}
	};
}
