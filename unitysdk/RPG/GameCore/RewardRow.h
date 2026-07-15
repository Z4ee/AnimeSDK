#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REWARDROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D02B140)
#define RPG_GAMECORE_REWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D02B870)
#define RPG_GAMECORE_REWARDROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D02C820)
#define RPG_GAMECORE_REWARDROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D02C880)
#define RPG_GAMECORE_REWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02C8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewardRow_TypeDefinitionIndex = 14073;

	class RewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level_1; // 0x10
		::System::UInt32 Count_4; // 0x14
		::System::UInt32 ItemID_2; // 0x18
		::System::UInt32 Rank_2; // 0x1C
		::System::UInt32 Level_3; // 0x20
		::System::UInt32 RewardID; // 0x24
		::System::UInt32 Rank_1; // 0x28
		::System::UInt32 Level_5; // 0x2C
		::System::UInt32 Level_2; // 0x30
		::System::UInt32 Count_3; // 0x34
		::System::UInt32 ItemID_1; // 0x38
		::System::UInt32 Rank_6; // 0x3C
		::System::Boolean IsSpecial; // 0x40
		::System::UInt32 Rank_5; // 0x44
		::System::UInt32 ItemID_4; // 0x48
		::System::UInt32 Count_2; // 0x4C
		::System::UInt32 Hcoin; // 0x50
		::System::UInt32 ItemID_3; // 0x54
		::System::UInt32 Count_1; // 0x58
		::System::UInt32 Rank_3; // 0x5C
		::System::UInt32 ItemID_5; // 0x60
		::System::UInt32 Count_5; // 0x64
		::System::UInt32 Count_6; // 0x68
		::System::UInt32 Level_6; // 0x6C
		::System::UInt32 ItemID_6; // 0x70
		::System::UInt32 Rank_4; // 0x74
		::System::UInt32 Level_4; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewardRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
