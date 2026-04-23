#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x12BAD660)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET UNITYSDK_OFFSET(0x12BAD620)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12BAD7F0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_GET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x12BAD5F0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x12BAD610)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x12BAD7A0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET UNITYSDK_OFFSET(0x12BAD7C0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET UNITYSDK_OFFSET(0x12BAD640)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_SET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x12BAD600)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12BADAA0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int PositionPredictor_TypeDefinitionIndex = 36654;

	class PositionPredictor : public ::System::Object
	{
	public:
		::System::Single m_SqrSpeed; // 0x10
		::System::Single _Smoothing_k__BackingField; // 0x14
		::UnityEngine::Vector3 m_Velocity; // 0x18
		::System::Boolean m_HavePos; // 0x24
		::UnityEngine::Vector3 m_SmoothDampVelocity; // 0x28
		::UnityEngine::Vector3 m_Pos; // 0x34

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

		::System::Void ApplyWorldTransform(::UnityEngine::Vector3 positionDelta, ::System::Single yawDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYWORLDTRANSFORM_OFFSET))(this, positionDelta, yawDelta);
		}
	};
}
