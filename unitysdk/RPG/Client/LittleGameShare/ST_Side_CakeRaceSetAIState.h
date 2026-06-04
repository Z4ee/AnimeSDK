#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_850CF98CA6244E36_OFFSET UNITYSDK_OFFSET(0x193BAAC0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_F8FAC8F15481C778_OFFSET UNITYSDK_OFFSET(0x193BABA0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x193BAB50)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceSetAIState_TypeDefinitionIndex = 9968;

	class ST_Side_CakeRaceSetAIState : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_850CF98CA6244E36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_850CF98CA6244E36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F8FAC8F15481C778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_METHOD_5_F8FAC8F15481C778_OFFSET))(a1, a2);
		}
	};
}
