#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_65FF05EE291FCBE3_OFFSET UNITYSDK_OFFSET(0x19566870)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_6BB02E9638D5A212_OFFSET UNITYSDK_OFFSET(0x19566580)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_BB1EF96D7CFD5481_OFFSET UNITYSDK_OFFSET(0x195668F0)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_E63C9A04E450ECFE_OFFSET UNITYSDK_OFFSET(0x19566650)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19566600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCustomTeamFormation_TypeDefinitionIndex = 21406;

	class ByIsInCustomTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::System::String*>* CustomFormationNames; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6BB02E9638D5A212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_6BB02E9638D5A212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E63C9A04E450ECFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_E63C9A04E450ECFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65FF05EE291FCBE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_65FF05EE291FCBE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB1EF96D7CFD5481(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_METHOD_4_BB1EF96D7CFD5481_OFFSET))(a1, a2);
		}
	};
}
