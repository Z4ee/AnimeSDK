#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0_4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_CLEARBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0xAAA1BD0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAAA1520)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOABUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0xAAA1C70)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOBBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0xAAA20E0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOCBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0xAAA21C0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xAAA23F0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BOOMPOSLIST_OFFSET UNITYSDK_OFFSET(0xAAA2470)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_FLIPPOSLIST_OFFSET UNITYSDK_OFFSET(0xAAA2430)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0xAAA2410)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0xAAA2450)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xAAA2400)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BOOMPOSLIST_OFFSET UNITYSDK_OFFSET(0xAAA2480)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_FLIPPOSLIST_OFFSET UNITYSDK_OFFSET(0xAAA2440)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0xAAA2420)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0xAAA2460)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SYNCBINGOFLIPCOOKIE_OFFSET UNITYSDK_OFFSET(0xAAA1B00)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__CREATEBINGOABUBBLEDICT_OFFSET UNITYSDK_OFFSET(0xAAA1D10)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA15F0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__INITBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xAAA1600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameBingoData_TypeDefinitionIndex = 61021;

	class MonopolyGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoCBubbleTextID; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoABubbleTextID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _ResourceID2TextID; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoBBubbleTextID; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ResourceIDList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _FlipPosList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _BoomPosList_k__BackingField; // 0x40
		::System::Boolean _IsGameOver_k__BackingField; // 0x48
		::System::UInt32 _BaseValue_k__BackingField; // 0x4C
		::RPG::Client::TextID _BoomTextID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyGameBingoData* Create(::System::UInt32 baseValue, ::System::Boolean gameOver, ::System::Collections::Generic::List_1<::System::UInt32>* flipPos, ::System::Collections::Generic::List_1<::System::UInt32>* resourceID, ::System::Collections::Generic::List_1<::System::UInt32>* boomPos)
		{
			return ((::RPG::Client::MonopolyGameBingoData*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_CREATE_OFFSET))(baseValue, gameOver, flipPos, resourceID, boomPos);
		}

		::System::Void SyncBingoFlipCookie(::Class_1_07701BC2FDC5E4E0_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SYNCBINGOFLIPCOOKIE_OFFSET))(this, rsp);
		}

		::System::Void ClearBubbleTextID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_CLEARBUBBLETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID GetBingoABubbleTextID(::System::UInt32 resourceID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOABUBBLETEXTID_OFFSET))(this, resourceID);
		}

		::RPG::Client::TextID GetBingoBBubbleTextID(::System::Boolean isBoom)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOBBUBBLETEXTID_OFFSET))(this, isBoom);
		}

		::RPG::Client::TextID GetBingoCBubbleTextID(::System::Int32 value)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOCBUBBLETEXTID_OFFSET))(this, value);
		}

		::System::Void _CreateBingoABubbleDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA__CREATEBINGOABUBBLEDICT_OFFSET))(this);
		}

		::System::Void _InitBubbleText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA__INITBUBBLETEXT_OFFSET))(this);
		}

		::System::UInt32 get_BaseValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BASEVALUE_OFFSET))(this);
		}

		::System::Void set_BaseValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BASEVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsGameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_ISGAMEOVER_OFFSET))(this);
		}

		::System::Void set_IsGameOver(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_ISGAMEOVER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FlipPosList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_FLIPPOSLIST_OFFSET))(this);
		}

		::System::Void set_FlipPosList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_FLIPPOSLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ResourceIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_RESOURCEIDLIST_OFFSET))(this);
		}

		::System::Void set_ResourceIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_RESOURCEIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BoomPosList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BOOMPOSLIST_OFFSET))(this);
		}

		::System::Void set_BoomPosList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BOOMPOSLIST_OFFSET))(this, value);
		}
	};
}
