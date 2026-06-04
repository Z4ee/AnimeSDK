#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_12;
class Class_1_7F6A638FBAAEC90B_1;
class Class_1_D17272E82AE804C2_197;
class Class_1_D818CA99906737D6;
class Class_1_EBD9A77671154634;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::GameCore { class RogueDLCDifficultyRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_ADDBOARDEVENTMODIFIER_OFFSET UNITYSDK_OFFSET(0xB64E960)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYJSON_OFFSET UNITYSDK_OFFSET(0xB64D8B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0xB64D630)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYSIZE_OFFSET UNITYSDK_OFFSET(0xB64DC30)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64DE80)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETBELONGAREALAYERDIFFICULTYROW_OFFSET UNITYSDK_OFFSET(0xB64EA60)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEMCOLNUM_OFFSET UNITYSDK_OFFSET(0xB64ED20)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64D6A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCHESSROGUEDIFFICULTYROWANDCUTINDEX_OFFSET UNITYSDK_OFFSET(0xB64EB60)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETSTARTCOLNUM_OFFSET UNITYSDK_OFFSET(0xB64ED90)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ALLOWEDSELECTCELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64EF10)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREAID_OFFSET UNITYSDK_OFFSET(0xB64EE30)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREALAYERID_OFFSET UNITYSDK_OFFSET(0xB64EE50)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BOARDEVENTMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB64EF70)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0xB64EE70)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDHEIGHT_OFFSET UNITYSDK_OFFSET(0xB64EEB0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDID_OFFSET UNITYSDK_OFFSET(0xB64EDF0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDWIDTH_OFFSET UNITYSDK_OFFSET(0xB64EE90)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURBOARDEVENTID_OFFSET UNITYSDK_OFFSET(0xB64EF50)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64EF90)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xB64EE10)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ENDCELLID_OFFSET UNITYSDK_OFFSET(0xB64EEF0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_HISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64EF30)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xB64EED0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SETBELONGAREA_OFFSET UNITYSDK_OFFSET(0xB64E8F0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ALLOWEDSELECTCELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64EF20)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREAID_OFFSET UNITYSDK_OFFSET(0xB64EE40)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREALAYERID_OFFSET UNITYSDK_OFFSET(0xB64EE60)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BOARDEVENTMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB64EF80)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0xB64EE80)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDHEIGHT_OFFSET UNITYSDK_OFFSET(0xB64EEC0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDID_OFFSET UNITYSDK_OFFSET(0xB64EE00)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDWIDTH_OFFSET UNITYSDK_OFFSET(0xB64EEA0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURBOARDEVENTID_OFFSET UNITYSDK_OFFSET(0xB64EF60)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xB64EE20)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ENDCELLID_OFFSET UNITYSDK_OFFSET(0xB64EF00)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_HISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64EF40)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xB64EEE0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCALLOWEDSELECTCELL_OFFSET UNITYSDK_OFFSET(0xB64E0B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCCURCELLID_OFFSET UNITYSDK_OFFSET(0xB64E8A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCHISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64E1B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCLAYOUT_OFFSET UNITYSDK_OFFSET(0xB64E490)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCTHEMEEVENT_OFFSET UNITYSDK_OFFSET(0xB64E6D0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB64D820)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB64D810)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardDataItem_TypeDefinitionIndex = 62566;

	class ChessRogueBoardDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedSelectCellIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _BoardEventModifiers_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _HistoryCellIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _CellDataList_k__BackingField; // 0x28
		::System::UInt32 _ChessBoardWidth_k__BackingField; // 0x30
		::System::UInt32 _CurCellID_k__BackingField; // 0x34
		::System::UInt32 _ChessBoardHeight_k__BackingField; // 0x38
		::System::UInt32 _ChessBoardID_k__BackingField; // 0x3C
		::System::UInt32 _StartCellID_k__BackingField; // 0x40
		::System::UInt32 _BelongAreaLayerID_k__BackingField; // 0x44
		::System::UInt32 _CurBoardEventID_k__BackingField; // 0x48
		::System::UInt32 _EndCellID_k__BackingField; // 0x4C
		::System::UInt32 _BelongAreaID_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateByProto(::Class_1_EBD9A77671154634* a1)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYPROTO_OFFSET))(a1);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateByJson(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYJSON_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateBySize(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYSIZE_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EBD9A77671154634* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncCurCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCCURCELLID_OFFSET))(this, a1);
		}

		::System::Void SetBelongArea(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SETBELONGAREA_OFFSET))(this, a1, a2);
		}

		::System::Void SyncLayout(::Class_1_7F6A638FBAAEC90B_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCLAYOUT_OFFSET))(this, a1);
		}

		::System::Void SyncThemeEvent(::Class_1_7BF8FDF00F218876_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BF8FDF00F218876_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCTHEMEEVENT_OFFSET))(this, a1);
		}

		::System::Void SyncAllowedSelectCell(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCALLOWEDSELECTCELL_OFFSET))(this, a1);
		}

		::System::Void SyncHistoryCellIDList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_197*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_197*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCHISTORYCELLIDLIST_OFFSET))(this, a1);
		}

		::System::Void AddBoardEventModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_ADDBOARDEVENTMODIFIER_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueDLCDifficultyRow* GetBelongAreaLayerDifficultyRow()
		{
			return ((::RPG::GameCore::RogueDLCDifficultyRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETBELONGAREALAYERDIFFICULTYROW_OFFSET))(this);
		}

		::System::Tuple_2<::RPG::GameCore::RogueDLCDifficultyRow*, ::System::Int32>* GetChessRogueDifficultyRowAndCutIndex(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Tuple_2<::RPG::GameCore::RogueDLCDifficultyRow*, ::System::Int32>*(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCHESSROGUEDIFFICULTYROWANDCUTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetCellDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEM_OFFSET))(this, a1);
		}

		::System::UInt32 GetCellDataItemColNum(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEMCOLNUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetStartColNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETSTARTCOLNUM_OFFSET))(this);
		}

		::System::UInt32 get_ChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDID_OFFSET))(this);
		}

		::System::Void set_ChessBoardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLID_OFFSET))(this);
		}

		::System::Void set_CurCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURCELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREAID_OFFSET))(this);
		}

		::System::Void set_BelongAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAreaLayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREALAYERID_OFFSET))(this);
		}

		::System::Void set_BelongAreaLayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREALAYERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* get_CellDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CELLDATALIST_OFFSET))(this);
		}

		::System::Void set_CellDataList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CELLDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChessBoardWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDWIDTH_OFFSET))(this);
		}

		::System::Void set_ChessBoardWidth(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDWIDTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChessBoardHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDHEIGHT_OFFSET))(this);
		}

		::System::Void set_ChessBoardHeight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDHEIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_STARTCELLID_OFFSET))(this);
		}

		::System::Void set_StartCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_STARTCELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ENDCELLID_OFFSET))(this);
		}

		::System::Void set_EndCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ENDCELLID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllowedSelectCellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ALLOWEDSELECTCELLIDLIST_OFFSET))(this);
		}

		::System::Void set_AllowedSelectCellIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ALLOWEDSELECTCELLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HistoryCellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_HISTORYCELLIDLIST_OFFSET))(this);
		}

		::System::Void set_HistoryCellIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_HISTORYCELLIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurBoardEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURBOARDEVENTID_OFFSET))(this);
		}

		::System::Void set_CurBoardEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURBOARDEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_BoardEventModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BOARDEVENTMODIFIERS_OFFSET))(this);
		}

		::System::Void set_BoardEventModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BOARDEVENTMODIFIERS_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* get_CurCellDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLDATAITEM_OFFSET))(this);
		}
	};
}
