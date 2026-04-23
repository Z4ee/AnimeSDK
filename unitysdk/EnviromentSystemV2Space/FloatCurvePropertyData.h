#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace UnityEngine { class AnimationCurve; }

#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET UNITYSDK_OFFSET(0xF935120)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0xF935020)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET UNITYSDK_OFFSET(0xF935130)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET UNITYSDK_OFFSET(0xF934F40)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF935100)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FloatCurvePropertyData_TypeDefinitionIndex = 45989;

	class FloatCurvePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::UnityEngine::AnimationCurve*>
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_F6AE0F54C683F5CD(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_CF780FC3D0CB1833()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET))(this);
		}

		::System::Boolean Method_3_4F816AD42E79C1BC(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_F04EA340514506C2()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET))(this);
		}
	};
}
