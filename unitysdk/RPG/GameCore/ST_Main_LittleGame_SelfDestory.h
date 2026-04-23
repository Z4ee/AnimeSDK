#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_METHOD_4_86E242B89D4ED50C_OFFSET UNITYSDK_OFFSET(0x18DF24E0)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_METHOD_4_EEF0747ABE55BEA3_OFFSET UNITYSDK_OFFSET(0x18DF2650)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF2600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_LittleGame_SelfDestory_TypeDefinitionIndex = 20310;

	class ST_Main_LittleGame_SelfDestory : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_86E242B89D4ED50C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_METHOD_4_86E242B89D4ED50C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEF0747ABE55BEA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_SELFDESTORY_METHOD_4_EEF0747ABE55BEA3_OFFSET))(a1, a2);
		}
	};
}
