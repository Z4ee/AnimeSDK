#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET UNITYSDK_OFFSET(0xF93AA00)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_1_OFFSET UNITYSDK_OFFSET(0xF93AA10)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0xF93A910)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET UNITYSDK_OFFSET(0xF93A820)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF93A9E0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int Vector4PropertyData_TypeDefinitionIndex = 45983;

	class Vector4PropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::UnityEngine::Vector4>
	{
	public:
		::System::Int32 usrData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_F6AE0F54C683F5CD(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_F6AE0F54C683F5CD_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET))(this);
		}

		::System::Boolean Method_3_4F816AD42E79C1BC(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_4F816AD42E79C1BC_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C_1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_1_OFFSET))(this);
		}
	};
}
