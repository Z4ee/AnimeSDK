#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D4950)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRewardRow_TypeDefinitionIndex = 13662;

	class HeliobusChallengeRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 UnlockQuest; // 0x18
		::System::UInt32 ChallengePhaseID; // 0x1C
		::System::UInt32 ChallengeRewardTabID; // 0x20
		::RPG::Client::TextID ChallengeRewardTabName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusChallengeRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
