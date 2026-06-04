#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_6_BCEFD825F02B81C6_OFFSET UNITYSDK_OFFSET(0x1970C6F0)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_6_D846C589F9CA2E45_OFFSET UNITYSDK_OFFSET(0x1970C860)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveOwnerMasterAffixConfig_TypeDefinitionIndex = 18246;

	class FateActRemoveOwnerMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BCEFD825F02B81C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_6_BCEFD825F02B81C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D846C589F9CA2E45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_6_D846C589F9CA2E45_OFFSET))(a1, a2);
		}
	};
}
