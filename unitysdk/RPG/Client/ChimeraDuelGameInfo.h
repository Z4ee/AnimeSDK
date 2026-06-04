#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
namespace RPG::Client { class ChimeraDuelGameData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB683730)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0xB6837C0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_GET_LASTGAMECHIMERAIDS_OFFSET UNITYSDK_OFFSET(0xB6829B0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_GET_LASTGAMEMASTERID_OFFSET UNITYSDK_OFFSET(0xB682990)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_GET_NEXTGAMEID_OFFSET UNITYSDK_OFFSET(0xB677D10)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_ISGAMEPASSED_OFFSET UNITYSDK_OFFSET(0xB683AA0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xB683A50)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_ISNEXTGAMECUSTOM_OFFSET UNITYSDK_OFFSET(0xB683890)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_SET_LASTGAMECHIMERAIDS_OFFSET UNITYSDK_OFFSET(0xB6829C0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_SET_LASTGAMEMASTERID_OFFSET UNITYSDK_OFFSET(0xB6829A0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMECHIMERAIDS_OFFSET UNITYSDK_OFFSET(0xB682CF0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMEINFO_OFFSET UNITYSDK_OFFSET(0xB683050)
#define RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMEMASTERID_OFFSET UNITYSDK_OFFSET(0xB682CA0)
#define RPG_CLIENT_CHIMERADUELGAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6829D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameInfo_TypeDefinitionIndex = 59300;

	class ChimeraDuelGameInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameData*>* _DataDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _LastGameChimeraIDs_k__BackingField; // 0x18
		::System::UInt32 _LastGameMasterID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_NextGameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_GET_NEXTGAMEID_OFFSET))(this);
		}

		::System::UInt32 get_LastGameMasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_GET_LASTGAMEMASTERID_OFFSET))(this);
		}

		::System::Void set_LastGameMasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_SET_LASTGAMEMASTERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LastGameChimeraIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_GET_LASTGAMECHIMERAIDS_OFFSET))(this);
		}

		::System::Void set_LastGameChimeraIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_SET_LASTGAMECHIMERAIDS_OFFSET))(this, a1);
		}

		::System::Void SyncLastGameMasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMEMASTERID_OFFSET))(this, a1);
		}

		::System::Void SyncLastGameChimeraIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMECHIMERAIDS_OFFSET))(this, a1);
		}

		::System::Void SyncLastGameInfo(::Class_1_2135BD0826D34A80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_SYNCLASTGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_GETDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsNextGameCustom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_ISNEXTGAMECUSTOM_OFFSET))(this);
		}

		::System::Boolean IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Boolean IsGamePassed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEINFO_ISGAMEPASSED_OFFSET))(this, a1);
		}
	};
}
