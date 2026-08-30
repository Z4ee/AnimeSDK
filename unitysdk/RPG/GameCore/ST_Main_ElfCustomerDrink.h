#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK_METHOD_4_533361F3D420D974_OFFSET UNITYSDK_OFFSET(0x1DB3A860)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK_METHOD_4_D2999C1DAC264FB1_OFFSET UNITYSDK_OFFSET(0x1DB3A930)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3A920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerDrink_TypeDefinitionIndex = 21289;

	class ST_Main_ElfCustomerDrink : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_533361F3D420D974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerDrink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerDrink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK_METHOD_4_533361F3D420D974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2999C1DAC264FB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerDrink* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerDrink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERDRINK_METHOD_4_D2999C1DAC264FB1_OFFSET))(a1, a2);
		}
	};
}
