#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D21AAB0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET UNITYSDK_OFFSET(0x1D21AA70)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D21AC40)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_GET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1D21AA40)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1D21AA60)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x1D21ABF0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET UNITYSDK_OFFSET(0x1D21AC10)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D21AA90)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_SET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1D21AA50)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21AF10)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int PositionPredictor_TypeDefinitionIndex = 37736;

	class PositionPredictor : public ::System::Object
	{
	public:
		::System::Single m_SqrSpeed; // 0x10
		::System::Single _Smoothing_k__BackingField; // 0x14
		::UnityEngine::Vector3 m_Pos; // 0x18
		::UnityEngine::Vector3 m_Velocity; // 0x24
		::UnityEngine::Vector3 m_SmoothDampVelocity; // 0x30
		::System::Boolean m_HavePos; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_Smoothing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_GET_SMOOTHING_OFFSET))(this);
		}

		::System::Void set_Smoothing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_SET_SMOOTHING_OFFSET))(this, a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void ApplyTransformDelta(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET))(this);
		}

		::System::Void AddPosition(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 PredictPositionDelta(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PredictPosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET))(this, a1);
		}

		::System::Void ApplyWorldTransform(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYWORLDTRANSFORM_OFFSET))(this, a1, a2);
		}
	};
}
