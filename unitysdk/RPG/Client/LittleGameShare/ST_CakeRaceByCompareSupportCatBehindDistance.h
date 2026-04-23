#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_1D18276D7315E5FC_OFFSET UNITYSDK_OFFSET(0x185E65F0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_954DCED628E2F679_OFFSET UNITYSDK_OFFSET(0x185EA070)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x185E65A0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareSupportCatBehindDistance_TypeDefinitionIndex = 10178;

	class ST_CakeRaceByCompareSupportCatBehindDistance : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 DistanceMm; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_954DCED628E2F679(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_954DCED628E2F679_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1D18276D7315E5FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_1D18276D7315E5FC_OFFSET))(a1, a2);
		}
	};
}
