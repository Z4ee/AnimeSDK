#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/ValueOrCurve1_1.h"

#define MOLEMOLE_UTILS_VALUEORCURVEFLOAT_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x113407E0)
#define MOLEMOLE_UTILS_VALUEORCURVEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x11340860)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveFloat_TypeDefinitionIndex = 43849;

	class ValueOrCurveFloat : public ::MoleMole::Utils::ValueOrCurve1_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single SampleCurve(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_VALUEORCURVEFLOAT_SAMPLECURVE_OFFSET))(this, time);
		}
	};
}
