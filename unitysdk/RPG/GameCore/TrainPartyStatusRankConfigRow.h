#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B06A0)
#define RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B0810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStatusRankConfigRow_TypeDefinitionIndex = 14046;

	class TrainPartyStatusRankConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RequireValue; // 0x10
		::System::UInt32 RankRequireExp; // 0x14
		::System::UInt32 Rank; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyStatusRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStatusRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
