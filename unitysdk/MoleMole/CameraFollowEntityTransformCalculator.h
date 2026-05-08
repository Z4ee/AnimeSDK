#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineTransformCalculatorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR_PROCESSS_OFFSET UNITYSDK_OFFSET(0xECE7570)
#define MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xECE7AA0)
#define MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR___BASE_PROCESSS_OFFSET UNITYSDK_OFFSET(0xECE7AB0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraFollowEntityTransformCalculator_TypeDefinitionIndex = 70553;

	class CameraFollowEntityTransformCalculator : public ::MoleMole::TimelineTransformCalculatorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Processs(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR_PROCESSS_OFFSET))(this, position, rotation);
		}

		::System::Boolean __base_Processs(::UnityEngine::Vector3& P0, ::UnityEngine::Quaternion& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAFOLLOWENTITYTRANSFORMCALCULATOR___BASE_PROCESSS_OFFSET))(this, P0, P1);
		}
	};
}
