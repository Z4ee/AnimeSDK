#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAeonDiceDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHESSROGUEDICEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDDE20)
#define RPG_CLIENT_CHESSROGUEDICEDATA_GETAEONDICEDATAITEM_OFFSET UNITYSDK_OFFSET(0x9FDE040)
#define RPG_CLIENT_CHESSROGUEDICEDATA_GET_CHESSROGUEAEONDICEDATADICT_OFFSET UNITYSDK_OFFSET(0x9FDE0F0)
#define RPG_CLIENT_CHESSROGUEDICEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9FDDC90)
#define RPG_CLIENT_CHESSROGUEDICEDATA_SET_CHESSROGUEAEONDICEDATADICT_OFFSET UNITYSDK_OFFSET(0x9FDE100)
#define RPG_CLIENT_CHESSROGUEDICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDE110)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceData_TypeDefinitionIndex = 61646;

	class ChessRogueDiceData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>* _ChessRogueAeonDiceDataDict_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAeonDiceDataItem* GetAeonDiceDataItem(::System::UInt32 aeonDiceID)
		{
			return ((::RPG::Client::ChessRogueAeonDiceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_GETAEONDICEDATAITEM_OFFSET))(this, aeonDiceID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>* get_ChessRogueAeonDiceDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_GET_CHESSROGUEAEONDICEDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDiceDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_SET_CHESSROGUEAEONDICEDATADICT_OFFSET))(this, value);
		}
	};
}
