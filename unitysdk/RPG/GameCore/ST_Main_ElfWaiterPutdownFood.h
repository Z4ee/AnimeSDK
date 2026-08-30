#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_7BA00E8C3EA15B02_OFFSET UNITYSDK_OFFSET(0x1D4CA2D0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_B884D6E687188289_OFFSET UNITYSDK_OFFSET(0x1D4CA310)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CA300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterPutdownFood_TypeDefinitionIndex = 21274;

	class ST_Main_ElfWaiterPutdownFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7BA00E8C3EA15B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_7BA00E8C3EA15B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B884D6E687188289(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_METHOD_4_B884D6E687188289_OFFSET))(a1, a2);
		}
	};
}
