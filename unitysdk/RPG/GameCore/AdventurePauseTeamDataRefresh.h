#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_41A700F1FAD9C77C_OFFSET UNITYSDK_OFFSET(0x1AE60140)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_78639669267822F7_OFFSET UNITYSDK_OFFSET(0x1AE600F0)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE60130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePauseTeamDataRefresh_TypeDefinitionIndex = 19619;

	class AdventurePauseTeamDataRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PauseTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78639669267822F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_78639669267822F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41A700F1FAD9C77C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_41A700F1FAD9C77C_OFFSET))(a1, a2);
		}
	};
}
