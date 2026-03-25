#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_METHOD_4_358A9082585CCE79_OFFSET UNITYSDK_OFFSET(0x1700FA80)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_METHOD_4_8302E96295AE8DDF_OFFSET UNITYSDK_OFFSET(0x1700FBA0)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700FB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterPhase_TypeDefinitionIndex = 20750;

	class ByCompareMonsterPhase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_358A9082585CCE79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_METHOD_4_358A9082585CCE79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8302E96295AE8DDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_METHOD_4_8302E96295AE8DDF_OFFSET))(a1, a2);
		}
	};
}
