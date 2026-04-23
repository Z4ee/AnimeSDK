#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyGuessConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_ADDBETCOUNT_OFFSET UNITYSDK_OFFSET(0xAAA3630)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_CLEARBETCOUNT_OFFSET UNITYSDK_OFFSET(0xAAA3590)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GETPLAYERBETCOUNT_OFFSET UNITYSDK_OFFSET(0xAAA3730)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_GUESSID_OFFSET UNITYSDK_OFFSET(0xAAA37C0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_HASBOUGHT_OFFSET UNITYSDK_OFFSET(0xAAA38A0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_PLAYERIDS_OFFSET UNITYSDK_OFFSET(0xAAA3800)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA37E0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_GUESSID_OFFSET UNITYSDK_OFFSET(0xAAA37D0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_HASBOUGHT_OFFSET UNITYSDK_OFFSET(0xAAA38B0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA37F0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA3470)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameGuessData_TypeDefinitionIndex = 61024;

	class MonopolyGameGuessData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyGuessConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BetCounts; // 0x18
		::System::UInt32 _GuessID_k__BackingField; // 0x20
		::System::Boolean _HasBought_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 guessID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA__CTOR_OFFSET))(this, guessID);
		}

		::System::Void ClearBetCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_CLEARBETCOUNT_OFFSET))(this);
		}

		::System::Void AddBetCount(::System::UInt32 playerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_ADDBETCOUNT_OFFSET))(this, playerID);
		}

		::System::UInt32 GetPlayerBetCount(::System::UInt32 playerID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GETPLAYERBETCOUNT_OFFSET))(this, playerID);
		}

		::System::UInt32 get_GuessID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_GUESSID_OFFSET))(this);
		}

		::System::Void set_GuessID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_GUESSID_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyGuessConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyGuessConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyGuessConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyGuessConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PlayerIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_PLAYERIDS_OFFSET))(this);
		}

		::System::Boolean get_HasBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_HASBOUGHT_OFFSET))(this);
		}

		::System::Void set_HasBought(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_HASBOUGHT_OFFSET))(this, value);
		}
	};
}
