#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET UNITYSDK_OFFSET(0x17C3DF40)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x17C3E010)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3E0D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TexturePropertyData_TypeDefinitionIndex = 47535;

	class TexturePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_50F156471F8D4EB9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_E4886687508BA48F()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET))(this);
		}
	};
}
