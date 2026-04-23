#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPTIONALREWARDQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BCA8E0)
#define RPG_GAMECORE_OPTIONALREWARDQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCAEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionalRewardQuestRow_TypeDefinitionIndex = 13780;

	class OptionalRewardQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 OptionalGiftItemID; // 0x10
		::System::UInt32 QuestID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OptionalRewardQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionalRewardQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
