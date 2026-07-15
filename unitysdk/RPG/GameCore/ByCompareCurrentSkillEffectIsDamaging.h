#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_0D828D086C30A04D_OFFSET UNITYSDK_OFFSET(0x19CDA6A0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_AF8EF674A47C315A_OFFSET UNITYSDK_OFFSET(0x19CDA6D0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_E3F97BB610373EB6_OFFSET UNITYSDK_OFFSET(0x19CDA4C0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_FF4ED96495684D57_OFFSET UNITYSDK_OFFSET(0x19CDA500)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDA4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentSkillEffectIsDamaging_TypeDefinitionIndex = 22199;

	class ByCompareCurrentSkillEffectIsDamaging : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AccessClientActiveSkill; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3F97BB610373EB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_E3F97BB610373EB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FF4ED96495684D57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_FF4ED96495684D57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D828D086C30A04D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_0D828D086C30A04D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF8EF674A47C315A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_AF8EF674A47C315A_OFFSET))(a1, a2);
		}
	};
}
