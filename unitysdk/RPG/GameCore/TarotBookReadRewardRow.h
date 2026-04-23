#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKREADREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFC770)
#define RPG_GAMECORE_TAROTBOOKREADREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFC8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookReadRewardRow_TypeDefinitionIndex = 14445;

	class TarotBookReadRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Number; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 Quest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREADREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookReadRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookReadRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREADREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
