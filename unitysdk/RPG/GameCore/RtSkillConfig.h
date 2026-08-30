#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtSkillUseType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIConfigEx; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtSkillExtraConfigBase; }
namespace RPG::GameCore { class RtSkillPropertyConfig; }
namespace RPG::GameCore { class RtSkillTargetInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RTSKILLCONFIG_METHOD_2_6DFCEE77CB09009A_OFFSET UNITYSDK_OFFSET(0x1CCED2E0)
#define RPG_GAMECORE_RTSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCED8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillConfig_TypeDefinitionIndex = 17461;

	class RtSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::SkillType SkillType; // 0x18
		::RPG::GameCore::RtSkillUseType UseType; // 0x1C
		::RPG::GameCore::RtSkillTargetInfo* TargetInfo; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* Tags; // 0x28
		::RPG::GameCore::PredicateConfig* UsableCondition; // 0x30
		::System::String* EntryAbility; // 0x38
		::System::Boolean BindAttackSpeed; // 0x40
		::RPG::GameCore::FixPoint DefaultDuration; // 0x48
		::RPG::GameCore::FixPoint CD; // 0x50
		::RPG::GameCore::FixPoint CastDistance; // 0x58
		::Il2CppArray<::RPG::GameCore::RtSkillPropertyConfig*>* Properties; // 0x60
		::RPG::GameCore::RtSkillExtraConfigBase* ExtraConfig; // 0x68
		::RPG::GameCore::ComplexSkillAIConfigEx* SkillTargetAI; // 0x70
		::Il2CppArray<::RPG::GameCore::FixPoint>* StanceParams; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6DFCEE77CB09009A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLCONFIG_METHOD_2_6DFCEE77CB09009A_OFFSET))(a1, a2);
		}
	};
}
