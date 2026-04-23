#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_QUESTKEYPOINTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C81820)
#define RPG_GAMECORE_QUESTKEYPOINTREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C819D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestKeyPointRewardRow_TypeDefinitionIndex = 13732;

	class QuestKeyPointRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestKeyPointItem; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 QuestKeyPoint; // 0x18
		::System::UInt32 QuestKeyPointReward; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTKEYPOINTREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::QuestKeyPointRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestKeyPointRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTKEYPOINTREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
