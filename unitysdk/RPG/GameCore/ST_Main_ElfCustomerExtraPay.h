#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_METHOD_4_02CF18D4E70413DD_OFFSET UNITYSDK_OFFSET(0x19BFF390)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_METHOD_4_B59D28964C6EB2F2_OFFSET UNITYSDK_OFFSET(0x19C17660)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFF340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerExtraPay_TypeDefinitionIndex = 20338;

	class ST_Main_ElfCustomerExtraPay : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B59D28964C6EB2F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_METHOD_4_B59D28964C6EB2F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02CF18D4E70413DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_METHOD_4_02CF18D4E70413DD_OFFSET))(a1, a2);
		}
	};
}
