#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69458B3547BA5011;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC2FB810)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0xC2FDB20)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xC2FDB40)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC2FDB00)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0xC2FDB30)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xC2FDB50)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC2FDB10)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC2FDB60)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomRecentVisitorInfo_TypeDefinitionIndex = 62093;

	class OnlinePlayRoomRecentVisitorInfo : public ::System::Object
	{
	public:
		::System::String* _OperationRecordText_k__BackingField; // 0x10
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData_k__BackingField; // 0x18
		::System::Int64 _EnterRoomTime_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_PlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_PlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Int64 get_EnterRoomTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET))(this);
		}

		::System::Void set_EnterRoomTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET))(this, a1);
		}

		::System::String* get_OperationRecordText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET))(this);
		}

		::System::Void set_OperationRecordText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET))(this, a1);
		}

		static ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* Create(::Class_1_69458B3547BA5011* a1)
		{
			return ((::RPG::Client::OnlinePlayRoomRecentVisitorInfo*(*)(::Class_1_69458B3547BA5011*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET))(a1);
		}
	};
}
