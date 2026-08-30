#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E960)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B81680)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2E950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewardExcelTable_IndexKey_TypeDefinitionIndex = 14495;

	struct alignas(4) RewardExcelTable_IndexKey
	{
		::System::UInt32 RewardID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::RewardExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RewardExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
