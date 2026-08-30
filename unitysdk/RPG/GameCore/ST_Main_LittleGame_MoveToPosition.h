#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameNavigationType.h"
#include "unitysdk/RPG/GameCore/LittleGamePositionType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_METHOD_4_05D2253AFA090F13_OFFSET UNITYSDK_OFFSET(0x1D4CBD60)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_METHOD_4_E3B5DFD1B82095AE_OFFSET UNITYSDK_OFFSET(0x1D4CBD20)
#define RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CBD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_LittleGame_MoveToPosition_TypeDefinitionIndex = 21081;

	class ST_Main_LittleGame_MoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::LittleGameNavigationType NavigationType; // 0x18
		::RPG::GameCore::LittleGamePositionType PositionType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3B5DFD1B82095AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_METHOD_4_E3B5DFD1B82095AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05D2253AFA090F13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_LITTLEGAME_MOVETOPOSITION_METHOD_4_05D2253AFA090F13_OFFSET))(a1, a2);
		}
	};
}
