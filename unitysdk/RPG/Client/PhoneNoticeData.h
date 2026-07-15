#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContactData; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageSectionData; }
namespace System { class String; }

#define RPG_CLIENT_PHONENOTICEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17F506F0)
#define RPG_CLIENT_PHONENOTICEDATA_GETMISSIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x17F50C00)
#define RPG_CLIENT_PHONENOTICEDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x17F50910)
#define RPG_CLIENT_PHONENOTICEDATA_GET_HASBATTLE_OFFSET UNITYSDK_OFFSET(0x17F50A60)
#define RPG_CLIENT_PHONENOTICEDATA_GET_HASLINKMISSION_OFFSET UNITYSDK_OFFSET(0x17F50B80)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x17F50960)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x17F50840)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x17F50B00)
#define RPG_CLIENT_PHONENOTICEDATA_GET_ISWAITINGCHOOSE_OFFSET UNITYSDK_OFFSET(0x17F509C0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x17F50A10)
#define RPG_CLIENT_PHONENOTICEDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x17F50AB0)
#define RPG_CLIENT_PHONENOTICEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17F50890)
#define RPG_CLIENT_PHONENOTICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F50830)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneNoticeData_TypeDefinitionIndex = 63140;

	class PhoneNoticeData : public ::System::Object
	{
	public:
		::RPG::Client::MessageSectionData* _SectionData; // 0x10
		::RPG::Client::MessageGroupData* _GroupData; // 0x18
		::RPG::Client::MessageContactData* _ContactData; // 0x20

		::System::Void _ctor(::RPG::Client::MessageContactData* a1, ::RPG::Client::MessageGroupData* a2, ::RPG::Client::MessageSectionData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContactData*, ::RPG::Client::MessageGroupData*, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::PhoneNoticeData* Create(::RPG::Client::MessageContactData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PhoneNoticeData*(*)(::RPG::Client::MessageContactData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONENOTICEDATA_CREATE_OFFSET))(a1, a2);
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
