#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_EQUALS_OFFSET UNITYSDK_OFFSET(0xE90F1D0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE90F4E0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_METHOD_1_F4D768D64F0A99F7_OFFSET UNITYSDK_OFFSET(0xE90EEE0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG__CTOR_OFFSET UNITYSDK_OFFSET(0xE90EE70)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportDataLong_TypeDefinitionIndex = 49586;

	class LightSetExportDataLong : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Int64>* ids; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_F4D768D64F0A99F7(::ScenenLightManager::LightSetExportDataLong* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetExportDataLong*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_METHOD_1_F4D768D64F0A99F7_OFFSET))(this, a1);
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
