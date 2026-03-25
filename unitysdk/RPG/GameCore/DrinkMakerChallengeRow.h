#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17175010)
#define RPG_GAMECORE_DRINKMAKERCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171752E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChallengeRow_TypeDefinitionIndex = 12036;

	class DrinkMakerChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChallengeIngredientList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockParam; // 0x18
		::System::String* ChallengePic; // 0x20
		::System::UInt32 ChallengeRequest; // 0x28
		::System::UInt32 ChallengeRewardID; // 0x2C
		::RPG::GameCore::DrinkMakerUnlockType UnlockType; // 0x30
		::System::UInt32 UnlockLevel; // 0x34
		::System::UInt32 ChallengeID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerChallengeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHALLENGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
