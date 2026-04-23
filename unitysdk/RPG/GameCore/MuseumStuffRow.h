#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B71810)
#define RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B71DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 13482;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EvidenceInfoTextID; // 0x10
		::System::UInt32 DisplayOrder; // 0x20
		::System::UInt32 ItemID; // 0x24
		::System::UInt32 RecruitUnlockMission; // 0x28
		::System::UInt32 UnlockPhase; // 0x2C
		::System::UInt32 StatsB; // 0x30
		::System::UInt32 StatsC; // 0x34
		::System::UInt32 ScenePropID; // 0x38
		::System::UInt32 SceneGroupID; // 0x3C
		::System::UInt32 RecruitPrice; // 0x40
		::RPG::GameCore::StuffType Type; // 0x44
		::System::UInt32 CollectedReward; // 0x48
		::System::Boolean IsInitial; // 0x4C
		::System::Boolean IsTargetReward; // 0x4D
		::System::UInt32 StatsA; // 0x50
		::RPG::Client::TextID MuseumStuffDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumStuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumStuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
