#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WORLDLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x191132B0)
#define RPG_GAMECORE_WORLDLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19113A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelRow_TypeDefinitionIndex = 13702;

	class WorldLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::RPG::Client::TextID Breaktips1; // 0x18
		::RPG::Client::TextID LevelUpMissionTips; // 0x28
		::System::UInt32 MaxPlayerLevel; // 0x38
		::System::UInt32 LevelUpMission; // 0x3C
		::RPG::Client::TextID Breaktips2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::WorldLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WorldLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
