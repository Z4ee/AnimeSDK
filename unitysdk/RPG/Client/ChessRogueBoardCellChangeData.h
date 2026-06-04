#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64ADD0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64AD70)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64B500)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xB64B650)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64B630)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB64B610)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xB64B190)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xB64B660)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0xB64B640)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB64B620)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB64AC00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData_TypeDefinitionIndex = 62554;

	class ChessRogueBoardCellChangeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CellIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataItemList_k__BackingField; // 0x18
		::Enum_3_0F1B992870941C13_3 _ModifierSourceType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_01C2B9641EF803B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET))(this, a1);
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

		::Enum_3_0F1B992870941C13_3 get_ModifierSourceType()
		{
			return ((::Enum_3_0F1B992870941C13_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_ModifierSourceType(::Enum_3_0F1B992870941C13_3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET))(this, a1);
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
