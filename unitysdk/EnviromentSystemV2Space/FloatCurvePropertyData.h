#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace UnityEngine { class AnimationCurve; }

#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_2F9585153299F34B_OFFSET UNITYSDK_OFFSET(0x135ED840)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_6A79026F335B11B2_OFFSET UNITYSDK_OFFSET(0x135ED650)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x135ED740)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET UNITYSDK_OFFSET(0x135ED850)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135ED820)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FloatCurvePropertyData_TypeDefinitionIndex = 46572;

	class FloatCurvePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::UnityEngine::AnimationCurve*>
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_6A79026F335B11B2(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_6A79026F335B11B2_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_CF780FC3D0CB1833()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET))(this);
		}

		::System::Boolean Method_3_2F9585153299F34B(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_2F9585153299F34B_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_F04EA340514506C2()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET))(this);
		}
	};
}
