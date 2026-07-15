#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_METHOD_1_E3DABABAFC459BA9_OFFSET UNITYSDK_OFFSET(0x17C3D600)
#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17C3D650)
#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3BA10)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PropertyDataBase_TypeDefinitionIndex = 47526;

	class PropertyDataBase : public ::System::Object
	{
	public:
		::System::Int32 serId; // 0x10
		::System::String* internalName; // 0x18
		::System::Int32 metaInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_E3DABABAFC459BA9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_METHOD_1_E3DABABAFC459BA9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_1_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
