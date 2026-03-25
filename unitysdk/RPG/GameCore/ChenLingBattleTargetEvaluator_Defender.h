#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_METHOD_3_65EA1D82E3D2BC40_OFFSET UNITYSDK_OFFSET(0x17081700)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_METHOD_3_F5DB4736ADEF4705_OFFSET UNITYSDK_OFFSET(0x17081660)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x170816F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Defender_TypeDefinitionIndex = 14465;

	class ChenLingBattleTargetEvaluator_Defender : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5DB4736ADEF4705(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_METHOD_3_F5DB4736ADEF4705_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65EA1D82E3D2BC40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_METHOD_3_65EA1D82E3D2BC40_OFFSET))(a1, a2);
		}
	};
}
