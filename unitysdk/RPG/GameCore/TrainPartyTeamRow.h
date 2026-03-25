#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B10E0)
#define RPG_GAMECORE_TRAINPARTYTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B1370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyTeamRow_TypeDefinitionIndex = 14033;

	class TrainPartyTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PassengerList; // 0x10
		::System::UInt32 TeamID; // 0x18
		::System::UInt32 LeaderWorkingBuffID; // 0x1C
		::RPG::Client::TextID TeamName; // 0x20
		::System::UInt32 InitialMeetingSkill; // 0x30
		::System::UInt32 GridNum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyTeamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTEAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
