#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_2A0418999B19B61E_OFFSET UNITYSDK_OFFSET(0x193B4210)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_52BA056FDEDC5080_OFFSET UNITYSDK_OFFSET(0x193B7A40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_9E2FD357E461E17B_OFFSET UNITYSDK_OFFSET(0x193B5B50)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_D38F508EEDF5BC13_OFFSET UNITYSDK_OFFSET(0x193B79B0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID__CTOR_OFFSET UNITYSDK_OFFSET(0x193B41C0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareSupportCatID_TypeDefinitionIndex = 9983;

	class ST_CakeRaceByCompareSupportCatID : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D38F508EEDF5BC13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_D38F508EEDF5BC13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2A0418999B19B61E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_2A0418999B19B61E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9E2FD357E461E17B(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_9E2FD357E461E17B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_52BA056FDEDC5080(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATID_METHOD_5_52BA056FDEDC5080_OFFSET))(a1, a2);
		}
	};
}
