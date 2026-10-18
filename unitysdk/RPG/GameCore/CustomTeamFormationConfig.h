#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationOption.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationParam.h"
#include "unitysdk/RPG/GameCore/EntityTeamRelationTypeMask.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_3_B935AABCEA45DFE8_OFFSET UNITYSDK_OFFSET(0x1D5BC3B0)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_3_CCB8DF8363F125D5_OFFSET UNITYSDK_OFFSET(0x1D5BC420)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationConfig_TypeDefinitionIndex = 16587;

	class CustomTeamFormationConfig : public ::RPG::GameCore::CustomTeamFormationParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::VCameraState>* ActiveCameraStates; // 0x60
		::Il2CppArray<::RPG::GameCore::TeamFormationType>* ActiveTeamFormationTypes; // 0x68
		::Il2CppArray<::RPG::GameCore::TurnState>* ActiveTurnStates; // 0x70
		::RPG::GameCore::EntityTeamRelationTypeMask ActionEntityTypes; // 0x78
		::Il2CppArray<::System::UInt32>* ActionEntityCharacterID; // 0x80
		::Il2CppArray<::RPG::GameCore::SkillType>* ActiveSkillTypes; // 0x88
		::Il2CppArray<::System::String*>* ActiveSkillNames; // 0x90
		::Il2CppArray<::System::String*>* InactiveSkillNames; // 0x98
		::Il2CppArray<::System::Boolean>* ActiveSkillSelectableStates; // 0xA0
		::RPG::GameCore::PredicateConfig* ActiveCondition; // 0xA8
		::RPG::GameCore::CustomTeamFormationOption Option; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B935AABCEA45DFE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomTeamFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomTeamFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_3_B935AABCEA45DFE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCB8DF8363F125D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomTeamFormationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomTeamFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_METHOD_3_CCB8DF8363F125D5_OFFSET))(a1, a2);
		}
	};
}
