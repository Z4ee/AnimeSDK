#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_27639A1F8E3F9D3F_OFFSET UNITYSDK_OFFSET(0x1CD9AB60)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_2B48C3199773E95E_OFFSET UNITYSDK_OFFSET(0x1CD9AB20)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_3647AC3A1EBF4E95_OFFSET UNITYSDK_OFFSET(0x1CD9ACE0)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_7FF6592D1E2FDF1B_OFFSET UNITYSDK_OFFSET(0x1CD9AD10)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9AB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentSkillActive_TypeDefinitionIndex = 23265;

	class ByIsCurrentSkillActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2B48C3199773E95E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_2B48C3199773E95E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27639A1F8E3F9D3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_27639A1F8E3F9D3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3647AC3A1EBF4E95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_3647AC3A1EBF4E95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FF6592D1E2FDF1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_7FF6592D1E2FDF1B_OFFSET))(a1, a2);
		}
	};
}
