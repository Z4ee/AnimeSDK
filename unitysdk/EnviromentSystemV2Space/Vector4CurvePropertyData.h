#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class AnimationCurve4; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_METHOD_3_351DA50719BEBFC5_OFFSET UNITYSDK_OFFSET(0x17C3E980)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET UNITYSDK_OFFSET(0x17C3E910)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3EAB0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int Vector4CurvePropertyData_TypeDefinitionIndex = 47538;

	class Vector4CurvePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::EnviromentSystemV2Space::AnimationCurve4*>
	{
	public:
		::System::Int32 usrData; // 0x30
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_87C0E26F1D61379E(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_METHOD_3_87C0E26F1D61379E_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_351DA50719BEBFC5()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_METHOD_3_351DA50719BEBFC5_OFFSET))(this);
		}
	};
}
