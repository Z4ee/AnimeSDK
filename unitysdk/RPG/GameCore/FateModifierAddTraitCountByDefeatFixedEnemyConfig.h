#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_METHOD_3_13758E790D459274_OFFSET UNITYSDK_OFFSET(0x197101D0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_METHOD_3_7F577D910E157BBD_OFFSET UNITYSDK_OFFSET(0x19710100)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19710180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByDefeatFixedEnemyConfig_TypeDefinitionIndex = 18296;

	class FateModifierAddTraitCountByDefeatFixedEnemyConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F577D910E157BBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_METHOD_3_7F577D910E157BBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13758E790D459274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByDefeatFixedEnemyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYDEFEATFIXEDENEMYCONFIG_METHOD_3_13758E790D459274_OFFSET))(a1, a2);
		}
	};
}
