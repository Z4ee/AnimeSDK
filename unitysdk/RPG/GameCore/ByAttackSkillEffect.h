#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_356AC494B8119717_OFFSET UNITYSDK_OFFSET(0x194F3F50)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_87860BFDB1C7296C_OFFSET UNITYSDK_OFFSET(0x194F3FD0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_CD914DE0954161E7_OFFSET UNITYSDK_OFFSET(0x194F3D80)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_DBCDFBB3292D63E3_OFFSET UNITYSDK_OFFSET(0x194F3CB0)
#define RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x194F3D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackSkillEffect_TypeDefinitionIndex = 22229;

	class ByAttackSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DBCDFBB3292D63E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_DBCDFBB3292D63E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD914DE0954161E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_CD914DE0954161E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_356AC494B8119717(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_356AC494B8119717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87860BFDB1C7296C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKSKILLEFFECT_METHOD_4_87860BFDB1C7296C_OFFSET))(a1, a2);
		}
	};
}
