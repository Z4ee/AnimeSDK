#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_4154471550CDC31A_OFFSET UNITYSDK_OFFSET(0x1D4C8940)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_7C6263FFADD43D91_OFFSET UNITYSDK_OFFSET(0x1D4C8900)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C8930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerProcessBill_TypeDefinitionIndex = 21290;

	class ST_Main_ElfCustomerProcessBill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single LookAtDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C6263FFADD43D91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_7C6263FFADD43D91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4154471550CDC31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_4154471550CDC31A_OFFSET))(a1, a2);
		}
	};
}
