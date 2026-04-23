#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18718000)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18718FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeSeasonConfigRow_TypeDefinitionIndex = 12195;

	class BoxingClubChallengeSeasonConfigRow : public ::System::Object
	{
	public:
		::System::String* SeasonIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ChallengeIDList; // 0x18
		::System::String* SeasonTabPath; // 0x20
		::System::String* ActivityTitle; // 0x28
		::Il2CppArray<::System::UInt32>* ActivityQuestID; // 0x30
		::System::UInt32 SeasonID; // 0x38
		::RPG::GameCore::BoxingClubActivityType SeasonType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
