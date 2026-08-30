#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FB4A4ADDA7338C08_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_CLEARBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0x1C2A8600)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2A7C40)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOABUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0x1C2A8690)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOBBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0x1C2A8BB0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOCBUBBLETEXTID_OFFSET UNITYSDK_OFFSET(0x1C2A8CA0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0x1C2A8EE0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BOOMPOSLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F60)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_FLIPPOSLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F20)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0x1C2A8F00)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F40)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0x1C2A8EF0)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BOOMPOSLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F70)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_FLIPPOSLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F30)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0x1C2A8F10)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C2A8F50)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA_SYNCBINGOFLIPCOOKIE_OFFSET UNITYSDK_OFFSET(0x1C2A8530)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__CREATEBINGOABUBBLEDICT_OFFSET UNITYSDK_OFFSET(0x1C2A8770)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7D10)
#define RPG_CLIENT_MONOPOLYGAMEBINGODATA__INITBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0x1C2A7D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameBingoData_TypeDefinitionIndex = 66305;

	class MonopolyGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FlipPosList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BoomPosList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoCBubbleTextID; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoBBubbleTextID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _ResourceID2TextID; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ResourceIDList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _BingoABubbleTextID; // 0x40
		::System::Boolean _IsGameOver_k__BackingField; // 0x48
		::System::UInt32 _BaseValue_k__BackingField; // 0x4C
		::RPG::Client::TextID _BoomTextID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyGameBingoData* Create(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::RPG::Client::MonopolyGameBingoData*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void SyncBingoFlipCookie(::Class_1_FB4A4ADDA7338C08_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SYNCBINGOFLIPCOOKIE_OFFSET))(this, a1);
		}

		::System::Void ClearBubbleTextID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_CLEARBUBBLETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID GetBingoABubbleTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOABUBBLETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetBingoBBubbleTextID(::System::Boolean a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOBBUBBLETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetBingoCBubbleTextID(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GETBINGOCBUBBLETEXTID_OFFSET))(this, a1);
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

		::System::Void set_BaseValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BASEVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_ISGAMEOVER_OFFSET))(this);
		}

		::System::Void set_IsGameOver(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_ISGAMEOVER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FlipPosList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_FLIPPOSLIST_OFFSET))(this);
		}

		::System::Void set_FlipPosList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_FLIPPOSLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ResourceIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_RESOURCEIDLIST_OFFSET))(this);
		}

		::System::Void set_ResourceIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_RESOURCEIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BoomPosList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_GET_BOOMPOSLIST_OFFSET))(this);
		}

		::System::Void set_BoomPosList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEBINGODATA_SET_BOOMPOSLIST_OFFSET))(this, a1);
		}
	};
}
