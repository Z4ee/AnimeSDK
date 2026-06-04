#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_56;
class Class_1_21DCD4640D389503_41;
class Class_1_4AF9832A6EE2A67F_4;
class Class_1_69A5DDEA5F31A2DF_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueTournGame; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournMiracleInfo; }
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }
namespace RPG::Client { class RogueTournPersonaStyleInfo; }
namespace RPG::Client { class RogueTournSeasonData; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC7EE6D0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7EDBE0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0xC7EECB0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC7EF5F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC7EF050)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC7EF1A0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7EEE00)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNHEXINFO_OFFSET UNITYSDK_OFFSET(0xC7EEF50)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xC7EF4F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET UNITYSDK_OFFSET(0xC7EF3F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xC7EF2F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC7F0150)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xC7EED00)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0xC7F0190)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xC7EFFD0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC7EF0A0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_HEXINFO_OFFSET UNITYSDK_OFFSET(0xC7EEFE0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ISNAMEEMPTY_OFFSET UNITYSDK_OFFSET(0xC7F0090)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xC7EF1F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7F0110)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0xC7F0070)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7EEE50)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7EF770)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC7F0170)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROOMCARDDECKINFO_OFFSET UNITYSDK_OFFSET(0xC7EF580)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SEASONDATA_OFFSET UNITYSDK_OFFSET(0xC7F0130)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC7EFF90)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_STYLEINFO_OFFSET UNITYSDK_OFFSET(0xC7EF480)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xC7EFFB0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0xC7EF380)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC7EFF50)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_RENAME_OFFSET UNITYSDK_OFFSET(0xC7EE5E0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SETLOCALTIME_OFFSET UNITYSDK_OFFSET(0xC7EEAC0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC7F0160)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7F0120)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0xC7F0080)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC7EF890)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC7F0180)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SEASONDATA_OFFSET UNITYSDK_OFFSET(0xC7F0140)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC7EFFA0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0xC7EFFC0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC7EE7B0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7F0200)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7EEC20)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC7EF9A0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7EFBF0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0xC7EF900)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournArchiveData_TypeDefinitionIndex = 63128;

	class RogueTournArchiveData : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_DefaultArchiveName()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(RogueTournArchiveData_TypeDefinitionIndex)->GetStaticField(0xB010);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _LineupAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _AvatarDataList_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGame* _GameData; // 0x20
		::RPG::Client::RogueTournSeasonData* _SeasonData_k__BackingField; // 0x28
		::System::String* _Name; // 0x30
		::RPG::Client::DateTimePro _Time_k__BackingField; // 0x38
		::System::UInt32 _SlotIndex_k__BackingField; // 0x40
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x44
		::System::Int64 _LocalTime_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournArchiveData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* GetRogueTournHexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNHEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* GetRogueTournPersonaStyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNPERSONASTYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* GetRogueTournPersonaRoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNPERSONAROOMCARDDECKINFO_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_21DCD4640D389503_41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_ISEXPIRED_OFFSET))(this);
		}

		::System::Void SetLocalTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SETLOCALTIME_OFFSET))(this, a1);
		}

		::System::Void Rename(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_RENAME_OFFSET))(this, a1);
		}

		::System::Void _SyncRogueCoin(::Class_1_4AF9832A6EE2A67F_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCROGUECOIN_OFFSET))(this, a1);
		}

		::System::Void _SyncAvatarData(::Class_1_69A5DDEA5F31A2DF_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncLineupAvatarIDs(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_56*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_56*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCLINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_Time()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_TIME_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::Int64 get_LocalTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LOCALTIME_OFFSET))(this);
		}

		::System::Void set_LocalTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LOCALTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNameEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ISNAMEEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LineupAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LINEUPAVATARIDS_OFFSET))(this);
		}

		::System::Void set_LineupAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournSeasonData* get_SeasonData()
		{
			return ((::RPG::Client::RogueTournSeasonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SEASONDATA_OFFSET))(this);
		}

		::System::Void set_SeasonData(::RPG::Client::RogueTournSeasonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournSeasonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SEASONDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_AvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_AVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_AvatarDataList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_AVATARDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_ROGUECOINNUM_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexInfo* get_HexInfo()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_HEXINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleInfo* get_StyleInfo()
		{
			return ((::RPG::Client::RogueTournPersonaStyleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_STYLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* get_RoomCardDeckInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROOMCARDDECKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::System::Boolean get_EnableGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENABLEGODMODE_OFFSET))(this);
		}
	};
}
