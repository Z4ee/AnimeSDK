#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_METHOD_3_30E0121D74916F64_OFFSET UNITYSDK_OFFSET(0x19623FD0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_METHOD_3_BB77F3891B2EADB9_OFFSET UNITYSDK_OFFSET(0x19623F30)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19623FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_LastAttacker_TypeDefinitionIndex = 14986;

	class ChenLingBattleTargetEvaluator_LastAttacker : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB77F3891B2EADB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_METHOD_3_BB77F3891B2EADB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30E0121D74916F64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_METHOD_3_30E0121D74916F64_OFFSET))(a1, a2);
		}
	};
}
