#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BackGroundMusicGroupType.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"

class Class_1_17B7F24022EF4FB3;
class Class_1_E2ED5CFC288D1227_1;
namespace RPG::GameCore { class BackGroundMusicConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_BGMDESC_OFFSET UNITYSDK_OFFSET(0xC21DA10)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_BPM_OFFSET UNITYSDK_OFFSET(0xC21DB60)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xC21DCC0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC21D990)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC21DDF0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC21CEE0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISPLAYED_OFFSET UNITYSDK_OFFSET(0xC21D950)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC21D930)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICNAME_OFFSET UNITYSDK_OFFSET(0xC21D9B0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICSWITCHNAME_OFFSET UNITYSDK_OFFSET(0xC21DA40)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_RHYTHMCOLOUR_OFFSET UNITYSDK_OFFSET(0xC21DC10)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC21D970)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xC21D9E0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET__NORMALROW_OFFSET UNITYSDK_OFFSET(0xC21DAF0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET__WHITENOISEROW_OFFSET UNITYSDK_OFFSET(0xC21DD80)
#define RPG_CLIENT_MUSICALBUMITEMDATA_RESETSTATUS_OFFSET UNITYSDK_OFFSET(0xC21D080)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SETPLAYED_OFFSET UNITYSDK_OFFSET(0xC21CE90)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0xC21CE40)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISPLAYED_OFFSET UNITYSDK_OFFSET(0xC21D960)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC21D940)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC21D980)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_MUSICALBUMITEMDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0xC21D720)
#define RPG_CLIENT_MUSICALBUMITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC21CE30)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumItemData_TypeDefinitionIndex = 62049;

	class MusicAlbumItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::BackGroundMusicConfigRow* _Row; // 0x10
		::RPG::GameCore::BackGroundMusicGroupType _Type_k__BackingField; // 0x18
		::System::Boolean _IsPlayed_k__BackingField; // 0x1C
		::System::Boolean _IsUnlock_k__BackingField; // 0x1D

		::System::Void _ctor(::RPG::GameCore::BackGroundMusicConfigRow* a1, ::RPG::GameCore::BackGroundMusicGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicConfigRow*, ::RPG::GameCore::BackGroundMusicGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_RESETSTATUS_OFFSET))(this);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SETUNLOCK_OFFSET))(this, a1);
		}

		::System::Void SetPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SETPLAYED_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_RPG_Client_MusicAlbumItemData__CompareTo(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_MUSICALBUMITEMDATA__COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISPLAYED_OFFSET))(this);
		}

		::System::Void set_IsPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISPLAYED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::BackGroundMusicGroupType get_Type()
		{
			return ((::RPG::GameCore::BackGroundMusicGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::BackGroundMusicGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_MusicName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGMDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_BGMDESC_OFFSET))(this);
		}

		::System::String* get_MusicSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICSWITCHNAME_OFFSET))(this);
		}

		::System::UInt32 get_BPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_BPM_OFFSET))(this);
		}

		::RPG::GameCore::RhythmType get_RhythmColour()
		{
			return ((::RPG::GameCore::RhythmType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_RHYTHMCOLOUR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_EVENTNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Class_1_17B7F24022EF4FB3* get__NormalRow()
		{
			return ((::Class_1_17B7F24022EF4FB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET__NORMALROW_OFFSET))(this);
		}

		::Class_1_E2ED5CFC288D1227_1* get__WhiteNoiseRow()
		{
			return ((::Class_1_E2ED5CFC288D1227_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET__WHITENOISEROW_OFFSET))(this);
		}
	};
}
