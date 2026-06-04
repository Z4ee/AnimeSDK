#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleEntityPromotionWhiteBoxData; }
namespace RPG::GameCore { class BattleEntitySkillWhiteBoxData; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_METHOD_2_CA9848C34BA53381_OFFSET UNITYSDK_OFFSET(0x194C8230)
#define RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x194C8720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntityWhiteBoxData_TypeDefinitionIndex = 21513;

	class BattleEntityWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::RPG::Client::TextID CharacterName; // 0x18
		::System::String* JsonPath; // 0x28
		::System::String* ModelPath; // 0x30
		::System::String* HeadIconPath; // 0x38
		::System::String* ActionIconPath; // 0x40
		::System::String* AIPath; // 0x48
		::RPG::GameCore::AttackDamageType DamageType; // 0x50
		::RPG::GameCore::FixPoint SPNeed; // 0x58
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x60
		::System::String* AvatarVOTag; // 0x68
		::Il2CppArray<::RPG::GameCore::BattleEntityPromotionWhiteBoxData*>* PromotionList; // 0x70
		::Il2CppArray<::RPG::GameCore::BattleEntitySkillWhiteBoxData*>* SkillList; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA9848C34BA53381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEntityWhiteBoxData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEntityWhiteBoxData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYWHITEBOXDATA_METHOD_2_CA9848C34BA53381_OFFSET))(a1, a2);
		}
	};
}
