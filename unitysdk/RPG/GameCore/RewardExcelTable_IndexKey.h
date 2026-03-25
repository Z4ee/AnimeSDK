#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x29140)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20E8410)
#define RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewardExcelTable_IndexKey_TypeDefinitionIndex = 13386;

	struct alignas(4) RewardExcelTable_IndexKey
	{
		::System::UInt32 RewardID; // 0x10

		::System::Void _ctor(::System::UInt32 RewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, RewardID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::RewardExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RewardExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
