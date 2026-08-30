#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;

#define ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x15364440)
#define ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x153644D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FloatPropertyData_TypeDefinitionIndex = 49810;

	class FloatPropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET))(this);
		}
	};
}
