#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_METHOD_2_086A85FDBCE7F394_OFFSET UNITYSDK_OFFSET(0x178D2AC0)
#define RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178D4260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierDependencyConfig_TypeDefinitionIndex = 16731;

	class TurnBasedModifierDependencyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DependentModifier; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag DependentBehaviorFlag; // 0x18
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_086A85FDBCE7F394(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierDependencyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierDependencyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_METHOD_2_086A85FDBCE7F394_OFFSET))(a1, a2);
		}
	};
}
