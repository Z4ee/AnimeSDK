#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyData_1.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_METHOD_3_1180333F99735694_OFFSET UNITYSDK_OFFSET(0xF1E5EF0)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_METHOD_3_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0xF1E5FF0)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E60B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvResourceDataAdapterPropertyData_TypeDefinitionIndex = 47533;

	class EnvResourceDataAdapterPropertyData : public ::EnviromentSystemV2Space::PropertyData_1<::System::String*>
	{
	public:
		::System::String* typeInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_1180333F99735694(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_METHOD_3_1180333F99735694_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_3_A8D19485AA054B2A()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_METHOD_3_A8D19485AA054B2A_OFFSET))(this);
		}
	};
}
