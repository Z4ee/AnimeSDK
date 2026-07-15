#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_4E9B9AD9D540E030_OFFSET UNITYSDK_OFFSET(0x1C2D78E0)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_8117B2BFD656B32D_OFFSET UNITYSDK_OFFSET(0x1C2D7940)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D7920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterCustomTeamFormation_TypeDefinitionIndex = 21829;

	class SetCharacterCustomTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterFormationType FormationType; // 0x20
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x28
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x30
		::System::Boolean DelyRefresh; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E9B9AD9D540E030(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_4E9B9AD9D540E030_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8117B2BFD656B32D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_8117B2BFD656B32D_OFFSET))(a1, a2);
		}
	};
}
