#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_METHOD_2_636C2A2069F35A3B_OFFSET UNITYSDK_OFFSET(0x17427590)
#define RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174277D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierCreateEntityPreshowConfig_TypeDefinitionIndex = 16682;

	class ModifierCreateEntityPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x10
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x20
		::RPG::GameCore::EntityType CharacterType; // 0x28
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_636C2A2069F35A3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierCreateEntityPreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierCreateEntityPreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_METHOD_2_636C2A2069F35A3B_OFFSET))(a1, a2);
		}
	};
}
