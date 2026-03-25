#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCHIMERALEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17097EF0)
#define RPG_GAMECORE_CHIMERADUELCHIMERALEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17098050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelRow_TypeDefinitionIndex = 10393;

	class ChimeraDuelChimeraLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 ChimeraID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERALEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERALEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
