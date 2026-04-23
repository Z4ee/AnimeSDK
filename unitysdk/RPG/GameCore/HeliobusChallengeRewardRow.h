#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F30A0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F3760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRewardRow_TypeDefinitionIndex = 13040;

	class HeliobusChallengeRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID ChallengeRewardTabName; // 0x18
		::System::UInt32 ChallengePhaseID; // 0x28
		::System::UInt32 UnlockQuest; // 0x2C
		::System::UInt32 ChallengeRewardTabID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusChallengeRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
