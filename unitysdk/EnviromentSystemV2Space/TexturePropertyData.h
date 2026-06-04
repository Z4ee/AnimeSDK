#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_3DAE9BB06CDDA5A8_OFFSET UNITYSDK_OFFSET(0x135F25A0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET UNITYSDK_OFFSET(0x135F23F0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET UNITYSDK_OFFSET(0x135F25B0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x135F24C0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135F2580)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TexturePropertyData_TypeDefinitionIndex = 46570;

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

		::System::Boolean Method_3_3DAE9BB06CDDA5A8(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_3DAE9BB06CDDA5A8_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_59779CE445A59A8E()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET))(this);
		}
	};
}
