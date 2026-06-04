#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19824D50)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198253F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRaidRow_TypeDefinitionIndex = 13121;

	class HeliobusChallengeRaidRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x10
		::RPG::Client::TextID UnlockTips; // 0x18
		::System::UInt32 RaidID; // 0x28
		::System::UInt32 ChallengeRaidID; // 0x2C
		::System::UInt32 UnlockQuestID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusChallengeRaidRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeRaidRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
