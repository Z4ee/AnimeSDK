#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_4154471550CDC31A_OFFSET UNITYSDK_OFFSET(0x18DE5F30)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_CBD00171ADB6D970_OFFSET UNITYSDK_OFFSET(0x18DEF6B0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE5EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerProcessBill_TypeDefinitionIndex = 20395;

	class ST_Main_ElfCustomerProcessBill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single LookAtDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CBD00171ADB6D970(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_CBD00171ADB6D970_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4154471550CDC31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_METHOD_4_4154471550CDC31A_OFFSET))(a1, a2);
		}
	};
}
