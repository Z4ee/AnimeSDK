#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC5660)
#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC5970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2ChallengerRow_TypeDefinitionIndex = 11385;

	class MatchThreeV2ChallengerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StarTargetList; // 0x10
		::System::String* ChallengerImage; // 0x18
		::System::UInt32 ChallengerID; // 0x20
		::System::UInt32 LevelID; // 0x24
		::RPG::Client::TextID ChallengerDesc; // 0x28
		::RPG::Client::TextID ChallengerTitle; // 0x38
		::System::UInt32 UnlockBattleItem; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2ChallengerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2ChallengerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
