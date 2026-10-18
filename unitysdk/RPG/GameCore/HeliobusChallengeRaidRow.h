#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75CA30)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRaidRow_TypeDefinitionIndex = 13767;

	class HeliobusChallengeRaidRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x10
		::System::UInt32 UnlockQuestID; // 0x18
		::RPG::Client::TextID UnlockTips; // 0x20
		::System::UInt32 ChallengeRaidID; // 0x30
		::System::UInt32 RaidID; // 0x34

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
