#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xE90E7D0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE90EAE0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_METHOD_1_922FB2A73E3CC6C9_OFFSET UNITYSDK_OFFSET(0xE90E4E0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE90E470)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportData_TypeDefinitionIndex = 49584;

	class LightSetExportData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* ids; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_922FB2A73E3CC6C9(::ScenenLightManager::LightSetExportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetExportData*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_METHOD_1_922FB2A73E3CC6C9_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
