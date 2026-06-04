#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_41A700F1FAD9C77C_OFFSET UNITYSDK_OFFSET(0x194517B0)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_535C94F4924AE60D_OFFSET UNITYSDK_OFFSET(0x19451720)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH__CTOR_OFFSET UNITYSDK_OFFSET(0x19451780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePauseTeamDataRefresh_TypeDefinitionIndex = 19263;

	class AdventurePauseTeamDataRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PauseTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_535C94F4924AE60D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_535C94F4924AE60D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41A700F1FAD9C77C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_METHOD_3_41A700F1FAD9C77C_OFFSET))(a1, a2);
		}
	};
}
