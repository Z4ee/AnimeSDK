#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190ADE80)
#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190AE080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyRewardConfigRow_TypeDefinitionIndex = 14552;

	class TrainPartyRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 RequireStar; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
