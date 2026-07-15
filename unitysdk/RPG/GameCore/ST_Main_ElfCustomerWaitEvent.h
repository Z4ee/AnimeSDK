#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_905C6E4AA20A83D5_OFFSET UNITYSDK_OFFSET(0x1B781DC0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_DAB3E1386D3B8D98_OFFSET UNITYSDK_OFFSET(0x1B781E90)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B781E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitEvent_TypeDefinitionIndex = 20731;

	class ST_Main_ElfCustomerWaitEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_905C6E4AA20A83D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_905C6E4AA20A83D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DAB3E1386D3B8D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_DAB3E1386D3B8D98_OFFSET))(a1, a2);
		}
	};
}
