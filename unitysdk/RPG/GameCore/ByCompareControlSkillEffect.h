#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_01FCC972E4DF4357_OFFSET UNITYSDK_OFFSET(0x170051F0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_493C6555934B486B_OFFSET UNITYSDK_OFFSET(0x17005120)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x170051A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffect_TypeDefinitionIndex = 21230;

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

		static ::System::Void Method_4_493C6555934B486B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_493C6555934B486B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01FCC972E4DF4357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECT_METHOD_4_01FCC972E4DF4357_OFFSET))(a1, a2);
		}
	};
}
