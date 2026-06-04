#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_6E85A211DF8102DB_OFFSET UNITYSDK_OFFSET(0x195D6C70)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_B60A4E0884F44094_OFFSET UNITYSDK_OFFSET(0x195D6F90)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_CC8C304A5DDF0E6F_OFFSET UNITYSDK_OFFSET(0x195D6F10)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_EACC984DC5FF091F_OFFSET UNITYSDK_OFFSET(0x195D6D40)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x195D6CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkillPointActivated_TypeDefinitionIndex = 22264;

	class BySkillPointActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarSkillTreePointTriggerKey PointTriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6E85A211DF8102DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_6E85A211DF8102DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EACC984DC5FF091F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_EACC984DC5FF091F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC8C304A5DDF0E6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_CC8C304A5DDF0E6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B60A4E0884F44094(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_METHOD_4_B60A4E0884F44094_OFFSET))(a1, a2);
		}
	};
}
