#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1888A680)
#define RPG_GAMECORE_DRINKMAKERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1888ACE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerLevelRow_TypeDefinitionIndex = 12454;

	class DrinkMakerLevelRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DrinkMakerLevel; // 0x10
		::System::UInt32 Level; // 0x20
		::System::UInt32 LevelUpExp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
