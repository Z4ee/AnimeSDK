#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_METHOD_4_0C813FB221EBC2C6_OFFSET UNITYSDK_OFFSET(0x1B781D00)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_METHOD_4_E033780024757643_OFFSET UNITYSDK_OFFSET(0x1B781C30)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B781CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitEating_TypeDefinitionIndex = 20728;

	class ST_Main_ElfCustomerWaitEating : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E033780024757643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_METHOD_4_E033780024757643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C813FB221EBC2C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_METHOD_4_0C813FB221EBC2C6_OFFSET))(a1, a2);
		}
	};
}
