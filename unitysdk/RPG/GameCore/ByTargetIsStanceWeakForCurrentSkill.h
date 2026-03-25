#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_28F9C2F199DC9481_OFFSET UNITYSDK_OFFSET(0x1703CA90)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL_METHOD_4_D356ECA6D57867AD_OFFSET UNITYSDK_OFFSET(0x1703C9C0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1703CA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentSkill_TypeDefinitionIndex = 21745;

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
	};
}
