#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;

#define ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0xF1FA350)
#define ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF1FA3E0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int IntPropertyData_TypeDefinitionIndex = 47528;

	class IntPropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET))(this);
		}
	};
}
