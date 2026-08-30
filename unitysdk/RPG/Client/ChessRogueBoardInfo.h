#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_613C84C740D27CFD;
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHESSROGUEBOARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB342C0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBELONG_OFFSET UNITYSDK_OFFSET(0x1CB2E2B0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBOARDID_OFFSET UNITYSDK_OFFSET(0x1CB2F440)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_QUITCHESSROGUE_OFFSET UNITYSDK_OFFSET(0x1CB34860)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET UNITYSDK_OFFSET(0x1CB34440)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x1CB346B0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB342B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardInfo_TypeDefinitionIndex = 66926;

	class ChessRogueBoardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueBoardDataItem*>* _ChessBoardDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncBoardItem(::Class_1_613C84C740D27CFD* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_613C84C740D27CFD*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QuitChessRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_QUITCHESSROGUE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBoardDataItemByBoardID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBOARDID_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBoardDataItemByBelong(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBELONG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChessRogueBoardDataItem* _AddChessBoardDataItem(::Class_1_613C84C740D27CFD* a1)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::Class_1_613C84C740D27CFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET))(this, a1);
		}
	};
}
