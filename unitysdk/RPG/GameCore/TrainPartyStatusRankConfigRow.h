#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C164AD0)
#define RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C164C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStatusRankConfigRow_TypeDefinitionIndex = 14707;

	class TrainPartyStatusRankConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RankRequireExp; // 0x10
		::System::UInt32 Rank; // 0x14
		::System::UInt32 RequireValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyStatusRankConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStatusRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATUSRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
