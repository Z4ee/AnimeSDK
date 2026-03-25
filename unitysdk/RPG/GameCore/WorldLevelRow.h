#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WORLDLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1790F3B0)
#define RPG_GAMECORE_WORLDLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1790FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelRow_TypeDefinitionIndex = 13240;

	class WorldLevelRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Breaktips1; // 0x10
		::System::UInt32 LevelUpMission; // 0x20
		::RPG::Client::TextID LevelUpMissionTips; // 0x28
		::RPG::Client::TextID Breaktips2; // 0x38
		::System::UInt32 Level; // 0x48
		::System::UInt32 MaxPlayerLevel; // 0x4C

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
