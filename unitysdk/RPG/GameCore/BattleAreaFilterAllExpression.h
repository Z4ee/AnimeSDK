#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_METHOD_3_66297788E2FC1F61_OFFSET UNITYSDK_OFFSET(0x1CE6A570)
#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_METHOD_3_663182C44C259C3D_OFFSET UNITYSDK_OFFSET(0x1CE6A520)
#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaFilterAllExpression_TypeDefinitionIndex = 17214;

	class BattleAreaFilterAllExpression : public ::RPG::GameCore::BattleAreaFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_663182C44C259C3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaFilterAllExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaFilterAllExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_METHOD_3_663182C44C259C3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66297788E2FC1F61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_METHOD_3_66297788E2FC1F61_OFFSET))(a1, a2);
		}
	};
}
