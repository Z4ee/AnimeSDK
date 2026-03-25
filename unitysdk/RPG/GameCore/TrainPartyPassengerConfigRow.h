#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPASSENGERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178ADD00)
#define RPG_GAMECORE_TRAINPARTYPASSENGERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178AE100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPassengerConfigRow_TypeDefinitionIndex = 14053;

	class TrainPartyPassengerConfigRow : public ::System::Object
	{
	public:
		::System::String* AvatarRoundIconBgPath; // 0x10
		::System::String* MeetingIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* AvatarRoundIconPath; // 0x28
		::System::String* MiniIconPath; // 0x30
		::System::String* AvatarCardPrefabPath; // 0x38
		::RPG::Client::TextID UnlcokDesc; // 0x40
		::System::UInt32 PassengerQuest; // 0x50
		::RPG::Client::TextID Name; // 0x58
		::System::UInt32 PassengerID; // 0x68
		::System::UInt32 DiaryOrder; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyPassengerConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPassengerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
