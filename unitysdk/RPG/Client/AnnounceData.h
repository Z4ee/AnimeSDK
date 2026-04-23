#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_27;
namespace System { class String; }

#define RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x9D2F710)
#define RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x9D2F810)
#define RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9D2F7C0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9D2F860)
#define RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x9D2F770)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET UNITYSDK_OFFSET(0x9D2F920)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0x9D2F750)
#define RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x9D2F730)
#define RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET UNITYSDK_OFFSET(0x9D2F8B0)
#define RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D2F650)
#define RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x9D2F6C0)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x9D2F720)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0x9D2F760)
#define RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x9D2F740)
#define RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2F5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnnounceData_TypeDefinitionIndex = 61170;

	class AnnounceData : public ::System::Object
	{
	public:
		::Class_1_EBB10EC01CCC4716_27* _Proto; // 0x10
		::System::Boolean _IsStripe_k__BackingField; // 0x18
		::System::Boolean _AlreadyShowed_k__BackingField; // 0x19
		::System::UInt32 _LastShowTime_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_EBB10EC01CCC4716_27* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET))(this, proto);
		}

		::System::Void Refresh(::Class_1_EBB10EC01CCC4716_27* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void SetAlreadyShowed(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET))(this, timeStamp);
		}

		::System::Boolean get_AlreadyShowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET))(this);
		}

		::System::Void set_AlreadyShowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET))(this, value);
		}

		::System::UInt32 get_LastShowTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET))(this);
		}

		::System::Void set_LastShowTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsStripe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET))(this);
		}

		::System::Void set_IsStripe(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Frequency()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::String* get_TipText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCenterSystemLast5EveryMinutes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET))(this);
		}
	};
}
