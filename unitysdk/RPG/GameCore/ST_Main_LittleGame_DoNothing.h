#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_METHOD_4_571D68C907349489_OFFSET UNITYSDK_OFFSET(0x1D4CBBD0)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_METHOD_4_A7E31B2440F8D912_OFFSET UNITYSDK_OFFSET(0x1D4CBC10)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CBC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_LittleGame_DoNothing_TypeDefinitionIndex = 21080;

	class ST_Main_LittleGame_DoNothing : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_571D68C907349489(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_METHOD_4_571D68C907349489_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7E31B2440F8D912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_DONOTHING_METHOD_4_A7E31B2440F8D912_OFFSET))(a1, a2);
		}
	};
}
