#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_6_70BA5A10D500C65A_OFFSET UNITYSDK_OFFSET(0x1E0CC1F0)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_6_C0F7B7F76B28C21E_OFFSET UNITYSDK_OFFSET(0x1E0CC1A0)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActChangeMasterHpToCoinConfig_TypeDefinitionIndex = 18997;

	class FateActChangeMasterHpToCoinConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C0F7B7F76B28C21E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_6_C0F7B7F76B28C21E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_70BA5A10D500C65A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_6_70BA5A10D500C65A_OFFSET))(a1, a2);
		}
	};
}
