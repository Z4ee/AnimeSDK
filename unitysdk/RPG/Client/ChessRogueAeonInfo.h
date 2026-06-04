#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00BAB2C33D444F88_5;
class Class_1_049EA20829C3E01B;
class Class_1_D818CA99906737D6;
class Class_1_FFBE0C992415AD1F;
namespace RPG::Client { class ChessRogueAeonDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET UNITYSDK_OFFSET(0xB644C10)
#define RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6445B0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET UNITYSDK_OFFSET(0xB644D60)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB645030)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB645010)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0xB644F90)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xB644FF0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xB644FB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET UNITYSDK_OFFSET(0xB645110)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xB644FD0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB644330)
#define RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0xB644B60)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB645020)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0xB644FA0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xB645000)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xB644FC0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xB644FE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET UNITYSDK_OFFSET(0xB644880)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xB644BB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET UNITYSDK_OFFSET(0xB644D10)
#define RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6451E0)
#define RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET UNITYSDK_OFFSET(0xB644380)
#define RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB6449B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonInfo_TypeDefinitionIndex = 62541;

	class ChessRogueAeonInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueAeonBuffInfo* _AeonBuffInfo; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _AeonModifiers_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* _ChessRogueAeonDataDict_k__BackingField; // 0x28
		::System::Int32 _CurAeonModifierValue_k__BackingField; // 0x30
		::System::UInt32 _SelectedAeonID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonInfo(::Class_1_FFBE0C992415AD1F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFBE0C992415AD1F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET))(this, a1);
		}

		::System::Void ResetParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonModifierValue(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddAeonModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SyncRogueNousBranch(::Class_1_049EA20829C3E01B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>* GetChessRogueAeonSortedData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET))(this);
		}

		::System::Void _InitChessRogueAeonDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET))(this);
		}

		::System::Void _RefreshAeonModifiers(::Class_1_00BAB2C33D444F88_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* get_ChessRogueAeonDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET))(this);
		}

		::System::Void set_SelectedAeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET))(this, a1);
		}

		::System::Int32 get_CurAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_CurAeonModifierValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_AeonModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET))(this);
		}

		::System::Void set_AeonModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAeonBuffInfo* get_AeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAeonDataItem* get_SelectedAeonData()
		{
			return ((::RPG::Client::ChessRogueAeonDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET))(this);
		}
	};
}
