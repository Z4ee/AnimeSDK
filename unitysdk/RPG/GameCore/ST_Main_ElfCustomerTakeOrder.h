#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_METHOD_4_B8F134AA99748059_OFFSET UNITYSDK_OFFSET(0x19C17920)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_METHOD_4_C600825CD4F39A6E_OFFSET UNITYSDK_OFFSET(0x19BFF9C0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFF970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerTakeOrder_TypeDefinitionIndex = 20333;

	class ST_Main_ElfCustomerTakeOrder : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8F134AA99748059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_METHOD_4_B8F134AA99748059_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C600825CD4F39A6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_METHOD_4_C600825CD4F39A6E_OFFSET))(a1, a2);
		}
	};
}
