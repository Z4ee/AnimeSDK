#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFCUSTOMERCONFIG_METHOD_2_03E1DAFBE690FD08_OFFSET UNITYSDK_OFFSET(0x1889A8F0)
#define RPG_GAMECORE_ELFCUSTOMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889AC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfCustomerConfig_TypeDefinitionIndex = 17537;

	class ElfCustomerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CustomerOrderTime; // 0x10
		::System::Single ExtraPayChance; // 0x14
		::System::Single ExtraPayRatio; // 0x18
		::System::Single CustomerWaitBloodRatio; // 0x1C
		::System::Single CustomerWaitTime; // 0x20
		::System::Single CustomerEatTime; // 0x24
		::System::Single CustomerSpeed; // 0x28
		::System::Single EscapeBillSpeed; // 0x2C
		::System::Single CustomerDrinkTime; // 0x30
		::System::Single CustomerExtraPayTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCUSTOMERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_03E1DAFBE690FD08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfCustomerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfCustomerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCUSTOMERCONFIG_METHOD_2_03E1DAFBE690FD08_OFFSET))(a1, a2);
		}
	};
}
