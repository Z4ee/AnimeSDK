#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D52F60)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D53550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousStoryRewardRow_TypeDefinitionIndex = 14138;

	class RogueNousStoryRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::Boolean IsImportant; // 0x14
		::System::UInt32 MainStoryReward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousStoryRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousStoryRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
