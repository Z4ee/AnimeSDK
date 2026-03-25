#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ParkourTriggerEventContentRow; }
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9F0F190)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETKEY_OFFSET UNITYSDK_OFFSET(0x9F0F650)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETPARKOURTALKTYPE_OFFSET UNITYSDK_OFFSET(0x9F070A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKIMGPATH_OFFSET UNITYSDK_OFFSET(0x9F07100)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKTEXTID_OFFSET UNITYSDK_OFFSET(0x9F07160)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0x9F0F520)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x9F0EF90)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9F0EF10)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_LIMITREPEATTIME_OFFSET UNITYSDK_OFFSET(0x9F0EFB0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_ORIGINID_OFFSET UNITYSDK_OFFSET(0x9F0EF30)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0x9F0EF70)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x9F0EF50)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET__META_OFFSET UNITYSDK_OFFSET(0x9F0F130)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x9F0EFA0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9F0EF20)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_ORIGINID_OFFSET UNITYSDK_OFFSET(0x9F0EF40)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0x9F0EF80)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x9F0EF60)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0F2D0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__GETPARKOURTRIGGEREVENTCONTENTROW_OFFSET UNITYSDK_OFFSET(0x9F0F6A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__INIT_OFFSET UNITYSDK_OFFSET(0x9F0F2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameTalkEventInfo_TypeDefinitionIndex = 50205;

	class ParkourGameTalkEventInfo : public ::System::Object
	{
	public:
		::System::UInt32 _EventID_k__BackingField; // 0x10
		::System::UInt32 _RandomIndex_k__BackingField; // 0x14
		::System::UInt64 _CreateTime_k__BackingField; // 0x18
		::System::UInt32 _Param; // 0x20
		::System::UInt32 _OriginID_k__BackingField; // 0x24
		::System::UInt32 _TargetID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_EVENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_ORIGINID_OFFSET))(this);
		}

		::System::Void set_OriginID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_ORIGINID_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_TARGETID_OFFSET))(this);
		}

		::System::Void set_TargetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_TARGETID_OFFSET))(this, value);
		}

		::System::UInt32 get_RandomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_RANDOMINDEX_OFFSET))(this);
		}

		::System::Void set_RandomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_RANDOMINDEX_OFFSET))(this, value);
		}

		::System::UInt64 get_CreateTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_CREATETIME_OFFSET))(this);
		}

		::System::Void set_CreateTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_CREATETIME_OFFSET))(this, value);
		}

		::System::UInt64 get_LimitRepeatTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_LIMITREPEATTIME_OFFSET))(this);
		}

		static ::RPG::Client::ParkourGameTalkEventInfo* Create(::System::UInt32 eventID, ::System::UInt32 originID, ::System::UInt32 targetID, ::System::UInt32 param)
		{
			return ((::RPG::Client::ParkourGameTalkEventInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMETALKEVENTINFO_CREATE_OFFSET))(eventID, originID, targetID, param);
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
