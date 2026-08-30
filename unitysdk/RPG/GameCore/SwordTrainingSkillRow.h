#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D596320)
#define RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5968F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillRow_TypeDefinitionIndex = 12359;

	class SwordTrainingSkillRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemConfig* Cost; // 0x10
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x18
		::System::String* SkillIcon; // 0x20
		::Il2CppArray<::System::Single>* ParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AvatarStatusAddList; // 0x30
		::System::UInt32 Condition; // 0x38
		::System::UInt32 SkillTypeID; // 0x3C
		::RPG::Client::TextID SkillName; // 0x40
		::System::UInt32 SkillPower; // 0x50
		::System::UInt32 SkillID; // 0x54
		::RPG::Client::TextID SkillTag; // 0x58
		::RPG::Client::TextID SkillDesc; // 0x68
		::System::UInt32 SkillStatusLevel; // 0x78
		::System::UInt32 SkillRank; // 0x7C
		::System::UInt32 MazeBuffID; // 0x80
		::System::UInt32 Rare; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
