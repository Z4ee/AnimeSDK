#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET UNITYSDK_OFFSET(0x10373250)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET UNITYSDK_OFFSET(0x10373260)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x10373170)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET UNITYSDK_OFFSET(0x103730A0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10373230)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TexturePropertyData_TypeDefinitionIndex = 40078;

	class TexturePropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_F6AE0F54C683F5CD(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_E4886687508BA48F()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_E4886687508BA48F_OFFSET))(this);
		}

		::System::Boolean Method_3_4F816AD42E79C1BC(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_59779CE445A59A8E()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_METHOD_3_59779CE445A59A8E_OFFSET))(this);
		}
	};
}
