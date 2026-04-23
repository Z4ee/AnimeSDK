#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_703EB9A27C9FFBF1_OFFSET UNITYSDK_OFFSET(0x18EF9820)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_E74B831820E0C118_OFFSET UNITYSDK_OFFSET(0x18EF86E0)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByValueEvaluator_TypeDefinitionIndex = 22971;

	class TargetSortByValueEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* Evaluator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_703EB9A27C9FFBF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByValueEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByValueEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_703EB9A27C9FFBF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E74B831820E0C118(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_E74B831820E0C118_OFFSET))(a1, a2);
		}
	};
}
