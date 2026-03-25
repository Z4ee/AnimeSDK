#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContactData; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageSectionData; }
namespace System { class String; }

#define RPG_CLIENT_PHONENOTICEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F3A630)
#define RPG_CLIENT_PHONENOTICEDATA_GETMISSIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x9F3A9F0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9F3A860)
#define RPG_CLIENT_PHONENOTICEDATA_GET_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x9F3A920)
#define RPG_CLIENT_PHONENOTICEDATA_GET_HASLINKMISSION_OFFSET UNITYSDK_OFFSET(0x9F3A9C0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9F3A880)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F3A7D0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x9F3A960)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ISWAITINGCHOOSE_OFFSET UNITYSDK_OFFSET(0x9F3A8E0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x9F3A900)
#define RPG_CLIENT_PHONENOTICEDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F3A940)
#define RPG_CLIENT_PHONENOTICEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F3A7F0)
#define RPG_CLIENT_PHONENOTICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F3A7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneNoticeData_TypeDefinitionIndex = 53700;

	class PhoneNoticeData : public ::System::Object
	{
	public:
		::RPG::Client::MessageGroupData* _GroupData; // 0x10
		::RPG::Client::MessageContactData* _ContactData; // 0x18
		::RPG::Client::MessageSectionData* _SectionData; // 0x20

		::System::Void _ctor(::RPG::Client::MessageContactData* contactData, ::RPG::Client::MessageGroupData* groupData, ::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContactData*, ::RPG::Client::MessageGroupData*, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA__CTOR_OFFSET))(this, contactData, groupData, sectionData);
		}

		static ::RPG::Client::PhoneNoticeData* Create(::RPG::Client::MessageContactData* contactData, ::System::UInt32 groupID)
		{
			return ((::RPG::Client::PhoneNoticeData*(*)(::RPG::Client::MessageContactData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_CREATE_OFFSET))(contactData, groupID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_ICON_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_ISWAITINGCHOOSE_OFFSET))(this);
		}

		::System::Int64 get_LastTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_LASTTIME_OFFSET))(this);
		}

		::System::Boolean get_HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_HASBATTLE_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_LINKMISSIONID_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_HasLinkMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GET_HASLINKMISSION_OFFSET))(this);
		}

		::System::UInt32 GetMissionPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_GETMISSIONPRIORITY_OFFSET))(this);
		}
	};
}
