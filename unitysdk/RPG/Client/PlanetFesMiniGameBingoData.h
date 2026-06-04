#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_756F1B30AD9935FB;
class Class_1_963E317C37FB5E9A_51;
class Class_1_963E317C37FB5E9A_52;
class Class_1_DE6E491FE63D8E69_2;
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xC41B6B0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET UNITYSDK_OFFSET(0xC41AD90)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET UNITYSDK_OFFSET(0xC41A8D0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET UNITYSDK_OFFSET(0xC41AFF0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xC41A680)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC41A500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoData_TypeDefinitionIndex = 62289;

	class PlanetFesMiniGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MatchedList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DistributionList; // 0x18
		::System::UInt32 FlipCount; // 0x20
		::System::Boolean IsGameOver; // 0x24
		::System::Boolean IsStart; // 0x25
		::System::UInt32 Ratio; // 0x28
		::System::UInt32 MaxFlipCount; // 0x2C
		::System::UInt32 LastFlippedPos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncPlanetFesStartMiniGameScRsp(::Class_1_756F1B30AD9935FB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_756F1B30AD9935FB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET))(this, a1);
		}

		::System::Void SyncMiniGameInfo(::Class_1_963E317C37FB5E9A_52* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void SyncMiniGameInfo_1(::Class_1_963E317C37FB5E9A_51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET))(this, a1);
		}

		::System::Boolean SyncPlanetFesGameBingoFlipScRsp(::Class_1_DE6E491FE63D8E69_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET))(this);
		}
	};
}
