#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_07124B9D374D1F0A_OFFSET UNITYSDK_OFFSET(0x1950A900)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3130F74CCEC63951_OFFSET UNITYSDK_OFFSET(0x1950A530)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET UNITYSDK_OFFSET(0x1950A610)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_C449142B0039904D_OFFSET UNITYSDK_OFFSET(0x1950A880)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1950A5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffectIsDamaging_TypeDefinitionIndex = 21772;

	class ByCompareControlSkillEffectIsDamaging : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Boolean CheckChildSkill; // 0x2C
		::RPG::GameCore::LogicOperation CheckChildSkillLogicType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3130F74CCEC63951(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3130F74CCEC63951_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3870518E5DCE6DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C449142B0039904D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_C449142B0039904D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07124B9D374D1F0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_07124B9D374D1F0A_OFFSET))(a1, a2);
		}
	};
}
