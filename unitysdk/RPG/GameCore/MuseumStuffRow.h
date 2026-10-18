#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89C3C0)
#define RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89C950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 14225;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::System::UInt32 RecruitUnlockMission; // 0x10
		::RPG::GameCore::StuffType Type; // 0x14
		::System::UInt32 ScenePropID; // 0x18
		::System::UInt32 SceneGroupID; // 0x1C
		::System::UInt32 DisplayOrder; // 0x20
		::System::Boolean IsInitial; // 0x24
		::System::Boolean IsTargetReward; // 0x25
		::System::UInt32 StatsC; // 0x28
		::System::UInt32 UnlockPhase; // 0x2C
		::System::UInt32 RecruitPrice; // 0x30
		::System::UInt32 StatsA; // 0x34
		::System::UInt32 ItemID; // 0x38
		::RPG::Client::TextID MuseumStuffDesc; // 0x40
		::System::UInt32 StatsB; // 0x50
		::System::UInt32 CollectedReward; // 0x54
		::RPG::Client::TextID EvidenceInfoTextID; // 0x58

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
