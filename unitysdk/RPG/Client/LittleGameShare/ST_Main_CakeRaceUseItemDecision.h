#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_A414EEC3193C9207_OFFSET UNITYSDK_OFFSET(0x193B9FD0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_D24565187027A101_OFFSET UNITYSDK_OFFSET(0x193B9E30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x193B9F80)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseItemDecision_TypeDefinitionIndex = 9976;

	class ST_Main_CakeRaceUseItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D24565187027A101(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_D24565187027A101_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A414EEC3193C9207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_A414EEC3193C9207_OFFSET))(a1, a2);
		}
	};
}
