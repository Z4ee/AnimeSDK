#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x384B490)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x384B4B0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3853990)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipOverrideExcelTable_IndexKey_TypeDefinitionIndex = 13691;

	struct alignas(4) PerformanceSkipOverrideExcelTable_IndexKey
	{
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14

		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
