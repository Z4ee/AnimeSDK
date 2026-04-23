#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18801FC0)
#define RPG_GAMECORE_CHIMERADUELPRESETTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18802150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetTeamRow_TypeDefinitionIndex = 10640;

	class ChimeraDuelPresetTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PresetIDList; // 0x10
		::System::UInt32 MasterID; // 0x18
		::System::UInt32 TeamID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelPresetTeamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPresetTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
