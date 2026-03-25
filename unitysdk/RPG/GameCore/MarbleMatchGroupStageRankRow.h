#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHGROUPSTAGERANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17390F30)
#define RPG_GAMECORE_MARBLEMATCHGROUPSTAGERANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17391150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchGroupStageRankRow_TypeDefinitionIndex = 10908;

	class MarbleMatchGroupStageRankRow : public ::System::Object
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::UInt32 LostNum; // 0x14
		::System::UInt32 Rank; // 0x18
		::System::UInt32 WinNum; // 0x1C
		::System::UInt32 PlayerID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHGROUPSTAGERANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchGroupStageRankRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchGroupStageRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHGROUPSTAGERANKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
