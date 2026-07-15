#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTEAMFORMATION_METHOD_3_BC22AC9C3E41FEEC_OFFSET UNITYSDK_OFFSET(0x1C60CC00)
#define RPG_GAMECORE_SETTEAMFORMATION_METHOD_3_CEB77850EAD950FB_OFFSET UNITYSDK_OFFSET(0x1C60CCC0)
#define RPG_GAMECORE_SETTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60CC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamFormation_TypeDefinitionIndex = 22089;

	class SetTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* FormationTarget; // 0x20
		::RPG::GameCore::TeamFormationType FormationType; // 0x28
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x2C
		::System::String* FormationConfigName; // 0x30
		::System::Boolean RemoveDying; // 0x38
		::System::String* CustomFormationName; // 0x40
		::System::Boolean UseLevelAreaRoot; // 0x48
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x50
		::System::Boolean CustomFormationIgnoreDying; // 0x58
		::System::Boolean ImmediatelyStopHeadLookAt; // 0x59
		::System::Boolean RefreshFormationCenter; // 0x5A
		::RPG::GameCore::TeamMemberCountingOption TeamMemberCountingOption; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC22AC9C3E41FEEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION_METHOD_3_BC22AC9C3E41FEEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEB77850EAD950FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION_METHOD_3_CEB77850EAD950FB_OFFSET))(a1, a2);
		}
	};
}
