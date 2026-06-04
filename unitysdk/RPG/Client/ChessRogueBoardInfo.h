#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBD9A77671154634;
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHESSROGUEBOARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64F0C0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBELONG_OFFSET UNITYSDK_OFFSET(0xB64F6F0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBOARDID_OFFSET UNITYSDK_OFFSET(0xB64A4A0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_QUITCHESSROGUE_OFFSET UNITYSDK_OFFSET(0xB64F660)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET UNITYSDK_OFFSET(0xB64F240)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64F4B0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB64F0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardInfo_TypeDefinitionIndex = 62568;

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

		::System::Void SyncBoardItem(::Class_1_EBD9A77671154634* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET))(this, a1, a2, a3);
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

		::RPG::Client::ChessRogueBoardDataItem* _AddChessBoardDataItem(::Class_1_EBD9A77671154634* a1)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET))(this, a1);
		}
	};
}
