#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMSTUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2E73D0)
#define RPG_GAMECORE_MUSEUMSTUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStuffRow_TypeDefinitionIndex = 14118;

	class MuseumStuffRow : public ::System::Object
	{
	public:
		::System::UInt32 RecruitUnlockMission; // 0x10
		::System::UInt32 RecruitPrice; // 0x14
		::RPG::GameCore::StuffType Type; // 0x18
		::System::UInt32 StatsA; // 0x1C
		::System::UInt32 CollectedReward; // 0x20
		::System::UInt32 DisplayOrder; // 0x24
		::System::UInt32 UnlockPhase; // 0x28
		::RPG::Client::TextID EvidenceInfoTextID; // 0x30
		::System::UInt32 StatsB; // 0x40
		::System::UInt32 SceneGroupID; // 0x44
		::System::Boolean IsTargetReward; // 0x48
		::System::Boolean IsInitial; // 0x49
		::System::UInt32 ItemID; // 0x4C
		::RPG::Client::TextID MuseumStuffDesc; // 0x50
		::System::UInt32 ScenePropID; // 0x60
		::System::UInt32 StatsC; // 0x64

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
