#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_13;
class Class_1_4A900B1EABCF9FBE;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9369490)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x93697B0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x9369D70)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x9369510)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9369660)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET UNITYSDK_OFFSET(0x9369700)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0x9369600)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9369480)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData_TypeDefinitionIndex = 54443;

	class ChessRogueBoardChangeData : public ::System::Object
	{
	public:
		::Class_1_3C58D309C7A040F5_13* _ModifierInfo; // 0x10
		::Class_1_4A900B1EABCF9FBE* _ChessBoard; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataList; // 0x20

		::System::Void _ctor(::Class_1_3C58D309C7A040F5_13* modifierInfo, ::Class_1_4A900B1EABCF9FBE* chessBoard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_13*, ::Class_1_4A900B1EABCF9FBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET))(this, modifierInfo, chessBoard);
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
