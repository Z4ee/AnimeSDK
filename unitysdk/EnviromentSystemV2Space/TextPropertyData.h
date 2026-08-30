#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET UNITYSDK_OFFSET(0x199E6900)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x199E69D0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x199E6A70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextPropertyData_TypeDefinitionIndex = 49813;

	class TextPropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_50F156471F8D4EB9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET))(this);
		}
	};
}
