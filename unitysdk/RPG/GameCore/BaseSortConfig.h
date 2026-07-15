#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASESORTCONFIG_METHOD_2_22CBCE4877AEB33A_OFFSET UNITYSDK_OFFSET(0x1A3E2120)
#define RPG_GAMECORE_BASESORTCONFIG_METHOD_2_331336527446635B_OFFSET UNITYSDK_OFFSET(0x1A3E1F90)
#define RPG_GAMECORE_BASESORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E2180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseSortConfig_TypeDefinitionIndex = 22310;

	class BaseSortConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_331336527446635B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseSortConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseSortConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_METHOD_2_331336527446635B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_22CBCE4877AEB33A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseSortConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseSortConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_METHOD_2_22CBCE4877AEB33A_OFFSET))(a1, a2);
		}
	};
}
