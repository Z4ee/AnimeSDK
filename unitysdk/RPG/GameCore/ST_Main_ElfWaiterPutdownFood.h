#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_30A0579FE3DAF283_OFFSET UNITYSDK_OFFSET(0x176975F0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_B884D6E687188289_OFFSET UNITYSDK_OFFSET(0x176848A0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x17684850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterPutdownFood_TypeDefinitionIndex = 19698;

	class ST_Main_ElfWaiterPutdownFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_30A0579FE3DAF283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_30A0579FE3DAF283_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B884D6E687188289(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_B884D6E687188289_OFFSET))(a1, a2);
		}
	};
}
