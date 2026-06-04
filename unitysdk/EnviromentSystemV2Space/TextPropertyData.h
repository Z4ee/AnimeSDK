#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_3DAE9BB06CDDA5A8_OFFSET UNITYSDK_OFFSET(0x135F23D0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_50F156471F8D4EB9_OFFSET UNITYSDK_OFFSET(0x135F21F0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x135F22C0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET UNITYSDK_OFFSET(0x135F23E0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135D84D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextPropertyData_TypeDefinitionIndex = 46567;

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

		::Class_1_EAF7984A8FAD6BE4* Method_3_CF780FC3D0CB1833()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_CF780FC3D0CB1833_OFFSET))(this);
		}

		::System::Boolean Method_3_3DAE9BB06CDDA5A8(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_3DAE9BB06CDDA5A8_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_F04EA340514506C2()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_METHOD_3_F04EA340514506C2_OFFSET))(this);
		}
	};
}
