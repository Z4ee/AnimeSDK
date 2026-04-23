#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AddByMaxStanceConfig; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_METHOD_2_1CFCBE3245D77F0D_OFFSET UNITYSDK_OFFSET(0x18B35640)
#define RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B35B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStancePreshowConfig_TypeDefinitionIndex = 17277;

	class ModifierStancePreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x10
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::DynamicFloat* MultiplyRatio; // 0x20
		::RPG::GameCore::DynamicFloat* AddValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x30
		::RPG::GameCore::DynamicFloat* ForceAddValue; // 0x38
		::RPG::GameCore::DynamicFloat* ForceAddRatio; // 0x40
		::RPG::GameCore::DynamicFloat* StanceBreakAddRatio; // 0x48
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x50
		::System::Boolean AddForceStanceDamageFlag; // 0x58
		::RPG::GameCore::AttackDamageTypeConfig* AddWeakness; // 0x60
		::RPG::GameCore::AddByMaxStanceConfig* AddByMaxStance; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1CFCBE3245D77F0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierStancePreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierStancePreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_METHOD_2_1CFCBE3245D77F0D_OFFSET))(a1, a2);
		}
	};
}
