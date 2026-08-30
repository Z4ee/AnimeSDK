#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0CDC0)
#define RPG_GAMECORE_DRINKMAKERCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0D080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChallengeRow_TypeDefinitionIndex = 13085;

	class DrinkMakerChallengeRow : public ::System::Object
	{
	public:
		::System::String* ChallengePic; // 0x10
		::Il2CppArray<::System::UInt32>* ChallengeIngredientList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockParam; // 0x20
		::System::UInt32 ChallengeRewardID; // 0x28
		::System::UInt32 ChallengeRequest; // 0x2C
		::RPG::GameCore::DrinkMakerUnlockType UnlockType; // 0x30
		::System::UInt32 ChallengeID; // 0x34
		::System::UInt32 UnlockLevel; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
