#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_00BA19181AD40DCE_OFFSET UNITYSDK_OFFSET(0x19509EA0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_25FACDC00BF077C8_OFFSET UNITYSDK_OFFSET(0x1950A140)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_491FA4B06EF8DD22_OFFSET UNITYSDK_OFFSET(0x19509DD0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_A05345A25A8B1393_OFFSET UNITYSDK_OFFSET(0x1950A0C0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19509E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffect_TypeDefinitionIndex = 21770;

	class ByCompareControlSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_491FA4B06EF8DD22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_491FA4B06EF8DD22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00BA19181AD40DCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_00BA19181AD40DCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A05345A25A8B1393(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_A05345A25A8B1393_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25FACDC00BF077C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_25FACDC00BF077C8_OFFSET))(a1, a2);
		}
	};
}
