#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_EQUALS_OFFSET UNITYSDK_OFFSET(0xB937750)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB937A10)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_METHOD_1_7172FE331F6185E2_OFFSET UNITYSDK_OFFSET(0xB937490)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG__CTOR_OFFSET UNITYSDK_OFFSET(0xB9373E0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportDataLong_TypeDefinitionIndex = 45758;

	class LightSetExportDataLong : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Int64>* ids; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_7172FE331F6185E2(::ScenenLightManager::LightSetExportDataLong* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetExportDataLong*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_METHOD_1_7172FE331F6185E2_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GETHASHCODE_OFFSET))(this);
		}
	};
}
