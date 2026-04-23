#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowDirMode.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationOption.h"
#include "unitysdk/RPG/GameCore/EntityTeamRelationTypeMask.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_2_F79F56DA97E113E6_OFFSET UNITYSDK_OFFSET(0x18848710)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18848F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationConfig_TypeDefinitionIndex = 15704;

	class CustomTeamFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VCameraState>* ActiveCameraStates; // 0x10
		::Il2CppArray<::RPG::GameCore::TeamFormationType>* ActiveTeamFormationTypes; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnState>* ActiveTurnStates; // 0x20
		::RPG::GameCore::EntityTeamRelationTypeMask ActionEntityTypes; // 0x28
		::Il2CppArray<::System::UInt32>* ActionEntityCharacterID; // 0x30
		::Il2CppArray<::RPG::GameCore::SkillType>* ActiveSkillTypes; // 0x38
		::Il2CppArray<::System::String*>* ActiveSkillNames; // 0x40
		::Il2CppArray<::System::String*>* InactiveSkillNames; // 0x48
		::Il2CppArray<::System::Boolean>* ActiveSkillSelectableStates; // 0x50
		::RPG::GameCore::PredicateConfig* ActiveCondition; // 0x58
		::RPG::GameCore::CustomTeamFormationOption Option; // 0x60
		::RPG::GameCore::CharacterFormationType FormationType; // 0x64
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x68
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x70
		::RPG::GameCore::CharacterFollowDirMode FollowDirMode; // 0x74
		::System::Boolean Visible; // 0x78
		::System::Single Scale; // 0x7C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AttachPointRedirect; // 0x80
		::System::String* AttachPointRedirectRule; // 0x88
		::System::String* ForceAnimName; // 0x90
		::Il2CppArray<::System::String*>* ForceAnimIgnoreList; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F79F56DA97E113E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomTeamFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomTeamFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_2_F79F56DA97E113E6_OFFSET))(a1, a2);
		}
	};
}
