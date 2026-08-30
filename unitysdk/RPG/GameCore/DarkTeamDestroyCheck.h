#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DARKTEAMDESTROYCHECK_METHOD_3_0E44E1E7041EC71E_OFFSET UNITYSDK_OFFSET(0x1D80E8A0)
#define RPG_GAMECORE_DARKTEAMDESTROYCHECK_METHOD_3_A66550BA1906AF1D_OFFSET UNITYSDK_OFFSET(0x1D80E8E0)
#define RPG_GAMECORE_DARKTEAMDESTROYCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80E8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamDestroyCheck_TypeDefinitionIndex = 23139;

	class DarkTeamDestroyCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForWaveEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E44E1E7041EC71E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DarkTeamDestroyCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DarkTeamDestroyCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK_METHOD_3_0E44E1E7041EC71E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A66550BA1906AF1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DarkTeamDestroyCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DarkTeamDestroyCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMDESTROYCHECK_METHOD_3_A66550BA1906AF1D_OFFSET))(a1, a2);
		}
	};
}
