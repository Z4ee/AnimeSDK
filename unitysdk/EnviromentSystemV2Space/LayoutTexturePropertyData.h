#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_METHOD_4_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x17C3BAE0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3BBA0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutTexturePropertyData_TypeDefinitionIndex = 47517;

	class LayoutTexturePropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_E4886687508BA48F()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_METHOD_4_E4886687508BA48F_OFFSET))(this);
		}
	};
}
