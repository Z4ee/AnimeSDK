#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0xF937550)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xF937680)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF937660)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutTextPropertyData_TypeDefinitionIndex = 45968;

	class LayoutTextPropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_CF780FC3D0CB1833()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_CF780FC3D0CB1833_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
