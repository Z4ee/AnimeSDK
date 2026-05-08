#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C554960)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET UNITYSDK_OFFSET(0x1C554910)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_GET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1C5548E0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1C554900)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x1C554AB0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C554AD0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C554930)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_SET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1C5548F0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C554B00)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int PositionPredictor_TypeDefinitionIndex = 32645;

	class PositionPredictor : public ::System::Object
	{
	public:
		::System::Boolean m_HavePos; // 0x10
		::UnityEngine::Vector3 m_Velocity; // 0x14
		::UnityEngine::Vector3 m_SmoothDampVelocity; // 0x20
		::System::Single _Smoothing_k__BackingField; // 0x2C
		::UnityEngine::Vector3 m_Pos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_Smoothing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_GET_SMOOTHING_OFFSET))(this);
		}

		::System::Void set_Smoothing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_SET_SMOOTHING_OFFSET))(this, value);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void ApplyTransformDelta(::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET))(this, positionDelta);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET))(this);
		}

		::System::Void AddPosition(::UnityEngine::Vector3 pos, ::System::Single deltaTime, ::System::Single lookaheadTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET))(this, pos, deltaTime, lookaheadTime);
		}

		::UnityEngine::Vector3 PredictPositionDelta(::System::Single lookaheadTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET))(this, lookaheadTime);
		}

		::UnityEngine::Vector3 PredictPosition(::System::Single lookaheadTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET))(this, lookaheadTime);
		}
	};
}
