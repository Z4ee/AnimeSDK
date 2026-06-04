#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_22;
class Class_1_075C34D03AFA1215_23;
class Class_1_075C34D03AFA1215_24;
class Class_1_2E57B88467AF63C8_2;
class Class_1_FBCD4FF549575A07;
namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace RPG::Client { class ChessRogueAreaLayerDataItem; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::GameCore { class RogueDLCBlockTypeRow; }
namespace RPG::GameCore { class RogueDLCLayerRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6471A0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xB649000)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB646D40)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xB6482F0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB646DE0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0xB646EB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET UNITYSDK_OFFSET(0xB649400)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB649210)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0xB646B50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0xB649480)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB648500)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB649620)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0xB6494E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xB648B70)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET UNITYSDK_OFFSET(0xB648730)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0xB649A80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xB649B60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB649D00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xB649AA0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0xB649B80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0xB649AC0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB649B00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB649B20)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET UNITYSDK_OFFSET(0xB649D90)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0xB649E80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0xB649F60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET UNITYSDK_OFFSET(0xB649E60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0xB649EF0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0xB649FD0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xB649AE0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB649B40)
#define RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB646F10)
#define RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET UNITYSDK_OFFSET(0xB649850)
#define RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET UNITYSDK_OFFSET(0xB647D80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0xB649A90)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xB649B70)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xB649AB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0xB649AD0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB649B10)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB649B30)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xB649AF0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB649B50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET UNITYSDK_OFFSET(0xB647320)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xB647840)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET UNITYSDK_OFFSET(0xB6475B0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB647FB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET UNITYSDK_OFFSET(0xB647600)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0xB647890)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xB647D30)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0xB647E10)
#define RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xB649960)
#define RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB64A040)
#define RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET UNITYSDK_OFFSET(0xB648E60)
#define RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET UNITYSDK_OFFSET(0xB646F60)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0xB647900)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET UNITYSDK_OFFSET(0xB647660)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET UNITYSDK_OFFSET(0xB647460)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xB6479F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo_TypeDefinitionIndex = 62547;

	class ChessRogueAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* _AreaDataItemDic_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExtendDifficultyCompInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurExtendDifficultyCompInfo_k__BackingField; // 0x20
		::System::UInt32 _CurAreaID_k__BackingField; // 0x28
		::System::Int32 _CurActionPoint_k__BackingField; // 0x2C
		::System::Boolean _IsInAeonRoom_k__BackingField; // 0x30
		::System::UInt32 _CurAreaLayerIndex_k__BackingField; // 0x34
		::System::UInt32 _CurAreaLayerID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetCurChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetAreaDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetCurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* GetCurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueLevelInfo(::Class_1_2E57B88467AF63C8_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET))(this, a1);
		}

		::System::Void SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET))(this, a1);
		}

		::System::Void SyncCurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET))(this, a1);
		}

		::System::Void SyncCurLayerID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET))(this, a1, a2);
		}

		::System::Void SyncIsInAeonRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET))(this, a1);
		}

		::System::Void SyncCurActionPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET))(this, a1);
		}

		::System::Void ResetCurAreaStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET))(this);
		}

		::System::Void SyncUnlockedArea(::Class_1_075C34D03AFA1215_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET))(this, a1);
		}

		::System::Void SyncCurExtendDifficultyCompInfo(::Class_1_075C34D03AFA1215_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetChessRogueAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetRogueNousAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetCurCellDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCBlockTypeRow* GetCurBlockTypeRow()
		{
			return ((::RPG::GameCore::RogueDLCBlockTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCLayerRow* GetLayerByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueNousAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET))(this);
		}

		::System::Boolean IsTutorialAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET))(this);
		}

		::System::UInt32 GetUnFinishedTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET))(this);
		}

		::System::Void _InitAllAreaDataItemsByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET))(this);
		}

		::System::Void _SyncOrAddAreaItem(::Class_1_2E57B88467AF63C8_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaInfo(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncUnlockedDifficultyCompInfo(::Class_1_075C34D03AFA1215_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncCurLayerStatus(::Class_1_2E57B88467AF63C8_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET))(this, a1);
		}

		::System::Void _AddAreaDataItem(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaDataItem* _GetUnFinishedRogueNousAreaGuideArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* get_AreaDataItemDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET))(this);
		}

		::System::Void set_AreaDataItemDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaLayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInAeonRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET))(this);
		}

		::System::Void set_IsInAeonRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_CurExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_UnlockedExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Int32 get_CurActionPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET))(this);
		}

		::System::Void set_CurActionPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* get_CurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordChessRogueArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessChessRogueArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordRogueNousArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessRogueNousArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET))(this);
		}
	};
}
