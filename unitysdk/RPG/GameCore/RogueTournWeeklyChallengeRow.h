#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17670210)
#define RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176705E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournWeeklyChallengeRow_TypeDefinitionIndex = 13715;

	class RogueTournWeeklyChallengeRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayFinalMonsterGroups; // 0x10
		::Il2CppArray<::System::UInt32>* WeeklyContentDetailList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups3; // 0x20
		::Il2CppArray<::System::UInt32>* WeeklyContentList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups1; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterGroups2; // 0x38
		::RPG::Client::TextID WeeklyName; // 0x40
		::System::UInt32 ChallengeID; // 0x50
		::System::UInt32 RewardID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournWeeklyChallengeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournWeeklyChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYCHALLENGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
