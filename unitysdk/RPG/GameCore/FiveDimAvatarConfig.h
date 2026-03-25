#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAVATARCONFIG_METHOD_2_46EE437D55C8C9B1_OFFSET UNITYSDK_OFFSET(0x171DE450)
#define RPG_GAMECORE_FIVEDIMAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DE770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarConfig_TypeDefinitionIndex = 15309;

	class FiveDimAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::String* CharacterConfigPath; // 0x18
		::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* MoveAbilityConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* InitActions; // 0x28
		::System::Boolean HasSkill; // 0x30
		::System::UInt32 SkillPanelConfigID; // 0x34
		::System::Single SkillCoolDown; // 0x38
		::RPG::GameCore::FiveDimBaseEventCondition* SkillCondition; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* SkillActions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_46EE437D55C8C9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARCONFIG_METHOD_2_46EE437D55C8C9B1_OFFSET))(a1, a2);
		}
	};
}
