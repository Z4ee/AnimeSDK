#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION_METHOD_2_663F7881FF067E0F_OFFSET UNITYSDK_OFFSET(0x1B2F0640)
#define RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION_METHOD_2_E1D5A3BB7470A44C_OFFSET UNITYSDK_OFFSET(0x1B2F0500)
#define RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F04F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaFilterExpression_TypeDefinitionIndex = 17213;

	class BattleAreaFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E1D5A3BB7470A44C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION_METHOD_2_E1D5A3BB7470A44C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_663F7881FF067E0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTEREXPRESSION_METHOD_2_663F7881FF067E0F_OFFSET))(a1, a2);
		}
	};
}
