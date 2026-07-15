#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E5ED0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_METHOD_4_2BFFE18A03F88C18_OFFSET UNITYSDK_OFFSET(0x1C2E5990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_METHOD_4_4875BE446B9F7531_OFFSET UNITYSDK_OFFSET(0x1C2E5B50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E5A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPreCalcStanceDamage_TypeDefinitionIndex = 22433;

	class SetDynamicValueByPreCalcStanceDamage : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* AttackerTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* DefenderTargetType; // 0x30
		::RPG::GameCore::AttackType AttackType; // 0x38
		::RPG::GameCore::AttackDamageTypeConfig* DamageType; // 0x40
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x48
		::System::Boolean AddForceStanceDamageFlag; // 0x50
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2BFFE18A03F88C18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_METHOD_4_2BFFE18A03F88C18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4875BE446B9F7531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_METHOD_4_4875BE446B9F7531_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
