#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_5B5C2486BBFC2169_OFFSET UNITYSDK_OFFSET(0x1D01B790)
#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_87E4E8151E22BAA6_OFFSET UNITYSDK_OFFSET(0x1D01B750)
#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01B780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCharacterCustomTeamFormation_TypeDefinitionIndex = 21830;

	class ResetCharacterCustomTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DelyRefresh; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87E4E8151E22BAA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_87E4E8151E22BAA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B5C2486BBFC2169(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_METHOD_3_5B5C2486BBFC2169_OFFSET))(a1, a2);
		}
	};
}
