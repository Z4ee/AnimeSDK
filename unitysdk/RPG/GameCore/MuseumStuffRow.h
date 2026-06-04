#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199C0820)
#define RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199C0DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 13553;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::Boolean IsInitial; // 0x14
		::System::Boolean IsTargetReward; // 0x15
		::RPG::Client::TextID EvidenceInfoTextID; // 0x18
		::RPG::Client::TextID MuseumStuffDesc; // 0x28
		::System::UInt32 RecruitPrice; // 0x38
		::System::UInt32 StatsB; // 0x3C
		::System::UInt32 CollectedReward; // 0x40
		::RPG::GameCore::StuffType Type; // 0x44
		::System::UInt32 RecruitUnlockMission; // 0x48
		::System::UInt32 StatsA; // 0x4C
		::System::UInt32 UnlockPhase; // 0x50
		::System::UInt32 StatsC; // 0x54
		::System::UInt32 DisplayOrder; // 0x58
		::System::UInt32 ScenePropID; // 0x5C
		::System::UInt32 SceneGroupID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumStuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumStuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
