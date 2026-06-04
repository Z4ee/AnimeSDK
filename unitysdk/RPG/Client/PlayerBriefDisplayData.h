#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_6CEA13619F869F51;
namespace Proto { class AssistSimpleInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class FriendModule; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC497960)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xC496B40)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0xC4971A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0xC4965D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET UNITYSDK_OFFSET(0xC497690)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xC4974C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET UNITYSDK_OFFSET(0xC4971F0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC498170)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xC497BF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xC497D00)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xC497DC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC488220)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xC497FC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0xC4980C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xC4889F0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC498160)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0xC497DD0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC488080)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC497F30)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xC4980A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC497F50)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC498190)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET UNITYSDK_OFFSET(0xC497B90)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC498180)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC496A80)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC496AE0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xC4980B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xC4969E0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC4981A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC496500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBriefDisplayData_TypeDefinitionIndex = 60057;

	class PlayerBriefDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x10
		::Class_1_075C34D03AFA1215_7* _PlayerOutfit_k__BackingField; // 0x18
		::System::Collections::Generic::IList_1<::Proto::AssistSimpleInfo*>* _AssistInfos; // 0x20
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x28
		::System::String* OriginName; // 0x30
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x38
		::System::UInt32 Level; // 0x40
		::System::Boolean IsBanned; // 0x44
		::System::Boolean IsOnline; // 0x45
		::RPG::Client::DateTimePro _LastLogoutTime; // 0x48
		::System::UInt32 BubbleID; // 0x50
		::System::UInt32 UID; // 0x54
		::System::UInt32 _LastLogoutTimeStamp; // 0x58
		::System::Int64 _UpdateTimeStamp_k__BackingField; // 0x60
		::System::UInt32 _ApplyTimeStamp_k__BackingField; // 0x68
		::System::UInt32 AssistAvatarDressedSkinID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByPlayerSimpleInfo(::Proto::PlayerSimpleInfo* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByLocalPlayer()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET))();
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByOnlinePlayRoomPlayerSimpleInfo(::Class_1_6CEA13619F869F51* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::Class_1_6CEA13619F869F51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByPos(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByIndex(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByAvatarID(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET))(this, a1);
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

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Class_1_075C34D03AFA1215_7* get_PlayerOutfit()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_075C34D03AFA1215_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET))(this, a1);
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

		::System::Void set_ApplyTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_UpdateTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::FriendModule* get__FriendModule()
		{
			return ((::RPG::Client::FriendModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET))(this);
		}
	};
}
