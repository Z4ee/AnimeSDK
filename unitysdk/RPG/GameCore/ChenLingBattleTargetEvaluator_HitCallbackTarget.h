#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_METHOD_3_05DA30E7FB8F8C0E_OFFSET UNITYSDK_OFFSET(0x1CFAD030)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_METHOD_3_9D2CBF951E36DF3F_OFFSET UNITYSDK_OFFSET(0x1CFACF90)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAD020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_HitCallbackTarget_TypeDefinitionIndex = 15589;

	class ChenLingBattleTargetEvaluator_HitCallbackTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D2CBF951E36DF3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_METHOD_3_9D2CBF951E36DF3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05DA30E7FB8F8C0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_METHOD_3_05DA30E7FB8F8C0E_OFFSET))(a1, a2);
		}
	};
}
