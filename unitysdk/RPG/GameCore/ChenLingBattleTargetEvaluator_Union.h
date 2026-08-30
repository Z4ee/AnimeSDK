#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_METHOD_3_0F80AF059D071ED7_OFFSET UNITYSDK_OFFSET(0x1CFADC90)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_METHOD_3_24CD864C83FD8F17_OFFSET UNITYSDK_OFFSET(0x1CFADCF0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFADCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Union_TypeDefinitionIndex = 15601;

	class ChenLingBattleTargetEvaluator_Union : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleTargetEvaluator*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F80AF059D071ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_METHOD_3_0F80AF059D071ED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24CD864C83FD8F17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_METHOD_3_24CD864C83FD8F17_OFFSET))(a1, a2);
		}
	};
}
