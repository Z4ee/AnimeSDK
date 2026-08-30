#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E4B20)
#define RPG_GAMECORE_B51RACINGTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E4D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingTeamRow_TypeDefinitionIndex = 10940;

	class B51RacingTeamRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 InitialPoint; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingTeamRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
