#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_METHOD_4_3740BC2DAD52ADBF_OFFSET UNITYSDK_OFFSET(0x17684A70)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_METHOD_4_65F23FDF5A4ADB95_OFFSET UNITYSDK_OFFSET(0x17697670)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17684A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterSleep_TypeDefinitionIndex = 19705;

	class ST_Main_ElfWaiterSleep : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_65F23FDF5A4ADB95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_METHOD_4_65F23FDF5A4ADB95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3740BC2DAD52ADBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_METHOD_4_3740BC2DAD52ADBF_OFFSET))(a1, a2);
		}
	};
}
