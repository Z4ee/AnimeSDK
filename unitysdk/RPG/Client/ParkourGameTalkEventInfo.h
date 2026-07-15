#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ParkourTriggerEventContentRow; }
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1A2F59F0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETKEY_OFFSET UNITYSDK_OFFSET(0x1A2F5FA0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETPARKOURTALKTYPE_OFFSET UNITYSDK_OFFSET(0x1A2ED7E0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKIMGPATH_OFFSET UNITYSDK_OFFSET(0x1A2ED840)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKTEXTID_OFFSET UNITYSDK_OFFSET(0x1A2ED8A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0x1A2F5E50)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1A2F57F0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A2F5770)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_LIMITREPEATTIME_OFFSET UNITYSDK_OFFSET(0x1A2F5810)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_ORIGINID_OFFSET UNITYSDK_OFFSET(0x1A2F5790)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0x1A2F57D0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1A2F57B0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET__META_OFFSET UNITYSDK_OFFSET(0x1A2F5990)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1A2F5800)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A2F5780)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_ORIGINID_OFFSET UNITYSDK_OFFSET(0x1A2F57A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0x1A2F57E0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1A2F57C0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F5B30)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__GETPARKOURTRIGGEREVENTCONTENTROW_OFFSET UNITYSDK_OFFSET(0x1A2F5FF0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1A2F5B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameTalkEventInfo_TypeDefinitionIndex = 59105;

	class ParkourGameTalkEventInfo : public ::System::Object
	{
	public:
		::System::UInt32 _RandomIndex_k__BackingField; // 0x10
		::System::UInt32 _EventID_k__BackingField; // 0x14
		::System::UInt32 _Param; // 0x18
		::System::UInt64 _CreateTime_k__BackingField; // 0x20
		::System::UInt32 _OriginID_k__BackingField; // 0x28
		::System::UInt32 _TargetID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_ORIGINID_OFFSET))(this);
		}

		::System::Void set_OriginID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_ORIGINID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_TARGETID_OFFSET))(this);
		}

		::System::Void set_TargetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_TARGETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RandomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_RANDOMINDEX_OFFSET))(this);
		}

		::System::Void set_RandomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_RANDOMINDEX_OFFSET))(this, a1);
		}

		::System::UInt64 get_CreateTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_CREATETIME_OFFSET))(this);
		}

		::System::Void set_CreateTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_CREATETIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_LimitRepeatTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_LIMITREPEATTIME_OFFSET))(this);
		}

		static ::RPG::Client::ParkourGameTalkEventInfo* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::ParkourGameTalkEventInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* GetTargetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTARGETICONPATH_OFFSET))(this);
		}

		::System::UInt32 GetKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETKEY_OFFSET))(this);
		}

		::RPG::GameCore::ParkourTalkType GetParkourTalkType()
		{
			return ((::RPG::GameCore::ParkourTalkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETPARKOURTALKTYPE_OFFSET))(this);
		}

		::System::String* GetTalkImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKIMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID GetTalkTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKTEXTID_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO__INIT_OFFSET))(this);
		}

		::RPG::GameCore::ParkourTriggerEventContentRow* _GetParkourTriggerEventContentRow()
		{
			return ((::RPG::GameCore::ParkourTriggerEventContentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO__GETPARKOURTRIGGEREVENTCONTENTROW_OFFSET))(this);
		}

		::RPG::GameCore::ParkourTriggerEventRow* get__Meta()
		{
			return ((::RPG::GameCore::ParkourTriggerEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET__META_OFFSET))(this);
		}
	};
}
