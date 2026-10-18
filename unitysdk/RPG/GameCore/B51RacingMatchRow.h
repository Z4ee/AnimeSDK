#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_B51RACINGMATCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D433D40)
#define RPG_GAMECORE_B51RACINGMATCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D434060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingMatchRow_TypeDefinitionIndex = 10958;

	class B51RacingMatchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x10
		::Il2CppArray<::System::UInt32>* TeamRankList; // 0x18
		::Il2CppArray<::System::UInt32>* EnemyCarIDList; // 0x20
		::System::Boolean IsTutorial; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 LockDriverID; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGMATCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingMatchRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingMatchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGMATCHROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
