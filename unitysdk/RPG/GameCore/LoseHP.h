#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOSEHP_METHOD_3_BBBEBE1FDF9E4DDB_OFFSET UNITYSDK_OFFSET(0x1D7C92E0)
#define RPG_GAMECORE_LOSEHP_METHOD_3_C75500F775A0234D_OFFSET UNITYSDK_OFFSET(0x1D7C9470)
#define RPG_GAMECORE_LOSEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C93C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoseHP_TypeDefinitionIndex = 22698;

	class LoseHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::DynamicFloat* DamageValue; // 0x28
		::RPG::GameCore::DynamicFloat* Floor; // 0x30
		::System::String* DynamicFloatSet; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x48
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x50
		::System::Boolean SourceAsKiller; // 0x58
		::System::Boolean RoundDamage; // 0x59
		::System::Boolean ShowText; // 0x5A
		::System::Boolean ConsumeShield; // 0x5B
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBBEBE1FDF9E4DDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoseHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoseHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP_METHOD_3_BBBEBE1FDF9E4DDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C75500F775A0234D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoseHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoseHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP_METHOD_3_C75500F775A0234D_OFFSET))(a1, a2);
		}
	};
}
