#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_7C77BD2695912AF5_OFFSET UNITYSDK_OFFSET(0x1B2B95F0)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_91E52B0958E961F6_OFFSET UNITYSDK_OFFSET(0x1B2B93B0)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_D53138AE97835DE3_OFFSET UNITYSDK_OFFSET(0x1B2B95C0)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_EACC984DC5FF091F_OFFSET UNITYSDK_OFFSET(0x1B2B93F0)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B93E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkillPointActivated_TypeDefinitionIndex = 22705;

	class BySkillPointActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarSkillTreePointTriggerKey PointTriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_91E52B0958E961F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_91E52B0958E961F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EACC984DC5FF091F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_EACC984DC5FF091F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D53138AE97835DE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_D53138AE97835DE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C77BD2695912AF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_7C77BD2695912AF5_OFFSET))(a1, a2);
		}
	};
}
