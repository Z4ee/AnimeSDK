#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_194A26455D5DFBDE_OFFSET UNITYSDK_OFFSET(0x1D4E6070)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_AAF1EEB5E3161B97_OFFSET UNITYSDK_OFFSET(0x1D4E60D0)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E60B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterCustomTeamFormation_TypeDefinitionIndex = 22393;

	class SetCharacterCustomTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterFormationType FormationType; // 0x20
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x28
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x30
		::System::Boolean DelyRefresh; // 0x34
		::RPG::GameCore::DynamicFloat* FollowOffsetTransitionTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_194A26455D5DFBDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_194A26455D5DFBDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAF1EEB5E3161B97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_AAF1EEB5E3161B97_OFFSET))(a1, a2);
		}
	};
}
