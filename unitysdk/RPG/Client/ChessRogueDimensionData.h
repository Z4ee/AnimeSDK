#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_3;
namespace RPG::Client { class ChessRogueCabinetDataInfo; }
namespace RPG::Client { class ChessRogueDimensionInfo; }
namespace RPG::Client { class ChessRogueReplayInfo; }
namespace RPG::Client { class RogueNousStoryInfo; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE0400)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_CABINETINFO_OFFSET UNITYSDK_OFFSET(0x9FE0AD0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_DIMENSIONINFO_OFFSET UNITYSDK_OFFSET(0x9FE0AB0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_NOUSSTORYINFO_OFFSET UNITYSDK_OFFSET(0x9FE0B10)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9FE0AF0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9FE0120)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_CABINETINFO_OFFSET UNITYSDK_OFFSET(0x9FE0AE0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_DIMENSIONINFO_OFFSET UNITYSDK_OFFSET(0x9FE0AC0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_NOUSSTORYINFO_OFFSET UNITYSDK_OFFSET(0x9FE0B20)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9FE0B00)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SYNCDIMENSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FE0700)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FE06B0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDFF30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionData_TypeDefinitionIndex = 61638;

	class ChessRogueDimensionData : public ::System::Object
	{
	public:
		::RPG::Client::ChessRogueReplayInfo* _ReplayInfo_k__BackingField; // 0x10
		::RPG::Client::RogueNousStoryInfo* _NousStoryInfo_k__BackingField; // 0x18
		::RPG::Client::ChessRogueDimensionInfo* _DimensionInfo_k__BackingField; // 0x20
		::RPG::Client::ChessRogueCabinetDataInfo* _CabinetInfo_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_3* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SYNC_OFFSET))(this, chessRogueInfo);
		}

		::System::Void SyncDimensionProgress(::Class_1_14E02E1F6D70E487_3* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SYNCDIMENSIONPROGRESS_OFFSET))(this, chessRogueInfo);
		}

		::RPG::Client::ChessRogueDimensionInfo* get_DimensionInfo()
		{
			return ((::RPG::Client::ChessRogueDimensionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_DIMENSIONINFO_OFFSET))(this);
		}

		::System::Void set_DimensionInfo(::RPG::Client::ChessRogueDimensionInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueDimensionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_DIMENSIONINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChessRogueCabinetDataInfo* get_CabinetInfo()
		{
			return ((::RPG::Client::ChessRogueCabinetDataInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_CABINETINFO_OFFSET))(this);
		}

		::System::Void set_CabinetInfo(::RPG::Client::ChessRogueCabinetDataInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueCabinetDataInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_CABINETINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChessRogueReplayInfo* get_ReplayInfo()
		{
			return ((::RPG::Client::ChessRogueReplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_REPLAYINFO_OFFSET))(this);
		}

		::System::Void set_ReplayInfo(::RPG::Client::ChessRogueReplayInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueReplayInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_REPLAYINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueNousStoryInfo* get_NousStoryInfo()
		{
			return ((::RPG::Client::RogueNousStoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_GET_NOUSSTORYINFO_OFFSET))(this);
		}

		::System::Void set_NousStoryInfo(::RPG::Client::RogueNousStoryInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousStoryInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONDATA_SET_NOUSSTORYINFO_OFFSET))(this, value);
		}
	};
}
