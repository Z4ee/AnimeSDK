#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_17;
class Class_1_58C02EFC41D1F04D_17;
class Class_1_867606D9C6217C6D_2;
class Class_1_C8F1FDB5FADB7DB2;
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x9FA18F0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x9FA0FE0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9FA0AA0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET UNITYSDK_OFFSET(0x9FA12C0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x9FA07E0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA0690)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoData_TypeDefinitionIndex = 54202;

	class PlanetFesMiniGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DistributionList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* MatchedList; // 0x18
		::System::Boolean IsStart; // 0x20
		::System::Boolean IsGameOver; // 0x21
		::System::UInt32 FlipCount; // 0x24
		::System::UInt32 Ratio; // 0x28
		::System::UInt32 LastFlippedPos; // 0x2C
		::System::UInt32 MaxFlipCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncPlanetFesStartMiniGameScRsp(::Class_1_C8F1FDB5FADB7DB2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C8F1FDB5FADB7DB2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo(::Class_1_58C02EFC41D1F04D_17* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo_1(::Class_1_4DF3292AA5AADAD0_17* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET))(this, rsp);
		}

		::System::Boolean SyncPlanetFesGameBingoFlipScRsp(::Class_1_867606D9C6217C6D_2* rsp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_867606D9C6217C6D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET))(this);
		}
	};
}
