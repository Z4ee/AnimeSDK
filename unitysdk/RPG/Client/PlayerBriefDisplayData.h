#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_6E708EAB438EC183_4;
namespace Proto { class AssistSimpleInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class FriendModule; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9FDF410)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x9FDE8B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0x9FDE3C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9FDF160)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x9FDEFA0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET UNITYSDK_OFFSET(0x9FDECF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9FDFBC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x9FDF650)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0x9FDF750)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x9FDF810)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FD1900)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9FDFA10)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x9FDFB10)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x9FD2050)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9FDFBB0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9FDF820)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FD1760)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FDF980)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9FDFAF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FDF9A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET UNITYSDK_OFFSET(0x9FDFC60)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9FDE7F0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9FDE850)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9FDFB00)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9FDE750)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDE2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBriefDisplayData_TypeDefinitionIndex = 52175;

	class PlayerBriefDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x10
		::System::Collections::Generic::IList_1<::Proto::AssistSimpleInfo*>* _AssistInfos; // 0x18
		::Class_1_6E708EAB438EC183_4* _PlayerOutfit_k__BackingField; // 0x20
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x28
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x30
		::System::String* OriginName; // 0x38
		::System::UInt32 AssistAvatarDressedSkinID; // 0x40
		::System::UInt32 Level; // 0x44
		::RPG::Client::DateTimePro _LastLogoutTime; // 0x48
		::System::Boolean IsOnline; // 0x50
		::System::Boolean IsBanned; // 0x51
		::System::UInt32 BubbleID; // 0x54
		::System::UInt32 _LastLogoutTimeStamp; // 0x58
		::System::UInt32 UID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByPlayerSimpleInfo(::Proto::PlayerSimpleInfo* info)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET))(info);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByLocalPlayer()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET))();
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByPos(::System::Int32 pos)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET))(this, pos);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByIndex(::System::Int32 index)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET))(this, index);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByAvatarID(::System::Int32 avatarID)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Int32 CompareTo(::RPG::Client::PlayerBriefDisplayData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 get_AssistAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::TimeSpan get_LogoutTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Class_1_6E708EAB438EC183_4* get_PlayerOutfit()
		{
			return ((::Class_1_6E708EAB438EC183_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_6E708EAB438EC183_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET))(this);
		}

		::System::UInt32 get_LastLogoutTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ApplyTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::FriendModule* get__FriendModule()
		{
			return ((::RPG::Client::FriendModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET))(this);
		}
	};
}
