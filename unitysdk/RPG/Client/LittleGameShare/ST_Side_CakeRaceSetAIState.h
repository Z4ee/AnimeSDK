#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_D2F7FA13DAE2C9D0_OFFSET UNITYSDK_OFFSET(0x1B9ED780)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_F8FAC8F15481C778_OFFSET UNITYSDK_OFFSET(0x1B9E97A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E9790)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceSetAIState_TypeDefinitionIndex = 9983;

	class ST_Side_CakeRaceSetAIState : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D2F7FA13DAE2C9D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_D2F7FA13DAE2C9D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F8FAC8F15481C778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_F8FAC8F15481C778_OFFSET))(a1, a2);
		}
	};
}
