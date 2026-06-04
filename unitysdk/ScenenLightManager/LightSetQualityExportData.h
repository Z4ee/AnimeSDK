#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xD07C9D0)
#define SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD07CCB0)
#define SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_METHOD_1_9C442F1EEC673542_OFFSET UNITYSDK_OFFSET(0xD07C710)
#define SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07C6A0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetQualityExportData_TypeDefinitionIndex = 46343;

	class LightSetQualityExportData : public ::System::Object
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter name; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* ids; // 0x18

		::System::Void _ctor(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_9C442F1EEC673542(::ScenenLightManager::LightSetQualityExportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetQualityExportData*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_METHOD_1_9C442F1EEC673542_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETQUALITYEXPORTDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
