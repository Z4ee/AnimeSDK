#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_137BB10490127512_OFFSET UNITYSDK_OFFSET(0x171C5AF0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_1DC8496AA8F7C69B_OFFSET UNITYSDK_OFFSET(0x171C5A20)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByMasterDamageConfig_TypeDefinitionIndex = 17710;

	class FateModifierAddTraitCountByMasterDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DC8496AA8F7C69B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_1DC8496AA8F7C69B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_137BB10490127512(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_137BB10490127512_OFFSET))(a1, a2);
		}
	};
}
