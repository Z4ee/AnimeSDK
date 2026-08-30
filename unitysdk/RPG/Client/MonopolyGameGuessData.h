#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyGuessConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_ADDBETCOUNT_OFFSET UNITYSDK_OFFSET(0xD88F600)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_CLEARBETCOUNT_OFFSET UNITYSDK_OFFSET(0xD88F570)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GETPLAYERBETCOUNT_OFFSET UNITYSDK_OFFSET(0xD88F6F0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_GUESSID_OFFSET UNITYSDK_OFFSET(0xD88F780)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_HASBOUGHT_OFFSET UNITYSDK_OFFSET(0xD88F860)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_PLAYERIDS_OFFSET UNITYSDK_OFFSET(0xD88F7C0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD88F7A0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_GUESSID_OFFSET UNITYSDK_OFFSET(0xD88F790)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_HASBOUGHT_OFFSET UNITYSDK_OFFSET(0xD88F870)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xD88F7B0)
#define RPG_CLIENT_MONOPOLYGAMEGUESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD88F440)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameGuessData_TypeDefinitionIndex = 66308;

	class MonopolyGameGuessData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BetCounts; // 0x10
		::RPG::GameCore::MonopolyGuessConfigRow* _Row_k__BackingField; // 0x18
		::System::Boolean _HasBought_k__BackingField; // 0x20
		::System::UInt32 _GuessID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void ClearBetCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_CLEARBETCOUNT_OFFSET))(this);
		}

		::System::Void AddBetCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_ADDBETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayerBetCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GETPLAYERBETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GuessID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_GUESSID_OFFSET))(this);
		}

		::System::Void set_GuessID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_GUESSID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyGuessConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyGuessConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyGuessConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyGuessConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PlayerIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_PLAYERIDS_OFFSET))(this);
		}

		::System::Boolean get_HasBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_GET_HASBOUGHT_OFFSET))(this);
		}

		::System::Void set_HasBought(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEGUESSDATA_SET_HASBOUGHT_OFFSET))(this, a1);
		}
	};
}
