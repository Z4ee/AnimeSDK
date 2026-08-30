#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_METHOD_3_8E5B1B827502EDC7_OFFSET UNITYSDK_OFFSET(0x1CFACC90)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_METHOD_3_EFDE9F5A2DBF9C56_OFFSET UNITYSDK_OFFSET(0x1CFACD30)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFACD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_CollideTarget_TypeDefinitionIndex = 15590;

	class ChenLingBattleTargetEvaluator_CollideTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E5B1B827502EDC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_METHOD_3_8E5B1B827502EDC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFDE9F5A2DBF9C56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_METHOD_3_EFDE9F5A2DBF9C56_OFFSET))(a1, a2);
		}
	};
}
