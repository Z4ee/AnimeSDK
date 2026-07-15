#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_0C43753C4F21E75C_OFFSET UNITYSDK_OFFSET(0x1B2A02B0)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_690D3E405209F61C_OFFSET UNITYSDK_OFFSET(0x1B2A0430)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_7815EE2EAE19ADD9_OFFSET UNITYSDK_OFFSET(0x1B2A0270)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_A670322A94F607B3_OFFSET UNITYSDK_OFFSET(0x1B2A0460)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A02A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMultiTargetCustomTeamFormation_TypeDefinitionIndex = 21825;

	class ByIsMultiTargetCustomTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7815EE2EAE19ADD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_7815EE2EAE19ADD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C43753C4F21E75C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_0C43753C4F21E75C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_690D3E405209F61C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_690D3E405209F61C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A670322A94F607B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_A670322A94F607B3_OFFSET))(a1, a2);
		}
	};
}
