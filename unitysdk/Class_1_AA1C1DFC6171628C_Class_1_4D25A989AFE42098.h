#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_1_AA1C1DFC6171628C_CLASS_1_4D25A989AFE42098_METHOD_1_16788240528196E1_OFFSET UNITYSDK_OFFSET(0x11FDA030)
#define CLASS_1_AA1C1DFC6171628C_CLASS_1_4D25A989AFE42098__CTOR_OFFSET UNITYSDK_OFFSET(0x11FDA020)

inline static constexpr unsigned int Class_1_AA1C1DFC6171628C_Class_1_4D25A989AFE42098_TypeDefinitionIndex = 58993;

class Class_1_AA1C1DFC6171628C_Class_1_4D25A989AFE42098 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_CLASS_1_4D25A989AFE42098__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_16788240528196E1(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_CLASS_1_4D25A989AFE42098_METHOD_1_16788240528196E1_OFFSET))(this, a1);
	}
};
