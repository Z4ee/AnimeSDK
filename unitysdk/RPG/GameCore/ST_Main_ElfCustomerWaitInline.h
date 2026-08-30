#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_METHOD_4_A1AF32191CE601D5_OFFSET UNITYSDK_OFFSET(0x1D4C9160)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_METHOD_4_EC06A506E8170B98_OFFSET UNITYSDK_OFFSET(0x1D4C9090)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C9150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitInline_TypeDefinitionIndex = 21282;

	class ST_Main_ElfCustomerWaitInline : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EC06A506E8170B98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_METHOD_4_EC06A506E8170B98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1AF32191CE601D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_METHOD_4_A1AF32191CE601D5_OFFSET))(a1, a2);
		}
	};
}
