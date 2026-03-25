#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEMONSTERREWARDITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17768C70)
#define RPG_GAMECORE_STAGEMONSTERREWARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17768DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterRewardItem_TypeDefinitionIndex = 13890;

	class StageMonsterRewardItem : public ::System::Object
	{
	public:
		::System::UInt32 Count; // 0x10
		::System::UInt32 Rank; // 0x14
		::System::UInt32 ItemID; // 0x18
		::System::UInt32 Level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERREWARDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageMonsterRewardItem*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageMonsterRewardItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERREWARDITEM_FROMBINARY_OFFSET))(array, val);
		}
	};
}
