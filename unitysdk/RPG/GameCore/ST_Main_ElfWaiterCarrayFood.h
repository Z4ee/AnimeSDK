#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_413AADC532B2A0E4_OFFSET UNITYSDK_OFFSET(0x1B782A00)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_AE4795D0AC6DF161_OFFSET UNITYSDK_OFFSET(0x1B782AD0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B782AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCarrayFood_TypeDefinitionIndex = 20717;

	class ST_Main_ElfWaiterCarrayFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_413AADC532B2A0E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_413AADC532B2A0E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE4795D0AC6DF161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_AE4795D0AC6DF161_OFFSET))(a1, a2);
		}
	};
}
