#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_METHOD_3_7F3FC16313942795_OFFSET UNITYSDK_OFFSET(0x16F21830)
#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_METHOD_3_88F8505E00C6C24D_OFFSET UNITYSDK_OFFSET(0x16F21AE0)
#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F21870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTargetStancePreshowConfig_TypeDefinitionIndex = 21937;

	class AddTargetStancePreshowConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x20
		::RPG::GameCore::DynamicFloat* BaseStanceDamage; // 0x28
		::RPG::GameCore::AttackDamageType StanceDamgeType; // 0x30
		::RPG::GameCore::DynamicFloat* MultiplyRatio; // 0x38
		::RPG::GameCore::DynamicFloat* AddValue; // 0x40
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x48
		::RPG::GameCore::DynamicFloat* ForceAddValue; // 0x50
		::RPG::GameCore::DynamicFloat* ForceAddRatio; // 0x58
		::RPG::GameCore::DynamicFloat* StanceBreakAddRatio; // 0x60
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x68
		::System::Boolean ForceStanceDamage; // 0x70
		::System::Boolean IgnoreMuteBreak; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F3FC16313942795(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTargetStancePreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTargetStancePreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_METHOD_3_7F3FC16313942795_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88F8505E00C6C24D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTargetStancePreshowConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTargetStancePreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_METHOD_3_88F8505E00C6C24D_OFFSET))(a1, a2);
		}
	};
}
