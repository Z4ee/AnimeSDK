#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class BlendingValBase; }
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_647B967D27CD1AE1_OFFSET UNITYSDK_OFFSET(0x10372440)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_9AB715FC68AE0629_OFFSET UNITYSDK_OFFSET(0x10372600)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_BD4FC714E5BBCF11_OFFSET UNITYSDK_OFFSET(0x103726B0)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_E3DABABAFC459BA9_OFFSET UNITYSDK_OFFSET(0x103723F0)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10372700)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10372660)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int StructureData_TypeDefinitionIndex = 40090;

	class StructureData : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		::EnviromentSystemV2Space::LLGKeyValuePairs* defVal; // 0x28
		::System::String* AssemblyQualifiedName; // 0x30
		::System::String* serializedInstance; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_E3DABABAFC459BA9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_E3DABABAFC459BA9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_2_647B967D27CD1AE1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_647B967D27CD1AE1_OFFSET))(this);
		}

		::System::Void Method_2_9AB715FC68AE0629(::EnviromentSystemV2Space::BlendingValBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::BlendingValBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_9AB715FC68AE0629_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_BD4FC714E5BBCF11(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_BD4FC714E5BBCF11_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
