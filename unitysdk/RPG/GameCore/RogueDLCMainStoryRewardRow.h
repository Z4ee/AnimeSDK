#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0F480)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0FF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRewardRow_TypeDefinitionIndex = 13998;

	class RogueDLCMainStoryRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 Sort; // 0x14
		::System::UInt32 IsImportant; // 0x18
		::System::UInt32 MainStoryReward; // 0x1C
		::System::UInt32 MainStoryID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCMainStoryRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
