#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x20E84C0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20E84E0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20E9C10)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipOverrideExcelTable_IndexKey_TypeDefinitionIndex = 13159;

	struct alignas(4) PerformanceSkipOverrideExcelTable_IndexKey
	{
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14

		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType PerformanceType, ::System::UInt32 PerformanceID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, PerformanceType, PerformanceID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
