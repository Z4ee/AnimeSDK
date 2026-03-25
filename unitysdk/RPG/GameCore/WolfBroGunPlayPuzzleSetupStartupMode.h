#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_METHOD_3_55BEE7ECD493A447_OFFSET UNITYSDK_OFFSET(0x1790BDA0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_METHOD_3_B43F89DEA0A5CBC6_OFFSET UNITYSDK_OFFSET(0x1790BE20)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1790BDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleSetupStartupMode_TypeDefinitionIndex = 18663;

	class WolfBroGunPlayPuzzleSetupStartupMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55BEE7ECD493A447(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_METHOD_3_55BEE7ECD493A447_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B43F89DEA0A5CBC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_METHOD_3_B43F89DEA0A5CBC6_OFFSET))(a1, a2);
		}
	};
}
