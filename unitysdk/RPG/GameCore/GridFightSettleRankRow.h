#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D166A80)
#define RPG_GAMECORE_GRIDFIGHTSETTLERANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D166CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSettleRankRow_TypeDefinitionIndex = 13326;

	class GridFightSettleRankRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RankName; // 0x10
		::RPG::GameCore::GridFightSettleRankType SettleRankType; // 0x20
		::System::UInt32 Rank_LeftInterval; // 0x24
		::System::UInt32 Rank_RightInterval; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSETTLERANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSettleRankRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSettleRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
