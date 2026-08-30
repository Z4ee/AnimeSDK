#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ParkourTriggerEventContentRow; }
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xDA38790)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETKEY_OFFSET UNITYSDK_OFFSET(0xDA38D40)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETPARKOURTALKTYPE_OFFSET UNITYSDK_OFFSET(0xDA305A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKIMGPATH_OFFSET UNITYSDK_OFFSET(0xDA30600)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTALKTEXTID_OFFSET UNITYSDK_OFFSET(0xDA30660)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GETTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0xDA38BF0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xDA38590)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xDA38510)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_LIMITREPEATTIME_OFFSET UNITYSDK_OFFSET(0xDA385B0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_ORIGINID_OFFSET UNITYSDK_OFFSET(0xDA38530)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0xDA38570)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0xDA38550)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_GET__META_OFFSET UNITYSDK_OFFSET(0xDA38730)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xDA385A0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xDA38520)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_ORIGINID_OFFSET UNITYSDK_OFFSET(0xDA38540)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_RANDOMINDEX_OFFSET UNITYSDK_OFFSET(0xDA38580)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0xDA38560)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDA388D0)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__GETPARKOURTRIGGEREVENTCONTENTROW_OFFSET UNITYSDK_OFFSET(0xDA38D90)
#define RPG_CLIENT_PARKOURGAMETALKEVENTINFO__INIT_OFFSET UNITYSDK_OFFSET(0xDA388E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameTalkEventInfo_TypeDefinitionIndex = 61940;

	class ParkourGameTalkEventInfo : public ::System::Object
	{
	public:
		::System::UInt64 _CreateTime_k__BackingField; // 0x10
		::System::UInt32 _RandomIndex_k__BackingField; // 0x18
		::System::UInt32 _EventID_k__BackingField; // 0x1C
		::System::UInt32 _Param; // 0x20
		::System::UInt32 _TargetID_k__BackingField; // 0x24
		::System::UInt32 _OriginID_k__BackingField; // 0x28

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
