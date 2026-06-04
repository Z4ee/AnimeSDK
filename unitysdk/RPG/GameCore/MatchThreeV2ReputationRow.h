#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198F7090)
#define RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198F7430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2ReputationRow_TypeDefinitionIndex = 11428;

	class MatchThreeV2ReputationRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* BgPath; // 0x18
		::Il2CppArray<::System::UInt32>* ChallengerList; // 0x20
		::RPG::Client::TextID LevelUpDesc; // 0x28
		::System::UInt32 Reputation; // 0x38
		::System::UInt32 LevelUpReward; // 0x3C
		::RPG::Client::TextID TabName; // 0x40
		::RPG::Client::TextID Title; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2ReputationRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2ReputationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2REPUTATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
