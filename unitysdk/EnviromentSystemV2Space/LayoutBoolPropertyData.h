#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_METHOD_4_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x15366020)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x153660B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutBoolPropertyData_TypeDefinitionIndex = 49795;

	class LayoutBoolPropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_METHOD_4_82ABFE24D5168B0C_OFFSET))(this);
		}
	};
}
