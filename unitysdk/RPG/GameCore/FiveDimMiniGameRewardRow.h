#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMINIGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0F0B70)
#define RPG_GAMECORE_FIVEDIMMINIGAMEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F0D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameRewardRow_TypeDefinitionIndex = 14006;

	class FiveDimMiniGameRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 OneTimeRewardID; // 0x10
		::System::UInt32 MiniGameID; // 0x14
		::System::UInt32 RepeatableRewardID; // 0x18
		::System::UInt32 ScoreLine; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
