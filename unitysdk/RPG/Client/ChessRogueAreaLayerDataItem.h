#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_5;
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::GameCore { class RogueDLCLayerRow; }

#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FCFDB0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURBOARD_OFFSET UNITYSDK_OFFSET(0x9FD4950)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x9FD4930)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9FD48F0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEXID_OFFSET UNITYSDK_OFFSET(0x9FD4AD0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9FD4910)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERNAMEID_OFFSET UNITYSDK_OFFSET(0x9FD4C20)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERROW_OFFSET UNITYSDK_OFFSET(0x9FD4BB0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_CURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x9FD4940)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9FD4900)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9FD4920)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SYNCCURBOARD_OFFSET UNITYSDK_OFFSET(0x9FCFFA0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCFF90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaLayerDataItem_TypeDefinitionIndex = 61613;

	class ChessRogueAreaLayerDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCLayerRow* _Row; // 0x10
		::System::UInt32 _CurChessBoardID_k__BackingField; // 0x18
		::System::UInt32 _LayerID_k__BackingField; // 0x1C
		::System::UInt32 _LayerIndex_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 rogueDLCLayerID, ::System::UInt32 rogueDLCLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM__CTOR_OFFSET))(this, rogueDLCLayerID, rogueDLCLayerIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncCurBoard(::Class_1_C9DFE5EE7107C629_5* chessRogueBoard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SYNCCURBOARD_OFFSET))(this, chessRogueBoard);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERID_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_CurChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURCHESSBOARDID_OFFSET))(this);
		}

		::System::Void set_CurChessBoardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_CURCHESSBOARDID_OFFSET))(this, value);
		}

		::RPG::Client::ChessRogueBoardDataItem* get_CurBoard()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURBOARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_LayerIndexID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_LayerNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERNAMEID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCLayerRow* get_LayerRow()
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERROW_OFFSET))(this);
		}
	};
}
