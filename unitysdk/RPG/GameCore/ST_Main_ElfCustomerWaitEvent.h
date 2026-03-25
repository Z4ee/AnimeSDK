#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_DAB3E1386D3B8D98_OFFSET UNITYSDK_OFFSET(0x17682E40)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_F64A10D21850218F_OFFSET UNITYSDK_OFFSET(0x176969B0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17682DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitEvent_TypeDefinitionIndex = 19711;

	class ST_Main_ElfCustomerWaitEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F64A10D21850218F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_F64A10D21850218F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DAB3E1386D3B8D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_METHOD_4_DAB3E1386D3B8D98_OFFSET))(a1, a2);
		}
	};
}
