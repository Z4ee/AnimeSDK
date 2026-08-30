#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAnimState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE_METHOD_5_A63261443F40ABC1_OFFSET UNITYSDK_OFFSET(0x1D30E140)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE_METHOD_5_B92A4097475AAC61_OFFSET UNITYSDK_OFFSET(0x1D312010)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30E130)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceSetAnimState_TypeDefinitionIndex = 10320;

	class ST_Side_CakeRaceSetAnimState : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::GameCore::CakeRaceAnimState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B92A4097475AAC61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE_METHOD_5_B92A4097475AAC61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A63261443F40ABC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETANIMSTATE_METHOD_5_A63261443F40ABC1_OFFSET))(a1, a2);
		}
	};
}
