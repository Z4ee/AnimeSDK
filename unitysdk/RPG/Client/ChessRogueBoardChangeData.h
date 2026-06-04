#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_17;
class Class_1_EBD9A77671154634;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64CE90)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64D1D0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xB64D7B0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xB64CF10)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xB64D080)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET UNITYSDK_OFFSET(0xB64D120)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0xB64D020)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB64CE80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData_TypeDefinitionIndex = 62564;

	class ChessRogueBoardChangeData : public ::System::Object
	{
	public:
		::Class_1_EBD9A77671154634* _ChessBoard; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataList; // 0x18
		::Class_1_7FF19F6206AF6DD7_17* _ModifierInfo; // 0x20

		::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_17* a1, ::Class_1_EBD9A77671154634* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_17*, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, a1);
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
