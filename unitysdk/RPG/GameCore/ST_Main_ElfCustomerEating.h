#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_METHOD_4_AB110F2BA74A05AB_OFFSET UNITYSDK_OFFSET(0x1B781570)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_METHOD_4_B99A32882347C02E_OFFSET UNITYSDK_OFFSET(0x1B7814A0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B781560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerEating_TypeDefinitionIndex = 20729;

	class ST_Main_ElfCustomerEating : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B99A32882347C02E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerEating*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_METHOD_4_B99A32882347C02E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB110F2BA74A05AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_METHOD_4_AB110F2BA74A05AB_OFFSET))(a1, a2);
		}
	};
}
