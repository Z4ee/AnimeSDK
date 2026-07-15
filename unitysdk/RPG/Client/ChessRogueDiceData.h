#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAeonDiceDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHESSROGUEDICEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA9CDD0)
#define RPG_CLIENT_CHESSROGUEDICEDATA_GETAEONDICEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1AA9D000)
#define RPG_CLIENT_CHESSROGUEDICEDATA_GET_CHESSROGUEAEONDICEDATADICT_OFFSET UNITYSDK_OFFSET(0x1AA9D0C0)
#define RPG_CLIENT_CHESSROGUEDICEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1AA9CB90)
#define RPG_CLIENT_CHESSROGUEDICEDATA_SET_CHESSROGUEAEONDICEDATADICT_OFFSET UNITYSDK_OFFSET(0x1AA9D0D0)
#define RPG_CLIENT_CHESSROGUEDICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9D0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceData_TypeDefinitionIndex = 63946;

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

		::RPG::Client::ChessRogueAeonDiceDataItem* GetAeonDiceDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueAeonDiceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_GETAEONDICEDATAITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>* get_ChessRogueAeonDiceDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_GET_CHESSROGUEAEONDICEDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDiceDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDiceDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEDATA_SET_CHESSROGUEAEONDICEDATADICT_OFFSET))(this, a1);
		}
	};
}
