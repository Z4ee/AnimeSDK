#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_1FCC85A147E9D2FD_OFFSET UNITYSDK_OFFSET(0x135F3210)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_2F9585153299F34B_OFFSET UNITYSDK_OFFSET(0x135F3020)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x135F3110)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_95170FA4577FF7C4_OFFSET UNITYSDK_OFFSET(0x135F3200)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135F31E0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int Vector4PropertyData_TypeDefinitionIndex = 46566;

	class Vector4PropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::UnityEngine::Vector4>
	{
	public:
		::System::Int32 usrData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_2F9585153299F34B(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_2F9585153299F34B_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_82ABFE24D5168B0C()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_82ABFE24D5168B0C_OFFSET))(this);
		}

		::System::Boolean Method_3_95170FA4577FF7C4(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_95170FA4577FF7C4_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_1FCC85A147E9D2FD()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_METHOD_3_1FCC85A147E9D2FD_OFFSET))(this);
		}
	};
}
