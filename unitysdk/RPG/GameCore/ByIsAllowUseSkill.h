#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_388104DA4DF32D40_OFFSET UNITYSDK_OFFSET(0x1BBEE020)
#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_8F0B8B1B53A582ED_OFFSET UNITYSDK_OFFSET(0x1BBEDFE0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_9FBC6103C29A7566_OFFSET UNITYSDK_OFFSET(0x1BBEE1F0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_E3956E2209AAA590_OFFSET UNITYSDK_OFFSET(0x1BBEE220)
#define RPG_GAMECORE_BYISALLOWUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEE010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllowUseSkill_TypeDefinitionIndex = 22796;

	class ByIsAllowUseSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F0B8B1B53A582ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_8F0B8B1B53A582ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_388104DA4DF32D40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_388104DA4DF32D40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FBC6103C29A7566(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_9FBC6103C29A7566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3956E2209AAA590(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_METHOD_4_E3956E2209AAA590_OFFSET))(a1, a2);
		}
	};
}
