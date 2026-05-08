#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/ValueOrCurve3_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UTILS_VALUEORCURVEVECTOR3_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0xF3AD370)
#define MOLEMOLE_UTILS_VALUEORCURVEVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0xF3AD470)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveVector3_TypeDefinitionIndex = 52089;

	class ValueOrCurveVector3 : public ::MoleMole::Utils::ValueOrCurve3_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 SampleCurve(::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEVECTOR3_SAMPLECURVE_OFFSET))(this, time);
		}
	};
}
