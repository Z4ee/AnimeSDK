#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_METHOD_3_5D8C02F0B72A5C50_OFFSET UNITYSDK_OFFSET(0x187E85C0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_METHOD_3_F389E34454F89855_OFFSET UNITYSDK_OFFSET(0x187E8660)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x187E8650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SoldierScale_TypeDefinitionIndex = 14971;

	class ChenLingBattleValueGetter_SoldierScale : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D8C02F0B72A5C50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_METHOD_3_5D8C02F0B72A5C50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F389E34454F89855(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_METHOD_3_F389E34454F89855_OFFSET))(a1, a2);
		}
	};
}
