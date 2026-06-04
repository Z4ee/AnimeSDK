#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonsterGuideSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199ACC00)
#define RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199ACEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideSkillConfigRow_TypeDefinitionIndex = 13532;

	class MonsterGuideSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillTextIDList; // 0x10
		::System::UInt32 Difficulty; // 0x18
		::RPG::GameCore::MonsterGuideSkillType Type; // 0x1C
		::System::UInt32 SkillID; // 0x20
		::RPG::Client::TextID SkillName; // 0x28
		::RPG::Client::TextID SkillAnswer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterGuideSkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
