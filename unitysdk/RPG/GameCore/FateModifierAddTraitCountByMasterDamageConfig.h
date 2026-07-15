#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_137BB10490127512_OFFSET UNITYSDK_OFFSET(0x1C074C80)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_D9E0B3015CFB2EB6_OFFSET UNITYSDK_OFFSET(0x1C074C30)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C074C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByMasterDamageConfig_TypeDefinitionIndex = 18530;

	class FateModifierAddTraitCountByMasterDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9E0B3015CFB2EB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_D9E0B3015CFB2EB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_137BB10490127512(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYMASTERDAMAGECONFIG_METHOD_3_137BB10490127512_OFFSET))(a1, a2);
		}
	};
}
