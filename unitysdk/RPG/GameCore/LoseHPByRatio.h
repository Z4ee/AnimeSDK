#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TargetRatioType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOSEHPBYRATIO_METHOD_3_4CA05222F25EE503_OFFSET UNITYSDK_OFFSET(0x1D48BC20)
#define RPG_GAMECORE_LOSEHPBYRATIO_METHOD_3_ACF7B347F7807659_OFFSET UNITYSDK_OFFSET(0x1D48BB20)
#define RPG_GAMECORE_LOSEHPBYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48BBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoseHPByRatio_TypeDefinitionIndex = 22442;

	class LoseHPByRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::TargetRatioType RatioType; // 0x28
		::RPG::GameCore::DynamicFloat* Ratio; // 0x30
		::RPG::GameCore::DynamicFloat* Floor; // 0x38
		::System::String* DynamicFloatSet; // 0x40
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x48
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x58
		::System::Boolean SourceAsKiller; // 0x60
		::System::Boolean RoundDamage; // 0x61
		::System::Boolean ConsumeShield; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ACF7B347F7807659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoseHPByRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoseHPByRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO_METHOD_3_ACF7B347F7807659_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CA05222F25EE503(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoseHPByRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO_METHOD_3_4CA05222F25EE503_OFFSET))(a1, a2);
		}
	};
}
