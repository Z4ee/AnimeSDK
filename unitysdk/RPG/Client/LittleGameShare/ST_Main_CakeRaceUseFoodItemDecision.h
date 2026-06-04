#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_METHOD_5_51E1C5EDAE61404D_OFFSET UNITYSDK_OFFSET(0x193B9B20)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_METHOD_5_A818A74B86007B7A_OFFSET UNITYSDK_OFFSET(0x193B9C00)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x193B9BB0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseFoodItemDecision_TypeDefinitionIndex = 9978;

	class ST_Main_CakeRaceUseFoodItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::Client::LittleGameShare::ST_TargetCatType TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C
		::System::UInt32 ForwardRange; // 0x20
		::System::UInt32 SideRange; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_51E1C5EDAE61404D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_METHOD_5_51E1C5EDAE61404D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A818A74B86007B7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_METHOD_5_A818A74B86007B7A_OFFSET))(a1, a2);
		}
	};
}
