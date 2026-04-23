#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_16;
class Class_1_C9DFE5EE7107C629_5;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FD7220)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x9FD7540)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FD7B00)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x9FD72A0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9FD73F0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET UNITYSDK_OFFSET(0x9FD7490)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FD7390)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD7210)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData_TypeDefinitionIndex = 61631;

	class ChessRogueBoardChangeData : public ::System::Object
	{
	public:
		::Class_1_7FF19F6206AF6DD7_16* _ModifierInfo; // 0x10
		::Class_1_C9DFE5EE7107C629_5* _ChessBoard; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataList; // 0x20

		::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_16* modifierInfo, ::Class_1_C9DFE5EE7107C629_5* chessBoard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_16*, ::Class_1_C9DFE5EE7107C629_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET))(this, modifierInfo, chessBoard);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 cellID)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, cellID);
		}

		::System::Boolean HasModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ModifierEffectType GetModifierEffectType()
		{
			return ((::RPG::GameCore::ModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET))(this);
		}

		::System::Boolean HasCellChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBeforeBoardDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* GetBeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET))(this);
		}
	};
}
