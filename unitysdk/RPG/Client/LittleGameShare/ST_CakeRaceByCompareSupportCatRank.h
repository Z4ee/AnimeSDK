#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_12539DF785AF086A_OFFSET UNITYSDK_OFFSET(0x193B7CD0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_278540F7FD8385B0_OFFSET UNITYSDK_OFFSET(0x193B5BE0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_DEEA08B77D69E9CB_OFFSET UNITYSDK_OFFSET(0x193B7D60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_E9A375189441DF1F_OFFSET UNITYSDK_OFFSET(0x193B4420)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x193B43D0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareSupportCatRank_TypeDefinitionIndex = 9981;

	class ST_CakeRaceByCompareSupportCatRank : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 Rank; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_12539DF785AF086A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_12539DF785AF086A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E9A375189441DF1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_E9A375189441DF1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_278540F7FD8385B0(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_278540F7FD8385B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DEEA08B77D69E9CB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPARESUPPORTCATRANK_METHOD_5_DEEA08B77D69E9CB_OFFSET))(a1, a2);
		}
	};
}
