#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_A414EEC3193C9207_OFFSET UNITYSDK_OFFSET(0x1D30D820)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_B46C57ECA80FBF73_OFFSET UNITYSDK_OFFSET(0x1D311D90)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30D810)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseItemDecision_TypeDefinitionIndex = 10327;

	class ST_Main_CakeRaceUseItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B46C57ECA80FBF73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_B46C57ECA80FBF73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A414EEC3193C9207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_METHOD_5_A414EEC3193C9207_OFFSET))(a1, a2);
		}
	};
}
