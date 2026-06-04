#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_3FDCCAE2E2DD4719_OFFSET UNITYSDK_OFFSET(0x1950BD00)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_40FE84E1F9C8412C_OFFSET UNITYSDK_OFFSET(0x1950BF70)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_8DBB540CA798D76C_OFFSET UNITYSDK_OFFSET(0x1950BFF0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_FF4ED96495684D57_OFFSET UNITYSDK_OFFSET(0x1950BDD0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1950BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentSkillEffectIsDamaging_TypeDefinitionIndex = 21773;

	class ByCompareCurrentSkillEffectIsDamaging : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AccessClientActiveSkill; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3FDCCAE2E2DD4719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_3FDCCAE2E2DD4719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FF4ED96495684D57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_FF4ED96495684D57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_40FE84E1F9C8412C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_40FE84E1F9C8412C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8DBB540CA798D76C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLEFFECTISDAMAGING_METHOD_4_8DBB540CA798D76C_OFFSET))(a1, a2);
		}
	};
}
