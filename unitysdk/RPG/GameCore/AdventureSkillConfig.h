#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/CostMpPhase.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUseType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureSkillTargetConfig; }
namespace RPG::GameCore { class SkillRangeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1867CE40)
#define RPG_GAMECORE_ADVENTURESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1867D1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillConfig_TypeDefinitionIndex = 16618;

	class AdventureSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean CanCastWithoutTarget; // 0x18
		::System::Boolean SubmitSkillWhenCast; // 0x19
		::RPG::GameCore::AdventureSkillType AdventureSkillType; // 0x1C
		::RPG::GameCore::SkillUseType UseType; // 0x20
		::RPG::GameCore::AdventureSkillTargetConfig* TargetInfo; // 0x28
		::System::String* EntryAbility; // 0x30
		::RPG::GameCore::SkillRangeConfig* RangeConfig; // 0x38
		::System::Single CoolDown; // 0x40
		::Il2CppArray<::System::String*>* CustomSkillAnimStates; // 0x48
		::RPG::GameCore::CostMpPhase SkillCostMpPhase; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AdventureSkillConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
