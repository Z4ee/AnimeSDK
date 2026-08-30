#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x106EA030)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106EA0D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutTextPropertyData_TypeDefinitionIndex = 49797;

	class LayoutTextPropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_METHOD_4_82ABFE24D5168B0C_OFFSET))(this);
		}
	};
}
