#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_1D18276D7315E5FC_OFFSET UNITYSDK_OFFSET(0x1CD4D780)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_8D8CD851B0985BE6_OFFSET UNITYSDK_OFFSET(0x1CD52450)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_A727B5C8E37FF09F_OFFSET UNITYSDK_OFFSET(0x1CD4EE40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_B2DAFFAFE4332498_OFFSET UNITYSDK_OFFSET(0x1CD524A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4D770)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareSupportCatBehindDistance_TypeDefinitionIndex = 10333;

	class ST_CakeRaceByCompareSupportCatBehindDistance : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 DistanceMm; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8D8CD851B0985BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_8D8CD851B0985BE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1D18276D7315E5FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_1D18276D7315E5FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A727B5C8E37FF09F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_A727B5C8E37FF09F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B2DAFFAFE4332498(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_B2DAFFAFE4332498_OFFSET))(a1, a2);
		}
	};
}
