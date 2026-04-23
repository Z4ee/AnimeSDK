#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlayerReturnJourneyItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C33250)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C33B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnJourneyItemRow_TypeDefinitionIndex = 13739;

	class PlayerReturnJourneyItemRow : public ::System::Object
	{
	public:
		::System::String* BgPath; // 0x10
		::RPG::Client::TextID ExtraDesc; // 0x18
		::RPG::Client::TextID Title; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::Boolean IsHideInBeta; // 0x48
		::System::UInt32 Sort; // 0x4C
		::RPG::GameCore::PlayerReturnJourneyItemType Type; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 ActivityModuleID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnJourneyItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnJourneyItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
