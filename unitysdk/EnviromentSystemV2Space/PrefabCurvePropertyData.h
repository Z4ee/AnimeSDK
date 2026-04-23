#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyData.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_35F88F8F0390DB9A_OFFSET UNITYSDK_OFFSET(0xF938BB0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_4F816AD42E79C1BC_OFFSET UNITYSDK_OFFSET(0xF938D60)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0xF938E70)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_E3DABABAFC459BA9_OFFSET UNITYSDK_OFFSET(0xF938B60)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF938D20)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PrefabCurvePropertyData_TypeDefinitionIndex = 45995;

	class PrefabCurvePropertyData : public ::EnviromentSystemV2Space::PrefabPropertyData
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* times; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* paths; // 0x40
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_4_E3DABABAFC459BA9(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_E3DABABAFC459BA9_OFFSET))(this, a1);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_35F88F8F0390DB9A()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_35F88F8F0390DB9A_OFFSET))(this);
		}

		::System::Boolean Method_4_4F816AD42E79C1BC(::EnviromentSystemV2Space::PropertyDataBase* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_4F816AD42E79C1BC_OFFSET))(this, P0);
		}

		::Class_1_EAF7984A8FAD6BE4* Method_4_9BADE3E301981C8B()
		{
			return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_METHOD_4_9BADE3E301981C8B_OFFSET))(this);
		}
	};
}
