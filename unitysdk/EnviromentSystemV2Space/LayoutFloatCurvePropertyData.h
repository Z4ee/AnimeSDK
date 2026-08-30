#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace UnityEngine { class AnimationCurve; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_METHOD_4_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x106E9B50)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106E9C30)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutFloatCurvePropertyData_TypeDefinitionIndex = 49800;

	class LayoutFloatCurvePropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::UnityEngine::AnimationCurve*>
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_CF780FC3D0CB1833()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_METHOD_4_CF780FC3D0CB1833_OFFSET))(this);
		}
	};
}
