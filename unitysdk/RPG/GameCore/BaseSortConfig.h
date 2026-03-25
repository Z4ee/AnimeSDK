#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASESORTCONFIG_METHOD_2_22CBCE4877AEB33A_OFFSET UNITYSDK_OFFSET(0x16FCAFE0)
#define RPG_GAMECORE_BASESORTCONFIG_METHOD_2_78081F4A01165F58_OFFSET UNITYSDK_OFFSET(0x16FCAE50)
#define RPG_GAMECORE_BASESORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCB040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseSortConfig_TypeDefinitionIndex = 21366;

	class BaseSortConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78081F4A01165F58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseSortConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseSortConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_METHOD_2_78081F4A01165F58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_22CBCE4877AEB33A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseSortConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseSortConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_METHOD_2_22CBCE4877AEB33A_OFFSET))(a1, a2);
		}
	};
}
