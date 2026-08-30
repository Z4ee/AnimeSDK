#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_0E351D4F5DC9BA17_OFFSET UNITYSDK_OFFSET(0x1CF63000)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_28F9C2F199DC9481_OFFSET UNITYSDK_OFFSET(0x1CF62E10)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_A2B196AFF01C6EEC_OFFSET UNITYSDK_OFFSET(0x1CF62DD0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_E867A10AB3004F41_OFFSET UNITYSDK_OFFSET(0x1CF62FD0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF62E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentSkill_TypeDefinitionIndex = 23249;

	class ByTargetIsStanceWeakForCurrentSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A2B196AFF01C6EEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_A2B196AFF01C6EEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28F9C2F199DC9481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_28F9C2F199DC9481_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E867A10AB3004F41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_E867A10AB3004F41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E351D4F5DC9BA17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_0E351D4F5DC9BA17_OFFSET))(a1, a2);
		}
	};
}
