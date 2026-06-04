#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_28F9C2F199DC9481_OFFSET UNITYSDK_OFFSET(0x195DB020)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_3417FD1B0DF8917D_OFFSET UNITYSDK_OFFSET(0x195DB1E0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_5274F6602D8BD67A_OFFSET UNITYSDK_OFFSET(0x195DB260)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_D356ECA6D57867AD_OFFSET UNITYSDK_OFFSET(0x195DAF50)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x195DAFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentSkill_TypeDefinitionIndex = 22232;

	class ByTargetIsStanceWeakForCurrentSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D356ECA6D57867AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_D356ECA6D57867AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28F9C2F199DC9481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_28F9C2F199DC9481_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3417FD1B0DF8917D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_3417FD1B0DF8917D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5274F6602D8BD67A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_5274F6602D8BD67A_OFFSET))(a1, a2);
		}
	};
}
