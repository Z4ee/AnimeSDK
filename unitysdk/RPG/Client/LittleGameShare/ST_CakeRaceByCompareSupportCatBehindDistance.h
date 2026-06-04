#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_1D18276D7315E5FC_OFFSET UNITYSDK_OFFSET(0x193B4000)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_5677F19D302329C9_OFFSET UNITYSDK_OFFSET(0x193B5AC0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_7F24C9338181FBD6_OFFSET UNITYSDK_OFFSET(0x193B7720)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_954DCED628E2F679_OFFSET UNITYSDK_OFFSET(0x193B7690)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x193B3FB0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareSupportCatBehindDistance_TypeDefinitionIndex = 9982;

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

		static ::System::Void Method_5_5677F19D302329C9(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_5677F19D302329C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7F24C9338181FBD6(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATBEHINDDISTANCE_METHOD_5_7F24C9338181FBD6_OFFSET))(a1, a2);
		}
	};
}
