#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_METHOD_3_A6D27AB9A299AEB5_OFFSET UNITYSDK_OFFSET(0x1C37F0F0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_METHOD_3_CB225ED0A39FACA9_OFFSET UNITYSDK_OFFSET(0x1C37F1D0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37F1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_SavedTargets_TypeDefinitionIndex = 15167;

	class ChenLingBattleTargetEvaluator_SavedTargets : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::String* SaveName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6D27AB9A299AEB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_METHOD_3_A6D27AB9A299AEB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB225ED0A39FACA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_METHOD_3_CB225ED0A39FACA9_OFFSET))(a1, a2);
		}
	};
}
