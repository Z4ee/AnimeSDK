#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA_2;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x1CB2FEC0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB2FE60)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x1CB305F0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x1CB30740)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0x1CB30720)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1CB30700)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET UNITYSDK_OFFSET(0x1CB30280)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x1CB30750)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0x1CB30730)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1CB30710)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2FCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData_TypeDefinitionIndex = 66912;

	class ChessRogueBoardCellChangeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataItemList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CellIDList_k__BackingField; // 0x18
		::Enum_3_0F1B992870941C13_4 _ModifierSourceType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_2E64892306548DEA_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void CloneBeforeCellDataItem(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET))(this, a1);
		}

		::System::Void Merge(::RPG::Client::ChessRogueBoardCellChangeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellChangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, a1);
		}

		::Enum_3_0F1B992870941C13_4 get_ModifierSourceType()
		{
			return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_ModifierSourceType(::Enum_3_0F1B992870941C13_4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET))(this);
		}

		::System::Void set_CellIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* get_BeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET))(this);
		}

		::System::Void set_BeforeCellDataItemList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET))(this, a1);
		}
	};
}
