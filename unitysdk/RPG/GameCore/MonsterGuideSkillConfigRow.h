#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonsterGuideSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B5D4D0)
#define RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5D7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideSkillConfigRow_TypeDefinitionIndex = 13461;

	class MonsterGuideSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillTextIDList; // 0x10
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 Difficulty; // 0x1C
		::RPG::Client::TextID SkillAnswer; // 0x20
		::RPG::Client::TextID SkillName; // 0x30
		::RPG::GameCore::MonsterGuideSkillType Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterGuideSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
