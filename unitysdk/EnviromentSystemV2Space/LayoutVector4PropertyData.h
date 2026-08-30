#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyData_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_METHOD_4_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x106EA320)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106EA3D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutVector4PropertyData_TypeDefinitionIndex = 49796;

	class LayoutVector4PropertyData : public ::EnviromentSystemV2Space::LayoutPropertyData_1<::UnityEngine::Vector4>
	{
	public:
		::System::Int32 useDim; // 0x48
		::System::Boolean isColor; // 0x4C
		::System::Boolean HDRColor; // 0x4D
		::System::Boolean linearColor; // 0x4E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA__CTOR_OFFSET))(this);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_F2B94768004EB1C1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_METHOD_4_F2B94768004EB1C1_OFFSET))(this);
		}
	};
}
