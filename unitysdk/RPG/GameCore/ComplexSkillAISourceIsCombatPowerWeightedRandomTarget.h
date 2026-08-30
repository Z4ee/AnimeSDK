#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_METHOD_3_209E395D263BD62E_OFFSET UNITYSDK_OFFSET(0x1CFF47B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_METHOD_3_CD215A6E5E9C21B8_OFFSET UNITYSDK_OFFSET(0x1CFF4760)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF47A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceIsCombatPowerWeightedRandomTarget_TypeDefinitionIndex = 15375;

	class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::String* AITagKey; // 0x10
		::RPG::GameCore::FixPoint DefaultAITagValue; // 0x18
		::RPG::GameCore::FixPoint PowerOfCombatPower; // 0x20
		::RPG::GameCore::FixPoint PowerOfDamageCarry; // 0x28
		::System::Boolean OneMinusAITag; // 0x30
		::System::Boolean SumUpServantDamageCarry; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD215A6E5E9C21B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_METHOD_3_CD215A6E5E9C21B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_209E395D263BD62E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_METHOD_3_209E395D263BD62E_OFFSET))(a1, a2);
		}
	};
}
