#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class AnimationCurve4; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_METHOD_4_351DA50719BEBFC5_OFFSET UNITYSDK_OFFSET(0x10370C20)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10370D70)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10370D50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutVector4CurvePropertyData_TypeDefinitionIndex = 40064;

	class LayoutVector4CurvePropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::EnviromentSystemV2Space::AnimationCurve4*>
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_351DA50719BEBFC5()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_METHOD_4_351DA50719BEBFC5_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
