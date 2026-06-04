#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleEntityWhiteBoxData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEBATTLECHARACTER_METHOD_3_C646574CB357AF53_OFFSET UNITYSDK_OFFSET(0x1967FA80)
#define RPG_GAMECORE_CREATEBATTLECHARACTER_METHOD_3_F4A92C1EB78C4FD0_OFFSET UNITYSDK_OFFSET(0x1967FB50)
#define RPG_GAMECORE_CREATEBATTLECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1967FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleCharacter_TypeDefinitionIndex = 21514;

	class CreateBattleCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x28
		::RPG::GameCore::DynamicFloat* Level; // 0x30
		::RPG::GameCore::DynamicFloat* Promotion; // 0x38
		::RPG::GameCore::DynamicFloat* Rank; // 0x40
		::RPG::GameCore::TeamLocationType LocationType; // 0x48
		::System::String* InitAnimStateName; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x58
		::RPG::GameCore::BattleEntityWhiteBoxData* CharacterData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C646574CB357AF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER_METHOD_3_C646574CB357AF53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4A92C1EB78C4FD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLECHARACTER_METHOD_3_F4A92C1EB78C4FD0_OFFSET))(a1, a2);
		}
	};
}
